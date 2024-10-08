/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gehovhan <gehovhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 20:35:24 by gehovhan          #+#    #+#             */
/*   Updated: 2024/07/31 21:02:00 by gehovhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main() {
	IMateriaSource* src = new MateriaSource();
    Ice * ice = new Ice();
    src->learnMateria(ice);
    src->learnMateria(new Cure());
    src->learnMateria(ice);
    src->learnMateria(ice);
    ICharacter* me = new Character("me");
    AMateria* tmp;
    
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    // me->equip(tmp);
    // tmp = src->createMateria("cure");
    // me->equip(tmp);
    // tmp = src->createMateria("cure");
    // me->equip(tmp);
    // tmp = src->createMateria("cure");
    // me->equip(tmp);
    // tmp = src->createMateria("cure");
    // me->equip(tmp);
    // tmp = src->createMateria("cure");
    // me->equip(tmp);
    // me->unequip(-12);
    // ICharacter* bob = new Character("bob");
    // me->use(0, *bob);
    // me->use(1, *bob);

    // delete bob;
    // delete me;
    // delete src;
	return 0;
}