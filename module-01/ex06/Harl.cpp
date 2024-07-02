/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gehovhan <gehovhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 17:56:37 by gehovhan          #+#    #+#             */
/*   Updated: 2024/07/02 18:03:26 by gehovhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void) { std::cout << "[ DEBUG ]" << std::endl << "I love having extra bacon for my" << "7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl << std::endl;}
void Harl::info(void) { std::cout << "[ INFO ]" << std::endl << "I cannot believe adding extra bacon costs more money." << std::endl << "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl << std::endl; }
void Harl::warning(void) { std::cout << "[ WARNING ]" << std::endl << "I think I deserve to have some extra bacon for free." << std::endl << "I’ve been coming for years whereas you started working here since last month." << std::endl << std::endl; }
void Harl::error(void) { std::cout << "[ ERROR ]" << std::endl << "This is unacceptable! I want to speak to the manager now." << std::endl << std::endl;}

void Harl::complain(std::string level) {
	std::string arr[] = {"DEBUG","INFO","WARNING","ERROR","NULL"};
	int i = 0;
	void(Harl::*fptr[])(void)= {
		&Harl::debug, 
		&Harl::info, 
		&Harl::warning, 
		&Harl::error
	};
	while (level != arr[i] && arr[i] != "NULL")
		i++;
	switch (i) {
		case(0):
			(this->*fptr[0])();
		case(1):
			(this->*fptr[1])();
		case(2):
			(this->*fptr[2])();
		case(3):
			(this->*fptr[3])();
			break;
		default: {
			std::cout<<"[ Probably complaining about insignificant problems ]"<<std::endl;
			exit(1);
		}
	}
}