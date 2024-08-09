/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.CPP                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gehovhan <gehovhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 15:25:58 by gehovhan          #+#    #+#             */
/*   Updated: 2024/07/02 15:26:40 by gehovhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string name):wp_name(name) {}
const  std::string& Weapon::getType() { return (this->wp_name); }
void Weapon::setType(std::string name) { this->wp_name = name; }