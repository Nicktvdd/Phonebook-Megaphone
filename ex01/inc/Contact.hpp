/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvan-den <nvan-den@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 09:43:34 by nvan-den          #+#    #+#             */
/*   Updated: 2023/09/26 10:14:40 by nvan-den         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{
private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;
    int         index;

public:
    Contact     add_contact(void);

    void        setFirstname(std::string name);
	void	    setLastname(std::string name);
	void	    setNickname(std::string name);
	void	    setPhonenumber(std::string phonenumber);
	void	    setSecret(std::string secret);
	void	    setIndex(int i);

	std::string getFirstname();
	std::string	getLastname();
	std::string	getNickname();
	std::string	getPhonenumber();
	std::string	getSecret();
	int	        getIndex();
};

#endif