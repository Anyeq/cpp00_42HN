/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ContactSet.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asando <asando@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 15:49:34 by asando            #+#    #+#             */
/*   Updated: 2026/05/25 18:16:58 by asando           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::setFirstName(const std::string &str) { 
	this->_firstName = str;
}

void	Contact::setLastName(const std::string &str) {
	this->_lastName = str;
}

void	Contact::setNickName(const std::string &str) {
	this->_nickName = str;
}

void	Contact::setPhoneNumber(const std::string &str) {
	this->_phoneNumber = str;
}

void	Contact::setDarkestSecret(const std::string &str) {
	this->_darkestSecret= str;
}
