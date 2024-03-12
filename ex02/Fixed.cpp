/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 11:56:26 by yachen            #+#    #+#             */
/*   Updated: 2024/03/12 17:02:52 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

const int	Fixed::fractionalBits = 8;

Fixed::Fixed() : value( 0 ) {}

Fixed::Fixed( const int nb ) : value( nb * (1 << fractionalBits) ) {}

Fixed::Fixed( const float fNb ) : value( roundf(fNb * (1 << fractionalBits)) ) {}

Fixed::~Fixed() {}

Fixed::Fixed( const Fixed& other )
{	
	*this = other;
}

bool	Fixed::operator>( const Fixed& other )
{
	return ( this->value > other.value );
}

bool	Fixed::operator<( const Fixed& other )
{
	return ( this->value < other.value );
}

bool	Fixed::operator>=( const Fixed& other )
{
	return ( this->value >= other.value );
}

bool	Fixed::operator<=( const Fixed& other )
{
	return ( this->value <= other.value );
}

bool	Fixed::operator==( const Fixed& other )
{
	return ( this->value == other.value );
}

bool	Fixed::operator!=( const Fixed& other )
{
	return ( this->value != other.value );
}

Fixed&	Fixed::operator=( const Fixed& other )
{
	if ( this != &other )
		this->value = other.getRawBits();
	return ( *this );
}

Fixed	Fixed::operator+( const Fixed& other )
{
	Fixed	tmp;
	tmp.setRawBits( this->getRawBits() + other.getRawBits() );
	return tmp;
}

Fixed	Fixed::operator-( const Fixed& other )
{
	Fixed	tmp;
	tmp.setRawBits( this->getRawBits() - other.getRawBits() );
	return tmp;
}

Fixed	Fixed::operator*( const Fixed& other )
{
	Fixed	tmp;
	tmp.setRawBits( this->getRawBits() * other.getRawBits() / (1 << fractionalBits) );
	return tmp;
}

Fixed	Fixed::operator/( const Fixed& other )
{
	Fixed	tmp;
	tmp.setRawBits( this->getRawBits() / other.getRawBits() * (1 << fractionalBits) );
	return tmp;
}

Fixed&	Fixed::operator++()
{
	this->value += 1;
	return *this;
}

Fixed&	Fixed::operator--()
{
	this->value -= 1;
	return *this;
}

Fixed	Fixed::operator++( int )
{
	Fixed	tmp(*this);
	++(*this);
	return tmp;
}

Fixed	Fixed::operator--( int )
{
	Fixed	tmp(*this);
	--(*this);
	return tmp;
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

int	Fixed::toInt( void ) const
{
	return ( value >> fractionalBits );
}

std::ostream&	operator<<( std::ostream& os, const Fixed& obj )
{
	os << obj.toFloat();
	return os;
}

Fixed	Fixed::min( Fixed& n1, Fixed& n2 )
{
	if ( n1.getRawBits() == n2.getRawBits() )
	{
		std::cout << "n1 and n2 have same value:" << std::endl;
		return n1;
	}
	if ( n1.getRawBits() < n2.getRawBits() )
		return n1;
	else
		return n2;
}

Fixed	Fixed::min(const Fixed& n1, const Fixed& n2)
{
	if ( n1.getRawBits() == n2.getRawBits() )
	{
		std::cout << "n1 and n2 have same value:" << std::endl;
		return n1;
	}
	if ( n1.getRawBits() < n2.getRawBits() )
		return n1;
	else
		return n2;
}

Fixed	Fixed::max(Fixed& n1, Fixed& n2)
{
	if ( n1.getRawBits() == n2.getRawBits() )
	{
		std::cout << "n1 and n2 have same value:" << std::endl;
		return n1;
	}
	if ( n1.getRawBits() > n2.getRawBits() )
		return n1;
	else
		return n2;
}

Fixed	Fixed::max(const Fixed& n1, const Fixed& n2)
{
	if ( n1.getRawBits() == n2.getRawBits() )
	{
		std::cout << "n1 and n2 have same value:" << std::endl;
		return n1;
	}
	if ( n1.getRawBits() > n2.getRawBits() )
		return n1;
	else
		return n2;
}
