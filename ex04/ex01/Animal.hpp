/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Maurice809 <Maurice809@student.42seoul.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 11:18:55 by Maurice809        #+#    #+#             */
/*   Updated: 2023/04/22 13:38:27 by Maurice809       ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:
		std::string	_type;
	public:
		Animal();
		virtual ~Animal();
		Animal(const Animal & ref);
		Animal & operator=(Animal const & ref);

		virtual void	makeSound() const;
		virtual std::string	getType() const;
};


#endif
