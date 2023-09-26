/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvan-den <nvan-den@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 08:47:24 by nvan-den          #+#    #+#             */
/*   Updated: 2023/09/26 09:40:30 by nvan-den         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <cstring>

class PhoneBook
{
private:

    
    
    /* data */
public:
    PhoneBook(/* args */);
    ~PhoneBook();
};

PhoneBook::PhoneBook(/* args */)
{
}

PhoneBook::~PhoneBook()
{
}

class Contact
{
private:
    /* data */
    std::string first_name;
    std::string last_name;
    std::string nickname;
    int phone_number;
    std::string darkest_secret;
public:
    Contact(/* args */);
    ~Contact();
};

Contact::Contact(/* args */)
{
}

Contact::~Contact()
{
}

