/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvan-den <nvan-den@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 08:45:41 by nvan-den          #+#    #+#             */
/*   Updated: 2023/09/26 09:36:26 by nvan-den         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <phonebook.hpp>


void    add(void)
{
    Contact contact;
    while (!contact.first_name || !contact.last_me || !contact.nickname || 
        !contact.phone_number || !contact.darkest_secret)
    {
        scanf("First name: ", contact.first_name);
        scanf("First name: ", contact.last_name);
        scanf("First name: ", contact.nickname);
        scanf("First name: ", contact.phone_number);
        scanf("First name: ", contact.darkest_secret);
    }
}

void    search(void)
{
    for (int i = 0; )
}

void    exit(void)
{
    
}

int main(int argc, char const *argv[])
{
    char* command;
    scanf("Enter command (ADD, SEARCH or EXIT): ", command);
    
    if (strcmp(command, "ADD") == 0)
        add();
    else if (strcmp(command, "SEARCH") == 0)
        search();
    else if (strcmp(command, "EXIT") == 0)
        exit();
    else
        {
           printf("Invalid command"); // 
        }
    
    return 0;
}
