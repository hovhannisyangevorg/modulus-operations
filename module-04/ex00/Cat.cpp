/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gehovhan <gehovhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 17:38:29 by gehovhan          #+#    #+#             */
/*   Updated: 2024/07/31 17:38:47 by gehovhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Cat::Cat() {
	std::cout << "Cat Default Constructor called" << std::endl;
	this->type = "Cat";
}

Cat::Cat(const Cat &other) {
	std::cout << "Cat Copy Constructor called" << std::endl;
	this->type = other.type;
}

Cat::~Cat() {
	std::cout << "Cat Destructor called" << std::endl;
}

Cat& Cat::operator=(const Cat &other) {
	if (this == &other)
		return *this;
	this->type = other.type;
	return *this;	
}

void Cat::makeSound() const {
	std::cout << "Myau Myau Myau" << std::endl;
}