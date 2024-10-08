/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gehovhan <gehovhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 22:02:49 by gehovhan          #+#    #+#             */
/*   Updated: 2024/07/12 22:08:04 by gehovhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main() {
	Point p1(1, 1);
    Point p2(4, 1);
    Point p3(2, 5);
    Point point(3, 3);	
	// true

	// Point p1(0, 0);
    // Point p2(4, 0);
    // Point p3(2, 4);
    // Point point(2, 2);	
	// true
	
	// Point p1(2, 1);
    // Point p2(6, 1);
    // Point p3(4, 5);
    // Point point(5, 3);	
	// true

	// Point p1(1, 1);
    // Point p2(4, 1);
    // Point p3(2, 5);
    // Point point(5, 3);	
	// false

	// Point p1(1, 1);
    // Point p2(4, 1);
    // Point p3(2, 5);
    // Point point(3, 2);
	// true

	// Point p1(1, 1);
    // Point p2(4, 1);
    // Point p3(2, 5);
    // Point point(3, 3);
	// false
	std::cout << bsp(p1, p2, p3, point) << std::endl;
	return 0;
}