/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gehovhan <gehovhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 18:47:52 by gehovhan          #+#    #+#             */
/*   Updated: 2024/07/31 19:46:57 by gehovhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
	private:
		std::string idea[100];

	public:
		Brain();
		Brain(const Brain &other);
		~Brain();
		Brain& operator =(const Brain &other);
		
		void	setIdea(std::string &idea, const int Index);
		std::string getIdea(const int Index);
};

#endif