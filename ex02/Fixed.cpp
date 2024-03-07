/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 11:56:26 by yachen            #+#    #+#             */
/*   Updated: 2024/03/07 18:09:00 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

const int	Fixed::fractionalBits = 8;

Fixed::Fixed() : value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int nb) : value(nb << fractionalBits)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float fNb) : value(roundf(fNb * (1 << fractionalBits)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed()
{ 
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other)
{	
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

bool	Fixed::operator>(const Fixed& other)
{
	return (this->value > other.value);
}

bool	Fixed::operator<(const Fixed& other)
{
	return (this->value < other.value);
}

bool	Fixed::operator>=(const Fixed& other)
{
	return (this->value >= other.value);
}

bool	Fixed::operator<=(const Fixed& other)
{
	return (this->value <= other.value);
}

bool	Fixed::operator==(const Fixed& other)
{
	return (this->value == other.value);
}

bool	Fixed::operator!=(const Fixed& other)
{
	return (this->value != other.value);
}

Fixed&	Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->value = other.getRawBits();
	return (*this);
}

Fixed&	Fixed::operator+(const Fixed& other)
{
	this->value += other.value;
	return (*this);
}

Fixed&	Fixed::operator-(const Fixed& other)
{
	this->value -= other.value;
	return (*this);
}

Fixed&	Fixed::operator*(const Fixed& other)
{
	this->value = this->value * other.value / (1 << fractionalBits);
	return (*this);
}

Fixed&	Fixed::operator/(const Fixed& other)
{
	this->value = (this->value << fractionalBits) / other.value;
	return (*this);
}

Fixed&	Fixed::operator++()
{
	std::cout << "before: " << this->value << '\n';
	this->value = (this->value + (1 << fractionalBits));// / (1 << fractionalBits);
	std::cout << "after: " << this->value << '\n';
	return (*this);
}

// Fixed&	Fixed::operator--()
// {
// 	this->value = (this->value - (1 << fractionalBits)) / (1 << fractionalBits);
// 	return (*this);
// }

// Fixed	Fixed::operator++(int)
// {
// 	Fixed	tmp(*this);
// 	++(*this);
// 	// this->value = this->value + (1 << fractionalBits) / (1 << fractionalBits);
// 	return (tmp);
// }

// Fixed&	Fixed::operator--(const int i)
// {
// 	this->value = this->value >> i;
// 	return (*this);
// }

int	Fixed::getRawBits(void) const
{
	return (value);
}

void	Fixed::setRawBits(int const raw)
{
	value = raw;
}

float	Fixed::toFloat(void) const
{
	std::cout << "toFloat: " << (float)value / (1 << fractionalBits) / (1 << fractionalBits) << '\n';
	return ((float)value / (1 << fractionalBits));
}

int	Fixed::toInt(void) const
{
	return (value >> fractionalBits);
}

std::ostream&	operator<<(std::ostream& os, const Fixed& obj)
{
	os << obj.toFloat();
	return (os);
}
