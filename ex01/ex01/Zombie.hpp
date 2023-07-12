/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoret <maurice809@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 22:37:38 by tmoret            #+#    #+#             */
/*   Updated: 2023/02/20 17:10:46 by tmoret           ###   Lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

/* Zombie definition de la class */
class	Zombie
{
	private:
		std::string	_name;
	public:
		void setName(std::string name);
		Zombie(std::string name);
		Zombie();
		~Zombie(void);
		void	announce(void);
};

#endif
