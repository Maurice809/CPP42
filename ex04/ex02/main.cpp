/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Maurice809 <Maurice809@student.42seoul.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 11:52:07 by Maurice809        #+#    #+#             */
/*   Updated: 2023/04/22 13:42:08 by Maurice809       ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	// BASIC
	const AAnimal* dog = new Dog();
	const AAnimal* cat = new Cat();
	//const AAnimal*	animal = AAnimal();

	std::cout << std::endl;
	//animal->makeSound();

	delete dog;
	delete cat;
	std::cout << std::endl;
	std::cout << std::endl;

	// REF & COPY
	// Dog medor;
	// Cat felix;

	// felix.printBrain();
	// std::cout << std::endl;

	// Dog & medor_ref = medor;
	// Cat & felix_ref = felix;

	// felix_ref.printBrain();

	// Dog medor_copy(medor_ref);
	// Cat felix_copy(felix_ref);

	// // Dog & medor_copy_ref = medor_copy;
	// Cat & felix_copy_ref = felix_copy;

	// felix_copy_ref.printBrain();
	// std::cout << std::endl;

	// TABLEAU
	// const AAnimal	*(animal_array[4]);
	// std::cout << std::endl;

	// for (int i = 0; i < 2; i++)
	// 	animal_array[i] = new Dog();
	// std::cout << std::endl;

	// for (int i = 2; i < 4; i++)
	// 	animal_array[i] = new Cat();
	// std::cout << std::endl;

	// for (int i = 0; i < 4; i++)
	// 	delete animal_array[i];
	// std::cout << std::endl;
}
