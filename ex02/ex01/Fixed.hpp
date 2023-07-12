/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Maurice809 <maurice809@hotmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 21:03:52 by Maurice809        #+#    #+#             */
/*   Updated: 2023/04/07 21:04:29 by Maurice809       ###   Lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_HPP
#define FIXED_HPP
#include <string>
#include <cmath>
#include <iostream>

class Fixed {

private:
    int _nbr_fixed_coma;
    static int const _fractional_bits = 8;

public:
    Fixed();
    Fixed(const Fixed &other);
    Fixed(const int num);
    Fixed(const float num);
    ~Fixed();

    Fixed & operator=(const Fixed &rhs);

    int getRawBits(void) const;
    void    setRawBits(int const raw);
    float	to_Float( void ) const;
    int		toInt( void ) const;
};

std::ostream	&operator<<(std::ostream &out, Fixed const &tmp);

#endif
