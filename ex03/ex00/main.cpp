/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Maurice809 <maurice809@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 17:18:30 by Maurice809          #+#    #+#             */
/*   Updated: 2023/02/17 10:50:39 by Maurice809         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	Claptrap1("tic");
	ClapTrap	Claptrap2("tac");

	Claptrap1.attack("tac");
	Claptrap2.takeDamage(0);
	Claptrap1.attack("dinosaure");
	Claptrap2.beRepaired(1);

	for (int i = 0; i < 10; i++)
		Claptrap1.attack("village");

	return (0);
}
