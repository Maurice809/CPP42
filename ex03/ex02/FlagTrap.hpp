/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Maurice809 <maurice809@hotmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 10:16:39 by Maurice809        #+#    #+#             */
/*   Updated: 2023/04/10 17:23:38 by Maurice809       ###   Lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLAGTRAP_HPP
#define FLAGTRAP_HPP

#include "ClapTrap.hpp"

class	FlagTrap : public ClapTrap
{
	public:
		FlagTrap();
		FlagTrap(std::string name);
		FlagTrap &operator = (const FlagTrap & name);
		~FlagTrap();

		void	highFivesGuys(void);
};

#endif
