//
// Created by Gevorg Hovhannisyan on 8/15/24.
//

#ifndef INTRA_UUID_D1C3D73E_631C_4B23_8EB6_7989965F2A99_5891587_GEHOVHAN_INTERN_HPP
#define INTRA_UUID_D1C3D73E_631C_4B23_8EB6_7989965F2A99_5891587_GEHOVHAN_INTERN_HPP

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class AForm;

class Intern {
    public:
        Intern();
        Intern(const Intern&);
        Intern& operator= (const Intern&);
        ~Intern();

        AForm *makeForm(std::string form, std::string target);
};

#endif //INTRA_UUID_D1C3D73E_631C_4B23_8EB6_7989965F2A99_5891587_GEHOVHAN_INTERN_HPP
