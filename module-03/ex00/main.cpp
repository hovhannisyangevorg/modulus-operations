/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gehovhan <gehovhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 22:51:22 by gehovhan          #+#    #+#             */
/*   Updated: 2024/07/22 21:02:34 by gehovhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	std::string name = "rob-bot";
	ClapTrap robot_1(name);
    ClapTrap robot_2;
	robot_1.showInfo();
    robot_1.attack("tree");
    robot_1.attack("enemy");
    robot_1.attack("another enemy");
    robot_1.takeDamage(1);
    robot_1.takeDamage(1);
    robot_1.takeDamage(1);
    robot_1.beRepaired(2);
    robot_1.beRepaired(2);
    robot_1.beRepaired(2);
    robot_1.showInfo();

    robot_2 = robot_1;
    robot_2.showInfo();
	std::string name1 = "Hello";
	ClapTrap obj1(name1);
	ClapTrap obj2 = obj1;
   	return (0);	
}
