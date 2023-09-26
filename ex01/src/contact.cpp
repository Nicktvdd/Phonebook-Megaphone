/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvan-den <nvan-den@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 09:43:31 by nvan-den          #+#    #+#             */
/*   Updated: 2023/09/26 11:13:23 by nvan-den         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/contact.hpp"

Contact Contact::add_contact(void)
{
    Contact new_contact;

    while (new_contact.first_name.length() == 0)
    {
        std::cout << "First name: ";
        std::getline(std::cin, new_contact.first_name);
    }
    while (new_contact.last_name.length() == 0)
    {
        std::cout << "Last name: ";
        std::getline(std::cin, new_contact.last_name);
    }
    while (new_contact.nickname.length() == 0)
    {
        std::cout << "Nickname: ";
        std::getline(std::cin, new_contact.nickname);
    }
    while (new_contact.phone_number.length() == 0)
    {
        std::cout << "Phone number: ";
        std::getline(std::cin, new_contact.phone_number);
    }
    while (new_contact.darkest_secret.length() == 0)
    {
        std::cout << "Darkest secret: ";
        std::getline(std::cin, new_contact.darkest_secret);
    }
    return (new_contact);
}

void	Contact::setFirstname(std::string name)
{
	this->first_name = name;
}

void	Contact::setLastname(std::string name)
{
	this->last_name = name;
}

void	Contact::setNickname(std::string name)
{
	this->nickname = name;
}

void	Contact::setPhonenumber(std::string phone_number)
{
	this->phone_number = phone_number;
}

void	Contact::setSecret(std::string secret)
{
	this->darkest_secret = secret;
}

void	Contact::setIndex(int i)
{
	this->index = i;
}

std::string	Contact::getFirstname()
{
	return (this->first_name);
}

std::string	Contact::getLastname()
{
	return (this->last_name);
}

std::string	Contact::getNickname()
{
	return (this->nickname);
}

std::string	Contact::getPhonenumber()
{
	return (this->phone_number);
}

std::string	Contact::getSecret()
{
	return (this->darkest_secret);
}

int	Contact::getIndex()
{
	return (this->index);
}