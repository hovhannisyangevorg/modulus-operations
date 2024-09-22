/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gehovhan <gehovhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 20:53:07 by gehovhan          #+#    #+#             */
/*   Updated: 2024/07/31 21:01:14 by gehovhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include <iostream>
#include "AMateria.hpp"


class Ice : public AMateria {
    public:
        Ice();
        Ice(const std::string &type);
        Ice(const Ice &other);
        Ice& operator =(const Ice &other);
        ~Ice();
        AMateria* clone() const;
        void use(ICharacter& target);
};

#endif