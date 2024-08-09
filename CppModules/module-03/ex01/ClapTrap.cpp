/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gehovhan <gehovhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 20:47:38 by gehovhan          #+#    #+#             */
/*   Updated: 2024/07/22 20:49:09 by gehovhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap():_name_("NULL"), _Hit_(0), _Energy_(0), _Attack_(0) { std::cout << "Default counstructor called ..." << std::endl; }
ClapTrap::~ClapTrap() { std::cout << "Destrucktor ..." << std::endl; }

ClapTrap::ClapTrap(std::string &_name_) {
	std::cout << "ClapTrap Parameter counstructor called ..." << std::endl;
	this->_name_ = _name_;
	this->_Hit_ = 10;
	this->_Energy_ = 10;
	this->_Attack_ = 0;
}

ClapTrap::ClapTrap(const ClapTrap &other) {
	std::cout << "ClapTrap copy counstructor called ..." << std::endl;
	this->_name_ = other._name_;
	this->_Hit_ = other._Hit_;
	this->_Energy_ = other._Energy_;
	this->_Attack_ = other._Attack_;
}

std::string	ClapTrap::getName() { return this->_name_; }
int	ClapTrap::getHit() { return this->_Hit_; }
int	ClapTrap::getEnergy() { return this->_Energy_; }
int	ClapTrap::getAttack() { return this->_Attack_; }

void	ClapTrap::setName(std::string _name_) { this->_name_ = _name_; }
void	ClapTrap::setHit(unsigned int _Hit_) { this->_Hit_ = _Hit_; }
void	ClapTrap::setEnergy(unsigned int _Energy_) { this->_Energy_ = _Energy_; }
void	ClapTrap::setAttack(unsigned int _Attack_) { this->_Attack_ = _Attack_; }

void ClapTrap::attack(const std::string& target) {
	if (!this->_Energy_ || !this->_Hit_)
		return ;
	std::cout << "ClapTrap " << this->_name_ <<  " attacks " << target << " causing ";
	std::cout << this->_Attack_ << " points of damage!" << std::endl;
	-- this->_Energy_;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->_Hit_ && this->_Hit_ >= amount) {
		std::cout << this->_name_ << " Received damage " << amount << std::endl;
		this->_Hit_ -= amount;
		return ;
	}
	std::cout << this->_name_ << " already dead" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->_Energy_ && this->_Hit_) {
		std::cout << this->_name_ << " Restores health " << amount << std::endl;
		this->_Hit_ += amount;
		-- this->_Energy_;
	}
}

void ClapTrap::showInfo() {
	std::cout << "ClapTrap Name " << this->_name_ << std::endl;
	std::cout << "Healt : " << this->_Hit_ << std::endl;
	std::cout << "Energy : " << this->_Energy_ << std::endl;
	std::cout << "Attack : " << this->_Attack_ << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &other) {
	std::cout << "ClapTrap assignment operator called..." << std::endl;
    if (this != &other) {
        this->_name_ = other._name_;
        this->_Hit_ = other._Hit_;
        this->_Energy_ = other._Energy_;
        this->_Attack_ = other._Attack_;
    }
    return *this;
}
