/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gehovhan <gehovhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 17:56:04 by gehovhan          #+#    #+#             */
/*   Updated: 2024/07/02 18:07:05 by gehovhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv) {
    Harl h1;

    if (argc !=  2) {
        std::cout << "ERROR" << std::endl;
        return (1);
    }
    h1.complain(argv[1]);
    return (0);
}