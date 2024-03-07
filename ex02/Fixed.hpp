/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 11:19:31 by yachen            #+#    #+#             */
/*   Updated: 2024/03/07 17:54:29 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class	Fixed
{
	private:
	
		int					value;
		static const int	fractionalBits;

	public:
		
		Fixed();
		Fixed(const int nb);
		Fixed(const float fNb);
		Fixed(const Fixed& other);
		
		bool	operator>(const Fixed& other);
		bool	operator<(const Fixed& other);
		bool	operator>=(const Fixed& other);
		bool	operator<=(const Fixed& other);
		bool	operator==(const Fixed& other);
		bool	operator!=(const Fixed& other);
		Fixed&	operator=(const Fixed& other);
		Fixed&	operator+(const Fixed& other);
		Fixed&	operator-(const Fixed& other);
		Fixed&	operator*(const Fixed& other);
		Fixed&	operator/(const Fixed& other);
		Fixed&	operator++();
		// Fixed&	operator--();
		// Fixed	operator++(int);
		// Fixed&	operator--(int i);
		
		~Fixed();

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
};

std::ostream&	operator<<(std::ostream& os, const Fixed& obj);


#endif