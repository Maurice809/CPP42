/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Maurice809 <maurice809@hotmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 20:30:41 by Maurice809        #+#    #+#             */
/*   Updated: 2023/04/07 20:31:04 by Maurice809       ###   Lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <string>
#include <iostream>

class Fixed {
private:
    int _fix_nbr;
    int const static _bits_nbr = 8;
public:
    Fixed();
    Fixed(const Fixed &other);
    Fixed & operator=(const Fixed &rhs);
    ~Fixed();

    int getRawBits(void) const;
    void setRawBits(int const raw);
};

#endif
