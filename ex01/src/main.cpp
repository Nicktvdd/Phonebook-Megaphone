/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvan-den <nvan-den@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 10:24:28 by nvan-den          #+#    #+#             */
/*   Updated: 2023/09/28 14:25:35 by nvan-den         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Phonebook.hpp"

int	main(void)
{
	Phonebook 	pb;
	Contact		contact;
	std::string	input;
	
	pb.set_size(0);
	std::cout << "Hi, welcome to your Phonebook, dickhead!" << std::endl;
	while (1)
	{
		std::cout << std::endl << "What would you like to do? (ADD, SEARCH or EXIT)" << std::endl;
		std::getline(std::cin, input);
		std::cout << std::endl;
		if (input == "ADD")
		{
			if (pb.get_size() == 8)
			{
				pb.rotate_contacts(&pb);
				pb.set_contact(7, contact);
			}
			else
			{
				pb.set_contact(pb.get_size(), contact);
				pb.set_size(pb.get_size() + 1);
			}
		}
		else if (input == "SEARCH")
			pb.display_contacts();
		else if (input == "EXIT")
			break ;
		else
			std::cout << "Please use the commands ADD, SEARCH or EXIT." << std::endl;
    }
	std::cout << "SELF DESTRUCT" << std::endl;
	return (0);
}
