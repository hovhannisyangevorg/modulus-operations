/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gehovhan <gehovhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 18:31:40 by gehovhan          #+#    #+#             */
/*   Updated: 2024/07/01 18:43:01 by gehovhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name):name(name){}
Zombie::~Zombie() { std::cout<< this->name <<std::endl; }
void Zombie::announce(void) { std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl; }