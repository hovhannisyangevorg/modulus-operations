/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gehovhan <gehovhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 22:01:29 by gehovhan          #+#    #+#             */
/*   Updated: 2024/07/12 22:08:53 by gehovhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"


class Point {
    private:
        const Fixed x;	
        const Fixed y;

    public:
        Point();
        Point(const float num1, const float num2);
        Point(const Point& other);
        Point& operator =(const Point& other);
        ~Point();
        float getX() const;
        float getY() const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif