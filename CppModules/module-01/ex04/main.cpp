/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gehovhan <gehovhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 16:09:40 by gehovhan          #+#    #+#             */
/*   Updated: 2024/07/02 18:34:57 by gehovhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <cstring>
int main(int argc, char **argv) {
    if (argc != 4) {
        std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>\n";
        return 1;
    }
	std::string name = argv[1];
	size_t pos = 0;
	std::string line;

	std::ifstream inFile(argv[1]);
	if (!inFile) {
		std::cout << "Error: cant open file "<< std::endl;
		return(1);
	}
	std::ofstream outFile(name + ".reverce");
	
	while (getline(inFile, line)) {
		while ((pos = line.find(argv[2], pos)) != std::string::npos) {
			line.erase(pos, strlen(argv[2]));
			line.insert(pos, argv[3]);
			pos += strlen(argv[3]);
		}
		outFile << line << std::endl;
		pos = 0;
	} 
	return (0);
}