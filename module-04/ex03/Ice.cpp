/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gehovhan <gehovhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 20:55:13 by gehovhan          #+#    #+#             */
/*   Updated: 2024/07/31 21:00:57 by gehovhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice():AMateria("ice") {
	std::cout << "Ice Default constructor called" << std::endl;
}

Ice::Ice(const std::string &type):AMateria(type) {
	std::cout << "Ice Parameter constructor called" << std::endl;
}

Ice::Ice(const Ice &other):AMateria(other) {
	std::cout << "Ice Copy constructor called" << std::endl;
}

Ice::~Ice() {
	std::cout << "Ice Destructor called" << std::endl;
}

Ice& Ice::operator =(const Ice &other) {
	std::cout << "Ice Operator overload called" << std::endl;
	if (this == &other)
		return *this;
	this->type = other.type;
	return *this;
}

AMateria* Ice::clone() const {
	return (new Ice(*this));
}

void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
