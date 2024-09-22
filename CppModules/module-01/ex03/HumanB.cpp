/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gehovhan <gehovhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 16:09:46 by gehovhan          #+#    #+#             */
/*   Updated: 2024/07/02 16:09:47 by gehovhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name):h_name(name){}
void HumanB::setWeapon(Weapon &wp) { this->wp = &wp; }
void HumanB::attack() { std::cout << this->h_name << " attacks with their " << wp->getType() << std::endl; }