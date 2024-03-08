/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 11:30:23 by yachen            #+#    #+#             */
/*   Updated: 2024/03/08 17:54:30 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
# define POINT_H

#include "Fixed.hpp"

class Point
{
	private:
		Fixed const x;
		Fixed const y;
		Fixed z;
		
	public:
		Point();
		Point( const float x, const float y );
		Point( const Point& other );
		Point& operator=( const Point& other );
		~Point();

		Fixed getX() const;
		Fixed getY() const;
		Fixed getZ() const;
		
};

bool  bsp( Point const a, Point const b, Point const c, Point const point );

#endif