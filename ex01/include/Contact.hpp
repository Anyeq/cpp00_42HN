/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asando <asando@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 15:23:24 by asando            #+#    #+#             */
/*   Updated: 2026/05/14 15:53:01 by asando           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class	Contact{
	private:
		std::string	_firstName;
		std::string	_lastName;
		std::string _nickName;
		std::string	_phoneNumber;
		std::string	_darkestSecret;
	public:
		void	setFirstName(const std::string &str);
		void	setLastName(const std::string &str);
		void	setNickName(const std::string &str);
		void	setPhoneNumber(const std::string &str);
		void	setDarkestSecret(const std::string &str);
};
#endif
