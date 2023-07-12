/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Maurice809 <Maurice809@student.42seoul.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 11:49:20 by Maurice809        #+#    #+#             */
/*   Updated: 2023/04/10 17:11:12 by Maurice809       ###   Lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:
		bool	_gateKeeper;

	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap &operator = (const ScavTrap & r);
		~ScavTrap();
		
		void	guardGate();
};

#endif
