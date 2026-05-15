/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asando <asando@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 13:30:46 by asando            #+#    #+#             */
/*   Updated: 2026/05/15 13:43:02 by asando           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.cpp"

PhoneBook::PhoneBook() : index(0){}

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
}
