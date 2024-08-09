/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gehovhan <gehovhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 15:46:23 by gehovhan          #+#    #+#             */
/*   Updated: 2024/06/28 17:12:12 by gehovhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "contact.hpp"

void Contact::set_name(const std::string& name) { this->name = name; }
void Contact::set_surname(const std::string& surname) { this->surname = surname; }
void Contact::set_nickname(const std::string& nickname) { this->nickname = nickname; }
void Contact::set_secret(const std::string& secret) { this->secret = secret; }
void Contact::set_number(const std::string& number) { this->number = number; }

std::string Contact::get_name() const { return name; }
std::string Contact::get_surname() const { return surname; }
std::string Contact::get_nickname() const { return nickname; }
std::string Contact::get_secret() const { return secret; }
std::string Contact::get_number() const { return number; }