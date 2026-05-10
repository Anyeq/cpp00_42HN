/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asando <asando@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 14:35:40 by asando            #+#    #+#             */
/*   Updated: 2026/05/10 15:16:21 by asando           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int	main(int argc, char **argv)
{
	std::string	str;
	int			i;
	int			j;

	i = 0;
	j = 0;
	str = argv[0];
	if (argc > 1)
	{
		i++;
		while (i < argc)
		{
			str = argv[i];
			while (str[j])
			{
				str[j] = (char)toupper(str[j]);
				j++;
			}
			std::cout << str;
			i++;
			j = 0;
			if (argv[i] == NULL)
				break ;
			std::cout << " ";
		}
		std::cout << std::endl;
	}
	else
		std::cout << " * LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}
