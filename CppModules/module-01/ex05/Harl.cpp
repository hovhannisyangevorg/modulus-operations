/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gehovhan <gehovhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 16:41:26 by gehovhan          #+#    #+#             */
/*   Updated: 2024/07/02 18:43:45 by gehovhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void) { std::cout << std::endl << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl; }
void Harl::info(void) { std::cout  << std::endl << "I cannot believe adding extra bacon costs more money." << "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl; }
void Harl::warning(void) { std::cout << std::endl << "I think I deserve to have some extra bacon for free." << "I’ve been coming for years whereas you started working here since last month." << std::endl;}
void Harl::error(void) { std::cout << std::endl << "This is unacceptable! I want to speak to the manager now." << std::endl; }

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
        case(4): {
            std::cout<<"ERROR"<<std::endl;
            exit(1);
        }
    }
    (this->*fptr[i])();
}