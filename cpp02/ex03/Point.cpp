/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 19:53:05 by arthur            #+#    #+#             */
/*   Updated: 2024/06/20 19:59:40 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point( void ) : _x(0), _y(0) 
{
}

Point::Point( const float x, const float y ) : _x(x), _y(y) 
{
}

Point::Point( const Point &src ) : _x(src._x), _y(src._y) 
{
}

Point::~Point()
{
}

Point&  Point::operator=( const Point &rhs )
{
    if ( this != &rhs )
	{
        ( Fixed ) this->_x = rhs.getX();
        ( Fixed ) this->_y = rhs.getY();
    }
    return *this;
}

Fixed Point::getX( void ) const
{
    return this->_x;
}

Fixed Point::getY( void ) const
{
    return this->_y;
}