/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gehovhan <gehovhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 20:16:26 by gehovhan          #+#    #+#             */
/*   Updated: 2024/06/28 16:05:43 by gehovhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "phoneBook.hpp"
# include "error.hpp"
# include "route.hpp"
# include <iostream>

Error	error;

int main() {
	PhoneBook	book;
	Router		route;
	std::string	command;
	size_t		index = 0;

	while (1) {
		std::cout << "command -> ADD: Adding New Contact. " << std::endl;
		std::cout << "command -> SEARCH: Searching And Showing Contacts. " << std::endl;
		std::cout << "command -> EXIT: Closing Programm. " << std::endl << std::endl;
		std::cout << "input command: ";
		std::getline(std::cin, command);

		if (std::cin.eof())
			error.setError(1, "Warning: Do not press ctrl + D");
		route.set_command(command);
		if (error.hasError() || !route.cmd_route(book, index)) {
			if (error.getCode() == 1) {
				std::cout << error.getMessage() << std::endl;
				break ;
			} else if (error.getCode() == 9){
				break ;
			} else {
				std::cout << error.getMessage() << std::endl;
				continue ;
			}
		}
	}
}