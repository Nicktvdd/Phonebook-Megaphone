/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvan-den <nvan-den@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 08:47:24 by nvan-den          #+#    #+#             */
/*   Updated: 2023/09/26 12:39:01 by nvan-den         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "./Contact.hpp"
#include <iostream>
#include <iomanip>
#include <string>

class Phonebook
{
private:
    Contact contacts[8];
    int     size;
    
public:
	void	display_contacts();
	void	choose_contact();
	void	rotate_contacts(Phonebook *pb);
	int		get_size();
	void	set_size(int n);
	void	set_contact(int index, Contact contact);
	Contact	get_contact(int index);
};

#endif

