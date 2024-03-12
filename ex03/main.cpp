/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 11:49:25 by yachen            #+#    #+#             */
/*   Updated: 2024/03/12 17:21:30 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

int main( void )
{
	Point a(0.0f, 0.0f);
	Point b(3.5f, 3.0f);
	Point c(5.5f, 1.5f);
	Point point(0.5f, 0.5f);

	std::cout << bsp(a, b, c, point) << std::endl;

	return 0;
}