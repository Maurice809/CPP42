/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Maurice809 <maurice809@hotmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 17:18:30 by Maurice809        #+#    #+#             */
/*   Updated: 2023/04/09 17:11:27 by Maurice809       ###   Lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	ClapTrap	Claptrap("tac");
	ScavTrap	Scavtrap("tic");

	Claptrap.attack("cible");
	Scavtrap.takeDamage(10);
	Scavtrap.attack("dinosaure");
	Claptrap.beRepaired(1);

	for (int i = 0; i < 10; i++)
		Claptrap.attack("village");

	Scavtrap.guardGate();
	Scavtrap.beRepaired(3);

	return (0);
}
