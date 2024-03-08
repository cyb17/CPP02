/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 11:37:38 by yachen            #+#    #+#             */
/*   Updated: 2024/03/08 11:57:28 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "ostream"

Point::Point() : x( 0 ), y( 0 ) {}

Point::Point( const float x, const float y ) : x( x ), y( y ) {}

Point::Point( const Point& other )
{
	*this = other;
}

Point& Point::operator=( const Point& other)
{
	return *this;
}

Point::~Point() {}

bool bsp( Point const a, Point const b, Point const c, Point const point )
{
	if (point.x >= a.x || point.x >= b.x || point.x >= c.x)
		return false;
}