/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gehovhan <gehovhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 20:22:09 by gehovhan          #+#    #+#             */
/*   Updated: 2024/07/31 20:22:27 by gehovhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal():type("") {
	std::cout << "Animal Default Constructor called" << std::endl;
}

Animal::Animal(const Animal &other) {
	std::cout << "Animal Copy Constructor called" << std::endl;
	this->type = other.type;
}

Animal::~Animal() {
	std::cout << "Animal Destructor called" << std::endl;
}

Animal& Animal::operator=(const Animal &other) {
	if (this == &other)
		return *this;
	this->type = other.type;
	return *this;
}

std::string Animal::getType() const {
	return this->type;
}

void Animal::setType(std::string type) {
	this->type = type;
}