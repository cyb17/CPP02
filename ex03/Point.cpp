/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 11:37:38 by yachen            #+#    #+#             */
/*   Updated: 2024/03/12 17:23:45 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

Point::Point() : x( 0 ), y( 0 ), z( 0 )
{
	std::cout << "Default constructor called" << std::endl;
}

Point::Point( const float x, const float y ) : x( x ), y( y ), z( 0.0f )
{
	std::cout << "Const float constructor called" << std::endl;
}

Point::Point( const Point& other )
{
	*this = other;
}

Point& Point::operator=( const Point& other)
{
	this->z = other.z;
	return *this;
}

Point::~Point()
{
	std::cout << "Default destructor called" << std::endl;
}

Fixed Point::getX() const
{
	return this->x;
}

Fixed Point::getY() const
{
	return this->y;
}

Fixed Point::getZ() const
{
	return this->z;
}

bool bsp( Point const a, Point const b, Point const c, Point const point )
{
	return true;
}