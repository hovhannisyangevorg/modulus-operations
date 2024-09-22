/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gehovhan <gehovhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 15:22:52 by gehovhan          #+#    #+#             */
/*   Updated: 2024/07/02 15:23:59 by gehovhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &obj):h_name(name), wp(&obj) {}
void HumanA::attack() { std::cout << this->h_name << " attacks with their " << wp->getType() << std::endl; }