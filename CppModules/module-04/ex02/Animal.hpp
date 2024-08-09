/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gehovhan <gehovhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 20:22:37 by gehovhan          #+#    #+#             */
/*   Updated: 2024/07/31 20:28:43 by gehovhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class Animal {
    protected:
        std::string type;

    public:
        Animal();
        Animal(const Animal &other);
        virtual ~Animal();
        Animal& operator=(const Animal &other);
        virtual void makeSound() const = 0;

        std::string getType() const;
        void setType(std::string type);
};

class Dog : public Animal {
    private:
        Brain *brain;
        
    public:
        Dog();
        Dog(const Dog &other);
        ~Dog();
        Dog& operator =(const Dog &other);
        void makeSound() const;
};

class Cat : public Animal {
    private:
        Brain *brain;
        
    public:
        Cat();
        Cat(const Cat &other);
        ~Cat();
        Cat& operator =(const Cat &other);

        void makeSound() const;
};

#endif