/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gehovhan <gehovhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 19:55:42 by gehovhan          #+#    #+#             */
/*   Updated: 2024/07/31 20:15:16 by gehovhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Animal {
    public:
        void foo();
};

void Animal::foo() {
    std::cout << "foo" << std::endl;
}

int main() {
    Animal a;
    a.foo();
    // return 0;
}