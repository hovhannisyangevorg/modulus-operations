/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gehovhan <gehovhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 20:51:52 by gehovhan          #+#    #+#             */
/*   Updated: 2024/07/31 21:01:21 by gehovhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include <iostream>
#include "AMateria.hpp"

class Cure : public AMateria {
    public:
        Cure();
        Cure(const std::string &type);
        Cure(const Cure &other);
        Cure& operator =(const Cure &other);
        ~Cure();
        AMateria* clone() const;
        void use(ICharacter& target);
};

#endif