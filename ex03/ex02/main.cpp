/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Maurice809 <maurice809@hotmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 17:19:43 by Maurice809        #+#    #+#             */
/*   Updated: 2023/04/10 17:26:33 by Maurice809       ###   Lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FlagTrap.hpp"

int	main()
{
	ClapTrap	Claptrap("tac");
	ScavTrap	Scavtrap("tic");
	FlagTrap	Flagtrap1("tuc");

	Claptrap.attack("cible");
	Scavtrap.takeDamage(10);
	Scavtrap.attack("dinosaure");
	Claptrap.beRepaired(1);

	for (int i = 0; i < 10; i++)
		Claptrap.attack("village");

	Scavtrap.guardGate();
	Scavtrap.beRepaired(3);
	
	Flagtrap1.attack("cible");
	Flagtrap1.highFivesGuys();

	return (0);
}
