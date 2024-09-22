/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gehovhan <gehovhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 15:26:01 by gehovhan          #+#    #+#             */
/*   Updated: 2024/07/12 21:49:21 by gehovhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_bits_ = 8;

// Default constructor
Fixed::Fixed():_RawBits_(0) { std::cout << "Default constructor called" << std::endl; }
// Copy constructor
Fixed::Fixed(const Fixed& obj) {
	std::cout << "Copy constructor called" << std::endl;
	this->_RawBits_ = obj.getRawBits();
}
// Destructor
Fixed::~Fixed() { std::cout << "Destructor  " << std::endl; }
// Copy assignment operator
Fixed & Fixed::operator = (const Fixed &other) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->_RawBits_ = other.getRawBits();
	return(*this);
}
// Getter for RawBits value
int Fixed:: getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_RawBits_);
}
// Setter for RawBits value
void Fixed::setRawBits( int const raw ) { this->_RawBits_ = raw; }