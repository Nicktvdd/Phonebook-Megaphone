/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvan-den <nvan-den@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 15:14:58 by nvan-den          #+#    #+#             */
/*   Updated: 2023/09/22 15:14:59 by nvan-den         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int ft_strlen(char *s)
{
    int i;
    for (i = 0; s && s[i]; i++);
    
    return (i);
}

char    ft_toupper(char c)
{
    return ((c >= 97 && c <= 122) ? c - 32 : c);
}

int main(int argc, char **argv)
{
    if (argc > 1)
    {
        for (int i = 1; i < argc; i++)
        {
            for (int j = 0; j < ft_strlen(argv[i]); j++)
            {
                std::cout << ft_toupper(argv[i][j]);
            }
        }
            std::cout << std::endl;
    }
    else
        std::cout << "* LOUD AND UBEARABLE FEEDBACK NOISE *" << std::endl;
}