/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gehovhan <gehovhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 14:56:07 by gehovhan          #+#    #+#             */
/*   Updated: 2024/07/02 15:01:37 by gehovhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie():name("defaut") {}
Zombie::Zombie(std::string name):name(name) {}
void  Zombie::announce(void) { std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl; }
