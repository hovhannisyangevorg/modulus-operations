/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gehovhan <gehovhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 19:52:44 by gehovhan          #+#    #+#             */
/*   Updated: 2024/07/31 19:52:45 by gehovhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain Default Constructor callde" << std::endl;
}

Brain::Brain(const Brain &other) {
	for (int i = 0; i < 100; ++ i)
		this->idea[i] = other.idea[i];
}

Brain::~Brain() {
	std::cout << "Brain Destructor callde" << std::endl;		
}

Brain& Brain::operator =(const Brain &other) {
	if (this == &other)
		return *this;
	for (int i = 0; i < 100; ++ i)
		this->idea[i] = other.idea[i];
	return *this;
}

void	Brain::setIdea(std::string &idea, const int Index) { this->idea[Index] = idea; }
std::string Brain::getIdea(const int Index) { return this->idea[Index]; }