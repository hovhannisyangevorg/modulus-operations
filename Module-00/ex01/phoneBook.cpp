/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gehovhan <gehovhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 13:21:28 by gehovhan          #+#    #+#             */
/*   Updated: 2024/06/28 14:24:00 by gehovhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "phoneBook.hpp"
#include <iostream>
#include "error.hpp"

PhoneBook::PhoneBook() : size_(0) {}

bool PhoneBook::parse_string(std::string str) {
	for(size_t i = 0; i < str.length(); i++)
		if (std::isdigit(str[i]))
			return (false);
	return (true);
}

bool PhoneBook::space_case(std::string str) {
	size_t i;
	
	for (i = 0; i < str.length(); i++)
		if (str[i] != ' ')
			break;
	if (i == str.length()) 
		return (false);
	return (true);
}

bool PhoneBook::parce_number(std::string str) {
	for(size_t i = 0; i < str.length(); i++)
		if (std::isalpha(str[i]) || str.length() != 9)
			return (false);
	return (true);
}

void PhoneBook::update_offset(size_t& index) {
	if (index >= MAX_CONT_COUNT)
		index = 0;
	if (this->size_ < MAX_CONT_COUNT)
		++this->size_;
}

void PhoneBook::make_word(std::string &print, std::string str2)
{
	if (str2.length() > 10)
		print = (str2.substr(0, 9) + '.');
	else
		print = str2;
}

bool PhoneBook::input_reader(size_t index, std::string in_type, std::string wer_type) {
	std::string input;

	while (1) {
		std::cout << in_type;
		getline(std::cin, input);
		if (std::cin.eof()) {
			return (error.setError(1, "Error: Do not press ctrl + D"),false);
		}
		if (!this->parse_string(input) || input.empty() || !this->space_case(input)) {
			std::cout << std::endl;
			std::cout << wer_type <<std::endl;
			std::cout << std::endl;
			continue;
		}
		if (in_type == NAME_EXPR)
			this->c1[index].set_name(input);
		else if (in_type == SUR_NAME_EXPR)
			this->c1[index].set_surname(input);
		else if (in_type == NICK_NAME_EXPR)
			this->c1[index].set_nickname(input);
		else if (in_type == SECRET_EXPR)
			this->c1[index].set_secret(input);
		break ;
	}
	return true;
}

bool PhoneBook::input_phone_number(size_t index, std::string in_type, std::string wer_type) {
	std::string input;

	while (1) {
		std::cout << in_type;
		getline(std::cin, input);
		if (std::cin.eof()) {
			return (error.setError(1, "Error: Do not press ctrl + D"),false);
		}
		if (!this->parce_number(input) || input.empty() || !this->space_case(input)) {
			std::cout << std::endl;
			std::cout << wer_type <<std::endl;
			std::cout << std::endl;
			continue ;
		}
		this->c1[index].set_number(input);
		break ;
	}
	return true;
}

bool PhoneBook::append(size_t &index) {
	update_offset(index);

	if (!input_reader(index, NAME_EXPR, "Warning: Wrong name input."))
		return (false);
	if (!input_reader(index, SUR_NAME_EXPR, "Warning: Wrong surname input."))
		return (false);
	if (!input_phone_number(index, NUMBER_EXPR, "Warning: Wrong number input."))
		return (false);
	if (!input_reader(index, NICK_NAME_EXPR, "Warning: Wrong nickname input."))
		return (false);
	if (!input_reader(index, SECRET_EXPR, "Warning: Wrong darkest secret input."))
		return (false);
	index++;
	std::cout << std::endl;
	std::cout << "You have Successfully add new contact. " << std::endl << std::endl;
	return (true);
}

bool PhoneBook::exit() {
	return (error.setError(9, ""), false);
}

bool PhoneBook::search() {
	std::string temp;
	std::string print;
	// int index = 0;
	
	std::cout << std::endl;
	std::cout << "|  index   |   name   | surname  | nickname |" << std::endl;
	// for (size_t k = 0; k < this->size_; k++)
	// {
	// 	std::cout << " ---------- ---------- ---------- ---------- " << std::endl;
	// 	std::cout << "|"<< std::setw(10) << k << "|" << std::setw(10); 
	// 	make_word(print, c1[k].get_name());
	// 	std::cout << print << "|" << std::setw(10);
	// 	make_word(print, c1[k].get_surname());
	// 	std::cout << print << "|" << std::setw(10);
	// 	make_word(print, c1[k].get_nickname());
	// 	std::cout << print << "|" <<std::endl;
	// }
	// std::cout << " ---------- ---------- ---------- ---------- " << std::endl << std::endl; 
	// if (this->size_ != 0)
	// {
	// 	while(1) {
	// 		std::cout << "input index for more information: ";
	// 		std::getline(std::cin, temp);
	// 		if (std::cin.eof())
	// 			std::exit(1);
	// 		index = std::atoi(temp.c_str());
	// 		if(index >= (int)this->size_ || temp.empty() || std::isalpha(temp[0]) || index < 0 || !space_case(temp)) {
	// 			std::cout << "wrong index input." << std::endl;
	// 			continue ;
	// 		}
	// 		std::cout << std::endl;
	// 		break ;
	// 	}
	// 	std::cout << "name -> " << c1[index].get_name() << std::endl;
	// 	std::cout << "surname -> " << c1[index].get_surname() << std::endl;
	// 	std::cout << "number -> " << c1[index].get_number() << std::endl;
	// 	std::cout << "nickname -> " << c1[index].get_nickname() << std::endl;
	// 	std::cout << "secret -> " << c1[index].get_secret() << std::endl;
	// 	std::cout << std::endl;
	// }
	return (true);
}











































// void PhoneBook::search(int count)
// {
// 	std::string temp;
// 	std::string print;
// 	int index = 0;
	
// 	std::cout << std::endl;
// 	std::cout << "|  index   |   name   | surname  | nickname |" << std::endl;
// 	for (int k = 0; k < count; k++)
// 	{
// 		std::cout << " ---------- ---------- ---------- ---------- " << std::endl;
// 		std::cout << "|"<< std::setw(10) << k << "|" << std::setw(10); 
// 		make_word(print, c1[k].get_name());
// 		std::cout << print << "|" << std::setw(10);
// 		make_word(print, c1[k].get_surname());
// 		std::cout << print << "|" << std::setw(10);
// 		make_word(print, c1[k].get_nickname());
// 		std::cout << print << "|" <<std::endl;
// 	}
// 	std::cout << " ---------- ---------- ---------- ---------- " << std::endl << std::endl; 
// 	if (count != 0)
// 	{
// 		while(1)
// 		{ 
// 			std::cout << "input index for more information: ";
// 			std::getline(std::cin, temp);
// 			if (std::cin.eof())
// 				exit(1);
// 			index = std::atoi(temp.c_str());
// 			if(index >= count || temp.empty() || std::isalpha(temp[0]) || index < 0 || !space_case(temp))
// 			{
// 				std::cout << "wrong index input." << std::endl;
// 				continue;
// 			}
// 			std::cout << std::endl;
// 			break;
// 		}
// 		std::cout << "name -> " << c1[index].get_name() << std::endl;
// 		std::cout << "surname -> " << c1[index].get_surname() << std::endl;
// 		std::cout << "number -> " << c1[index].get_number() << std::endl;
// 		std::cout << "nickname -> " << c1[index].get_nickname() << std::endl;
// 		std::cout << "secret -> " << c1[index].get_secret() << std::endl;
// 		std::cout << std::endl;
// 	}
// }