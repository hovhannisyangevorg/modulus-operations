/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gehovhan <gehovhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 20:47:47 by gehovhan          #+#    #+#             */
/*   Updated: 2024/07/22 21:00:39 by gehovhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() { std::cout << "Default ScavTrap constructor called" << std::endl; }

ScavTrap::ScavTrap(std::string &_name_):ClapTrap(_name_) {
	std::cout << "Operator ScavTrap constructor called" << std::endl;
	this->_Hit_ = 100;
	this->_Attack_ = 50;
	this->_Energy_ = 20;
}

ScavTrap::~ScavTrap() { std::cout << "ScavTrap destructor called ..." << std::endl; }

void ScavTrap::guardGate() { std::cout << "ScavTrap is now in gate guard mode." << std::endl;	 }

void ScavTrap::attack(const std::string& target) {
	if (!this->_Energy_ || !this->_Hit_)
		return ;
	std::cout << "ScavTrap " << this->_name_ <<  "attacks " << target << " causing ";
	std::cout << this->_Attack_ << " points of damage!" << std::endl;
	-- this->_Energy_;
}

ScavTrap&	ScavTrap::operator =(const ScavTrap &other) {
	std::cout << "ClapTrap Copy assignment operator called" << std::endl;
	if (this == &other)
		return *this;
	this->_name_ = other._name_;
	this->_Attack_ = other._Attack_;
	this->_Energy_ = other._Energy_;
	return *this;
}