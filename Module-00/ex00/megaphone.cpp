/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gehovhan <gehovhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 13:05:32 by gehovhan          #+#    #+#             */
/*   Updated: 2024/06/15 13:05:32 by gehovhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

const char* _HEADRE = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";

void toUpperCase(char* str) {
	for (size_t i = 0; i < std::strlen(str); ++i)
		str[i] = std::toupper(str[i]);
}

int main(int argc, char **argv) {
	if (argc == 1)
		std::cout << _HEADRE << std::endl;
	else {
		for (int i = 1; i < argc; ++i) {
			toUpperCase(argv[i]);
			std::cout << argv[i];
			if (i < argc - 1)
				std::cout << " ";
		}
		std::cout << std::endl;
	}
	return (0);
}