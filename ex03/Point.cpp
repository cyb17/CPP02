/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 11:37:38 by yachen            #+#    #+#             */
/*   Updated: 2024/03/08 18:39:02 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "ostream"

Point::Point() : x( 1 ), y( 0 ), z( 1 ) {}

Point::Point( const float x, const float y ) : x( x ), y( y ), z( 1 )
{
	std::cout << "constructor called: x= " << this->x << " | y= " << this->y <<  '\n';
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

Point::~Point() {}

Fixed Point::getX() const
{
	std::cout << "getX: " << this->x << '\n';
	return this->x;
}

Fixed Point::getY() const
{
	std::cout << "getY: " << this->y << '\n';
	return this->y;
}

Fixed Point::getZ() const
{
	std::cout << "getZ: " << this->z << '\n';
	return this->z;
}

bool bsp( Point const a, Point const b, Point const c, Point const point )
{
	std::cout << "bsp: b.getX: " << b.getX() << '\n';
	std::cout << "bsp: a.getX: " << a.getX() << '\n';
	std::cout << "bsp: c.getX: " << c.getX() << '\n';
	std::cout << "bsp: point.getX: " << point.getX() << '\n';

	// std::cout << ((b.getX() - a.getX()).toFloat()) << '\n';//, ( (b.getY() - a.getY()).toFloat()) );
	// Point ac( ((c.getX() - a.getX()).toFloat()), ( (c.getY() - a.getY()).toFloat()) );
	// Point apoint( ((point.getX() - a.getX()).toFloat() ), ( (point.getY() - a.getY()).toFloat()) );
	// std::cout << "b:x= " << b.getX() << "\n";
	// std::cout << "b:y= " << b.getY() << "\n";
	// std::cout << "b:z= " << b.getZ() << "\n";
	// std::cout << "ab:x= " << ab.getX() << "\n";
	// std::cout << "ab:y= " << ab.getY() << "\n";
	// std::cout << "ab:z= " << ab.getZ() << "\n";
	return true;
}