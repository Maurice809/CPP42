/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aducret <ambrodu@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 15:18:52 by aducret           #+#    #+#             */
/*   Updated: 2023/02/17 21:01:05 by aducret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int		main(void)
{
	Bureaucrat	*test;
	Form		*test2;
	
	try
	{
		test = new Bureaucrat("test", 1);
		test2 = new Form("test2", 10, 1);
		test2->beSigned(*test);
		std::cout << *test2;
		delete test;
		delete test2;
	}
	catch (std::exception & e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	
	return (0);
}