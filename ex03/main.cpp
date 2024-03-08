/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 11:49:25 by yachen            #+#    #+#             */
/*   Updated: 2024/03/08 18:38:25 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "ostream"

int main( void )
{
	Point point(0.5f, 0.5f);
	Point a;
	Point b(3.5f, 3.0f);
	Point c(5.5f, 1.5f);

	std::cout << b.getX() << "\n";
	std::cout << b.getY() << "\n";
	std::cout << b.getZ() << "\n";
	std::cout << bsp(a, b ,c ,point) << std::endl;

	return 0;
}