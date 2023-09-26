/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvan-den <nvan-den@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 08:45:41 by nvan-den          #+#    #+#             */
/*   Updated: 2023/09/26 11:13:20 by nvan-den         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/phonebook.hpp"
#include "../inc/contact.hpp"

void	PhoneBook::display_contacts()
{
	int j = 0;

	if (size == 0)
	{
		std::cout << "Please add something first!" << std::endl;
		return ;
	}
    std::cout << std::setfill(' ') << std::setw(10) << "index";
    std::cout << std::setw(10) << "first name";
    std::cout << std::setw(10) << "last name";
    std::cout << std::setw(10) << "nickname" << std::endl;
    for (int i = 0; i < size; i++)
	{
		std::cout << "         " << i << "|";
		if (get_contact(i).getFirstname().length() > 9)
			std::cout << get_contact(i).getFirstname().substr(0, 9) << ".";
		else
		{
			j = get_contact(i).getFirstname().length();
			j = 10 - j;
			while (j)
			{
				std::cout << " ";
				j--;
			}
			std::cout << get_contact(i).getFirstname();
		}
		std::cout << "|";
		if (get_contact(i).getLastname().length() > 9)
			std::cout << get_contact(i).getLastname().substr(0, 9) << ".";
		else
		{
			j = get_contact(i).getLastname().length();
			j = 10 - j;
			while (j)
			{
				std::cout << " ";
				j--;
			}
			std::cout << get_contact(i).getLastname();
		}
		std::cout << "|";
		if (get_contact(i).getNickname().length() > 9)
			std::cout << get_contact(i).getNickname().substr(0, 9) << ".";
		else
		{
			j = get_contact(i).getNickname().length();
			j = 10 - j;
			while (j)
			{
				std::cout << " ";
				j--;
			}
			std::cout << get_contact(i).getNickname() << std::endl;
		}
	}
	std::cout << std::endl;
	PhoneBook::choose_contact();
}

void PhoneBook::choose_contact()
{
    std::string input;
    int index = 0;

    std::cout << "Enter the index of the contact you wish to see" << std::endl;
    std::getline(std::cin, input);
    
    if (input.length() != 1 || input[0] < '0' || input[0] >= '0' + size)
    {
        std::cout << "Invalid input. Please enter a number between 0 and " << size - 1 << "." << std::endl;
        PhoneBook::choose_contact();
        return;
    }
    index = input[0] - '0';
    std::cout << std::endl;
    std::cout << "First name        : " << get_contact(index).getFirstname() << std::endl;
    std::cout << "Last name         : " << get_contact(index).getLastname() << std::endl;
    std::cout << "Nickname          : " << get_contact(index).getNickname() << std::endl;
    std::cout << "Phone number      : " << get_contact(index).getPhonenumber() << std::endl;
    std::cout << "Darkest secret    : " << get_contact(index).getSecret() << std::endl;
}

void PhoneBook::rotate_contacts(PhoneBook *phonebook)
{
	int i = 1;
	
	while (i <= 7)
	{
		phonebook->contacts[i - 1] = phonebook->contacts[i];
		i++;
	}
}

int	PhoneBook::get_size(void)
{
	return(this->size);
}

void PhoneBook::set_size(int n)
{
	this->size = n;
}

void PhoneBook::set_contact(int index, Contact contact)
{
	this->contacts[index] = contact.add_contact();
}

Contact PhoneBook::get_contact(int index)
{
	return (this->contacts[index]);
}