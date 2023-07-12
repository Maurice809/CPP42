/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Maurice809 <Maurice809@student.42seoul.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 11:23:15 by Maurice809        #+#    #+#             */
/*   Updated: 2023/04/22 13:41:28 by Maurice809       ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>

class AAnimal
{
	protected:
		std::string	_type;
	public:
		AAnimal();
		virtual ~AAnimal();
		AAnimal(const AAnimal & ref);
		AAnimal & operator=(AAnimal const & ref);

		virtual std::string getType() const;
		virtual void makeSound() const = 0;
};

#endif
