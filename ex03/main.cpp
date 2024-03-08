/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 11:49:25 by yachen            #+#    #+#             */
/*   Updated: 2024/03/08 11:52:11 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.cpp"
#include "ostream"

int main( void )
{
	Point point;
	Point a;
	Point b;
	Point c;

	std::cout << bsp(a, b ,c ,point) << std::endl;

	return 0;
}