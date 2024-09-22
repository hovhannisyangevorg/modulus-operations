/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gehovhan <gehovhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 16:41:59 by gehovhan          #+#    #+#             */
/*   Updated: 2024/07/02 18:03:59 by gehovhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main() {
    Harl h1;

    h1.complain("DEBUG");
    h1.complain("INFO");
    h1.complain("WARNING");
    h1.complain("ERROR");
    return 0;
}