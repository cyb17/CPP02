/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 10:19:39 by yachen            #+#    #+#             */
/*   Updated: 2024/03/12 17:06:56 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main( void )
{
	Fixed const	ex1( Fixed( 5.05f ) + Fixed( 2 ) );
	std::cout << "ex1: " << ex1 << std::endl;

	Fixed const ex2( Fixed( 5.05f ) - Fixed( 2 ) );
	std::cout << "ex2: " << ex2 << std::endl;

	Fixed const	ex3( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << "ex3: " << ex3 << std::endl;

	Fixed const	ex4( Fixed( 10.10f ) / Fixed( 2 ) );
	std::cout << "ex4: " << ex4 << std::endl;

	Fixed a;
	std::cout << "a1: "<< a << std::endl;
	std::cout << "a2: "<< ++a << std::endl;
	std::cout << "a4: "<< a++ << std::endl;
	std::cout << "a5: "<< a << std::endl;
	Fixed b(2);
	std::cout << "b2: "<< b << std::endl;
	std::cout << "b1: "<< --b << std::endl;
	std::cout << "b2: "<< b << std::endl;
	std::cout << "b4: "<< b-- << std::endl;
	std::cout << "b5: "<< b << std::endl;
	std::cout << "max:" << Fixed::max(a, b) << std::endl;
	if (a != b)
		std::cout << "a != b" << std::endl;
	Fixed c;
	Fixed d;
	if (c >= d)
		std::cout << "c >= d" << std::endl;
	if (c <= d)
		std::cout << "c <= d" << std::endl;
	Fixed const e;
	Fixed const f;
	std::cout << "min:" << Fixed::min(a, b) << std::endl;
	return (0);
}

// int main( void )
// {
// 	Fixed a;
// 	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
// 	std::cout << a << std::endl;
// 	std::cout << ++a << std::endl;
// 	std::cout << a << std::endl;
// 	std::cout << a++ << std::endl;
// 	std::cout << a << std::endl;
// 	std::cout << b << std::endl;
// 	std::cout << Fixed::max( a, b ) << std::endl;
// 	return 0;
// }