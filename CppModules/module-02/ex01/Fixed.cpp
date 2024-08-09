/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gehovhan <gehovhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 21:38:48 by gehovhan          #+#    #+#             */
/*   Updated: 2024/07/12 21:45:36 by gehovhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fbit = 8;

Fixed::Fixed():fixed(0) { std::cout << "Default constructor called" << std::endl;}

Fixed::Fixed(const int num) {
	std::cout << "Int constructor called" << std::endl;
	this->fixed = num * (1 << fbit);
}

Fixed::Fixed(const float fnum) {
	std::cout << "Float constructor called" << std::endl;
	this->fixed = roundf(fnum * (1 << this->fbit));
}

Fixed::Fixed(const Fixed &other) {
	std::cout << "Copy constructor called" << std::endl;
	this->fixed = other.getRawBits();
}

Fixed& Fixed::operator =(const Fixed &other) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->fixed = other.getRawBits();
	return *this;	
}

Fixed::~Fixed() { std::cout << "Destructor called" << std::endl; }

int Fixed::getRawBits( void ) const { return this->fixed; }

void Fixed::setRawBits( int const raw ) { this->fixed = raw; }

float Fixed::toFloat( void ) const {
	float fnum = static_cast<float>(this->fixed);
	fnum /= (1 << this->fbit);
	return fnum;
}

int Fixed::toInt( void ) const {
	int num = static_cast<int>(this->fixed);
	return num / (1 << this->fbit);
}

std::ostream& operator<<(std::ostream& os, const Fixed& obj) {
	os << obj.toFloat();
	return os;
}
