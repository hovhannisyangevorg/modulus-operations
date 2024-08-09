/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gehovhan <gehovhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 13:21:28 by gehovhan          #+#    #+#             */
/*   Updated: 2024/06/28 20:43:09 by gehovhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "phoneBook.hpp"
# include <iostream>
# include "error.hpp"

const char* _NAME_EXPR = "input name: ";
const char* _SUR_NAME_EXPR = "input surname: ";
const char* _NUMBER_EXPR = "input phone number: ";
const char* _NICK_NAME_EXPR = "input nickname: ";
const char* _SECRET_EXPR = "input darkest secret: ";

const char* _WARNING_NAME_EXPR = "Warning: Wrong name input.";
const char* _WARNING_SUR_NAME_EXPR = "Warning: Wrong surname input.";
const char* _WARNING_NUMBER_EXPR = "Warning: Wrong number input.";
const char* _WARNING_NICK_NAME_EXPR = "Warning: Wrong nickname input.";
const char* _WARNING_SECRET_EXPR = "Warning: Wrong darkest secret input.";

PhoneBook::PhoneBook() : size_() {}

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
	if (this->size_ < 8)
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
		if (std::cin.eof())
			return (error.setError(1, "Warning: Do not press ctrl + D"), false);
		if (!this->parse_string(input) || input.empty() || !this->space_case(input)) {
			std::cout << std::endl;
			std::cout << wer_type <<std::endl;
			std::cout << std::endl;
			continue;
		}
		if (in_type == _NAME_EXPR)
			this->c1[index].set_name(input);
		else if (in_type == _SUR_NAME_EXPR)
			this->c1[index].set_surname(input);
		else if (in_type == _NICK_NAME_EXPR)
			this->c1[index].set_nickname(input);
		else if (in_type == _SECRET_EXPR)
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
		if (std::cin.eof())
			return (error.setError(1, "Warning: Do not press ctrl + D"), false);
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

	if (!input_reader(index, _NAME_EXPR, _WARNING_NAME_EXPR))
		return (false);
	if (!input_reader(index, _SUR_NAME_EXPR, _WARNING_SUR_NAME_EXPR))
		return (false);
	if (!input_phone_number(index, _NUMBER_EXPR, _WARNING_NUMBER_EXPR))
		return (false);
	if (!input_reader(index, _NICK_NAME_EXPR, _WARNING_NICK_NAME_EXPR))
		return (false);
	if (!input_reader(index, _SECRET_EXPR, _WARNING_SECRET_EXPR))
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
	int index = 0;
	
	std::cout << std::endl;
	std::cout << "|  Index   |   Name   | SurName  | NickName |" << std::endl;
	for (size_t k = 0; k < this->size_; k++)
	{
		std::cout << " ---------- ---------- ---------- ---------- " << std::endl;
		std::cout << "|"<< std::setw(10) << k << "|" << std::setw(10); 
		make_word(print, c1[k].get_name());
		std::cout << print << "|" << std::setw(10);
		make_word(print, c1[k].get_surname());
		std::cout << print << "|" << std::setw(10);
		make_word(print, c1[k].get_nickname());
		std::cout << print << "|" <<std::endl;
	}
	std::cout << " ---------- ---------- ---------- ---------- " << std::endl << std::endl; 
	if (this->size_ != 0)
	{
		while(1) {
			std::cout << "Input index for more information: ";
			std::getline(std::cin, temp);
			if (std::cin.eof())
				return (error.setError(1, "Warning: Do not press ctrl + D"), false);
			index = std::atoi(temp.c_str());
			if(index >= (int)this->size_ || temp.empty() || std::isalpha(temp[0]) || index < 0 || !space_case(temp)) {
				std::cout << "Error: Wrong index input." << std::endl;
				continue ;
			}
			std::cout << std::endl;
			break ;
		}
		std::cout << "name -> " << c1[index].get_name() << std::endl;
		std::cout << "surname -> " << c1[index].get_surname() << std::endl;
		std::cout << "number -> " << c1[index].get_number() << std::endl;
		std::cout << "nickname -> " << c1[index].get_nickname() << std::endl;
		std::cout << "secret -> " << c1[index].get_secret() << std::endl;
		std::cout << std::endl;
	}
	return (true);
}
