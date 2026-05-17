/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asando <asando@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 16:24:50 by asando            #+#    #+#             */
/*   Updated: 2026/05/17 21:01:15 by asando           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.hpp"

int	main(void) {
	PhoneBook	phonebook;
	std::string	cmd;

	while (true) {
		std::cout << "Enter Command (ADD, SEARCH, EXIT): ";
		std::getline(std::cin, cmd);
		if (std::cin.eof()) {
			std::cout << "\nEOF detected, exiting." << std::endl;
			break ;
		}
		if (cmd == "ADD") {
			phonebook.addContact();
		} else if (cmd == "SEARCH") {
			phonebook.searchContact();
		} else if (cmd == "EXIT") {
			std::cout << "Exited!" << std::endl;
			break ;
		} else {
			std::cout << "Unknown command." << std::endl;
		}
	}
	return (0);
}
