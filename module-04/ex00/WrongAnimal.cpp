/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gehovhan <gehovhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 18:14:58 by gehovhan          #+#    #+#             */
/*   Updated: 2024/07/31 18:19:42 by gehovhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << "Default WrongAnimal Constructor" << std::endl;
	this->type = "unknown";
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) {
	std::cout << "Copy WrongAnimal Constructor" << std::endl;
	this->type = other.type;
}

WrongAnimal &WrongAnimal::operator = (const WrongAnimal &other) {
	std::cout << "Operator Assignment WrongAnimal" << std::endl;
	if (this == &other)
		return(*this);
	this->type = other.type;
	return (*this);
}

WrongAnimal::~WrongAnimal() {
	std::cout << "Destructor WrongAnimal" << std::endl;
}

void WrongAnimal::makeSound() const {
	std::cout << "WrongAnimal makeSound function"<< std::endl;
}

void WrongAnimal::setType(const std::string &type) {
	std::cout << "Set WrongAnimal Function" <<std::endl;
	this->type = type;
}

std::string WrongAnimal::getType() const {
	std::cout << "Get WrongAnimal Function" <<std::endl;
	return (this->type);
}
