/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mort0707 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 13:50:55 by mort0707          #+#    #+#             */
/*   Updated: 2023/02/20 17:20:46 by tmoret           ###   Lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int	main(void)
{

	Zombie* liste_Zombie = zombieHorde( 10, "Kaimook" );
	for (int i=0; i<10; i++)
	{
		liste_Zombie[i].announce();
	}
	delete[] liste_Zombie;

}
