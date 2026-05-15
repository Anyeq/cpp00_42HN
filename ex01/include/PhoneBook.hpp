/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asando <asando@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 15:12:29 by asando            #+#    #+#             */
/*   Updated: 2026/05/15 13:38:44 by asando           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class	PhoneBook {
	private:
		Contact	contacts[8];
		int	index;
	public:
		PhoneBook();
		void	addContact();
		void	searchContact() const;
		void	printTable() const;
};

#endif
