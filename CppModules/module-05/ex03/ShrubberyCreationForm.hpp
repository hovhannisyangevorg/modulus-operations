#ifndef INTRA_UUID_D1C3D73E_631C_4B23_8EB6_7989965F2A99_5891587_GEHOVHAN_SHRUBBERYCREATIONFORM_HPP
#define INTRA_UUID_D1C3D73E_631C_4B23_8EB6_7989965F2A99_5891587_GEHOVHAN_SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

class AForm;

class ShrubberyCreationForm : public AForm {
    private:
        std::string target;

    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(const std::string& target);
        ShrubberyCreationForm(const ShrubberyCreationForm & other);
        ~ShrubberyCreationForm();
        ShrubberyCreationForm& operator =(const ShrubberyCreationForm & other);

        static const int MaxGradeSidned = 25;
        static const int MaxGradeExec = 5;

        void execute(Bureaucrat const & executor) const;
};


#endif //INTRA_UUID_D1C3D73E_631C_4B23_8EB6_7989965F2A99_5891587_GEHOVHAN_SHRUBBERYCREATIONFORM_HPP
