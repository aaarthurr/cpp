/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arpages <arpages@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 13:55:18 by arpages           #+#    #+#             */
/*   Updated: 2024/06/17 15:07:23 by arpages          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <iomanip>
#include <limits>

class Fixed
{
private:
    int     number;
    static const int bits = 8;
public:
    Fixed(/* args */);
    Fixed(const Fixed& copy);

    Fixed &operator=(const Fixed &src);
    
    ~Fixed();

    int     getRawBits(void);
    void    setRawBits(int const raw);
};

#endif