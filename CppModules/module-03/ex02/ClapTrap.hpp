/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gehovhan <gehovhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 20:47:40 by gehovhan          #+#    #+#             */
/*   Updated: 2024/07/22 21:15:52 by gehovhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
    protected:
        std::string     _name_;
        unsigned int    _Hit_;
        unsigned int    _Energy_;
        unsigned int    _Attack_;

    public:
        ClapTrap();
        ClapTrap(std::string &_name_);
        ClapTrap(const ClapTrap &other);
        ClapTrap &operator=(const ClapTrap &other);
        virtual ~ClapTrap();

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        int	getHit();
        int	getEnergy();
        int	getAttack();
        std::string	getName();

        void	setHit(unsigned int _Hit_);
        void	setEnergy(unsigned int _Energy_);
        void	setAttack(unsigned int _Attack_);
        void	setName(std::string _name_);
        void	showInfo();
};

#endif