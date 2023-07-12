/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Maurice809 <maurice809@hotmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 21:02:43 by Maurice809        #+#    #+#             */
/*   Updated: 2023/04/07 21:03:35 by Maurice809       ###   Lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
    std::cout << "Default constructor called" << std::endl;
    this->_nbr_fixed_coma = 0;
}

Fixed::Fixed(const Fixed &other){
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed::Fixed(const int num){
    std::cout << "Int constructor called" << std::endl;
    _nbr_fixed_coma = num << _fractional_bits;
}

Fixed::Fixed(const float num){
    std::cout << "Float constructor called" << std::endl;
    _nbr_fixed_coma = (roundf(num * (1 << _fractional_bits)));
}

Fixed & Fixed::operator=(const Fixed & rhs){
    std::cout << "Copy assignment operator called" << std::endl;
    this->_nbr_fixed_coma = rhs._nbr_fixed_coma;
    return *this;
}

int Fixed::getRawBits() const {
    std::cout << "getRawBits member function called" << std::endl;
    return (_nbr_fixed_coma);
}

void Fixed::setRawBits(const int raw) {
    std::cout << "setRawBits member function called" << std::endl;
    this->_nbr_fixed_coma = raw;
}

float	Fixed::to_Float( void ) const {
    return ((double)_nbr_fixed_coma / (double(1 << _fractional_bits)));
}

int		Fixed::toInt( void ) const {
    return (_nbr_fixed_coma / (1 << _fractional_bits));
}

std::ostream	&operator<<(std::ostream &out, const Fixed &tmp){
    out << tmp.to_Float();
    return (out);
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}
