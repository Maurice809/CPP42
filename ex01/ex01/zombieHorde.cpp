/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoret <maurice809@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 16:39:34 by tmoret            #+#    #+#             */
/*   Updated: 2023/02/20 17:14:47 by tmoret           ###   Lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie* listeZombie = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		listeZombie[i].setName(name);
	}

	return(listeZombie);


}
