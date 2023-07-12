/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoret <maurice809@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 17:39:13 by tmoret            #+#    #+#             */
/*   Updated: 2023/02/20 18:00:10 by tmoret           ###   Lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
	std::string brain = "HI THIS IS BRAIN";
	std::string* stringPTR = &brain;
	std::string& stringREF = brain;
	std::cout<< &brain << std::endl;
	std::cout<< stringPTR << std::endl;
	std::cout<< &stringREF << std::endl;
	std::cout<< brain << std::endl;
    std::cout<< *stringPTR << std::endl;
    std::cout<< stringREF << std::endl;
}
