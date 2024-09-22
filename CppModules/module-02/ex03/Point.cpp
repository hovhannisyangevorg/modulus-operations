/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gehovhan <gehovhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 22:08:19 by gehovhan          #+#    #+#             */
/*   Updated: 2024/07/12 22:08:46 by gehovhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point():x(0),y(0) {}
Point::Point(const float num1, const float num2):x(num1),y(num2) {}
Point::Point(const Point& other):x(other.x),y(other.y) {}
Point& Point::operator =(const Point& other) {
	(void)other;
	return *this;
}
Point::~Point() {}

float Point::getX() const { return (x.toFloat()); }
float Point::getY() const { return (y.toFloat()); }