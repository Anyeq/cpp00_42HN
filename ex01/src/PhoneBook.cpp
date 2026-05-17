/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asando <asando@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 13:30:46 by asando            #+#    #+#             */
/*   Updated: 2026/05/17 16:54:25 by asando           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include "PhoneBook.hpp"

static std::string	formatOutput(const std::string &s) {
	if (s.length() > 10)
		return (s.substr(0, 9) + ".");
	return (std::string ((10 - s.length(), ' ') + s));
}

PhoneBook::PhoneBook() : index(0), count(0) {}

void	PhoneBook::addContact() {
	std::string	input;

	std::cout << "First Name";
	std::getline(std::cin, input);
	contacts[index].setFirstName(input);
	
	std::cout << "Last Name";
	std::getline(std::cin, input);
	contacts[index].setLasttName(input);

	std::cout << "Nick Name";
	std::getline(std::cin, input);
	contacts[index].setNickName(input);

	std::cout << "Phone Number";
	std::getline(std::cin, input);
	contacts[index].setPhoneNumber(input);

	std::cout << "Darkest Secret";
	std::getline(std::cin, input);
	contacts[index].setDarkestSecret(input);

	index = (index + 1) % 8;
	if (count < 8)
		count++;

	std::cout << "Contact added!" << std::endl;
}

void	PhoneBook::printTable() const {
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|   Index  |First Name| Last Name| Nick Name|" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;

	for (int i = 0; i < count; i++) {
		std::cout << "|" << std::setw(10) << i
				  << "|" << formatOutput(contacts[i].getFirstName())
				  << "|" << formatOutput(contacts[i].getLastName())
				  << "|" << formatOutput(contacts[i].getNickName()) << std::endl;
	}

	std::cout << "|-------------------------------------------|" << std::endl;
}
