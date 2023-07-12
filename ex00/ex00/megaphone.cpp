/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoret <maurice809@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 10:31:22 by tmoret            #+#    #+#             */
/*   Updated: 2023/01/28 18:44:38 by tmoret           ###   Lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av) {
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else {
		for (int i = 1; av[i]; i++) {
			for (int j = 0; av[i][j]; j++)
				std::cout << (char)std::toupper(av[i][j]);
			if (i < ac - 1)
				std::cout << ' ';
		}
	}
	std::cout << std::endl;
	return (EXIT_SUCCESS);
}
