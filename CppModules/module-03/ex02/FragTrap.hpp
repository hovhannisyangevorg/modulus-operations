/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gehovhan <gehovhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 21:03:54 by gehovhan          #+#    #+#             */
/*   Updated: 2024/07/22 21:05:32 by gehovhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() { std::cout << "Default FragTrap constructor called" << std::endl; }

FragTrap::FragTrap(std::string &_name_):ClapTrap(_name_) {
	std::cout << "FragTrap Parameter constructor called" << std::endl;
	this->_Hit_ = 100;
	this->_Energy_ = 100;
	this->_Attack_ = 30;
}

FragTrap::FragTrap(const FragTrap &other) {
	std::cout << "FragTrap copy constructor called" << std::endl;
	this->_Hit_ = other._Hit_;
	this->_Energy_ = other._Energy_;
	this->_Attack_ = other._Attack_;
	this->_name_ = other._name_;
	
}

FragTrap::~FragTrap() { std::cout << "FragTrap destructor called ..." << std::endl; }

FragTrap&	FragTrap::operator =(const FragTrap &other) {
	std::cout << "ClapTrap Copy assignment operator called" << std::endl;
	if (this == &other)
		return *this;
	this->_name_ = other._name_;
	this->_Attack_ = other._Attack_;
	this->_Energy_ = other._Energy_;
	return *this;
}

void FragTrap::highFivesGuys( void ) { std::cout << "high fives all form " << this->_name_ << " to all classes :)" <<std::endl; }