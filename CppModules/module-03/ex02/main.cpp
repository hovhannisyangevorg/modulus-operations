/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gehovhan <gehovhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 20:47:43 by gehovhan          #+#    #+#             */
/*   Updated: 2024/07/22 21:21:44 by gehovhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main() {
	std::string N = "rob-bot";
	ScavTrap R(N);
    ScavTrap R2;
	R.showInfo();
    R.attack("tree");
    R.attack("enemy");
    R.attack("another enemy");
    R.takeDamage(99);
    R.takeDamage(1);
    R.takeDamage(1);
    R.beRepaired(2);
    R.beRepaired(2);
    R.beRepaired(2);
    R.showInfo();

    R2 = R;
    R2.showInfo();
   	return (0);	
}