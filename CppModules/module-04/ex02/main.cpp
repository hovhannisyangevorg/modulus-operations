/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gehovhan <gehovhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 19:55:42 by gehovhan          #+#    #+#             */
/*   Updated: 2024/07/31 20:29:06 by gehovhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

int main()
{
    // Abstract a; <--- Invalid declaration
	Animal **m = new Animal*[100];
    for (int i = 0; i < 50; i++)
        m[i] = new Cat();
    for (int i = 50; i < 100; i++)
        m[i] = new Dog();
    for (int i = 0; i < 100; i++)
    {
        m[i]->makeSound();
        delete m[i];
    }
    delete [] m;
	return (0);
}