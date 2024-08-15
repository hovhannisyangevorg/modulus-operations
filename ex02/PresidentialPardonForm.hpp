//
// Created by Gevorg Hovhannisyan on 8/12/24.
//

#ifndef INTRA_UUID_D1C3D73E_631C_4B23_8EB6_7989965F2A99_5891587_GEHOVHAN_PRESIDENTIALPARDONFORM_HPP
#define INTRA_UUID_D1C3D73E_631C_4B23_8EB6_7989965F2A99_5891587_GEHOVHAN_PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class AForm;

class PresidentialPardonForm : public AForm {
    private:
        std::string target;

    public:
        PresidentialPardonForm();
        PresidentialPardonForm(const std::string & target);
        PresidentialPardonForm(const PresidentialPardonForm & other);
        ~PresidentialPardonForm();
        PresidentialPardonForm& operator =(const PresidentialPardonForm & other);

        static const int MaxGradeSidned = 25;
        static const int MaxGradeExec = 5;
        void execute(Bureaucrat const & executor) const;
};

#endif //INTRA_UUID_D1C3D73E_631C_4B23_8EB6_7989965F2A99_5891587_GEHOVHAN_PRESIDENTIALPARDONFORM_HPP
