/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 11:56:26 by yachen            #+#    #+#             */
/*   Updated: 2024/03/12 16:54:34 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

const int	Fixed::fractionalBits = 8;

Fixed::Fixed() : value( 0 )
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const int nb ) : value( nb * (1 << fractionalBits) )
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( const float fNb ) : value( roundf(fNb * (1 << fractionalBits) ))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed()
{ 
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed( const Fixed& other )
{	
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed&	Fixed::operator=( const Fixed& other )
{
	std::cout << "Copy assignment operator called" << std::endl;
	if ( this != &other )
		this->value = other.getRawBits();
	return (*this);
}

int	Fixed::getRawBits( void ) const
{
	return this->value;
}

void	Fixed::setRawBits( int const raw )
{
	this->value = raw;
}

float	Fixed::toFloat( void ) const
{
	return ( (float)value / (1 << fractionalBits) );
}

int	Fixed::toInt(void) const
{
	return ( value / (1 << fractionalBits) );
}

std::ostream&	operator<<( std::ostream& os, const Fixed& obj )
{
	os << obj.toFloat();
	return (os);
}
