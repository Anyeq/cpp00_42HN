/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asando <asando@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 15:49:34 by asando            #+#    #+#             */
/*   Updated: 2026/05/15 13:26:58 by asando           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::setFirstName(const std::string &str) 
{ 
	this->_firstName = str;
	return ;
}

void	Contact::setLastName(const std::string &str)
{
	this->_lastName = str;
	return ;
}

void	Contact::setNickName(const std::string &str)
{
	this->_nickName = str;
	return ;
}

void	Contact::setPhoneNumber(const std::string &str)
{
	this->_phoneNumber = str;
	return ;
}

void	Contact::darkestSecret(const std::string &str)
{
	this->_darkestSecret= str;
	return ;
}
