/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvan-den <nvan-den@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 08:45:41 by nvan-den          #+#    #+#             */
/*   Updated: 2023/09/26 09:53:20 by nvan-den         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <phonebook.hpp>




void    search(void)
{

}

void    exit(void)
{
    
}

int main(int argc, char const *argv[])
{
    std::string command;
    std::cout << "Enter command (ADD, SEARCH or EXIT): ";
    std::getline(std::cin, command);
    
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
