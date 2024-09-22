/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gehovhan <gehovhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 20:53:25 by gehovhan          #+#    #+#             */
/*   Updated: 2024/07/31 21:02:49 by gehovhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
    private:
        AMateria *slot[4];
    public:
        MateriaSource();
        MateriaSource(const MateriaSource &other);
        ~MateriaSource();
        MateriaSource& operator =(const MateriaSource &other);
        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);
};

#endif