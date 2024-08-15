#ifndef INTRA_UUID_D1C3D73E_631C_4B23_8EB6_7989965F2A99_5891587_GEHOVHAN_ROBOTOMYREQUESTFORM_HPP
#define INTRA_UUID_D1C3D73E_631C_4B23_8EB6_7989965F2A99_5891587_GEHOVHAN_ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class AForm;

class RobotomyRequestForm : public AForm {
    private:
        std::string target;

    public:
        RobotomyRequestForm();
        RobotomyRequestForm(const std::string & target);
        RobotomyRequestForm(const RobotomyRequestForm & other);
        ~RobotomyRequestForm();
        RobotomyRequestForm& operator =(const RobotomyRequestForm & other);

        static const int MaxGradeSidned = 72;
        static const int MaxGradeExec = 45;
        void execute(Bureaucrat const & executor) const;
};

#endif //INTRA_UUID_D1C3D73E_631C_4B23_8EB6_7989965F2A99_5891587_GEHOVHAN_ROBOTOMYREQUESTFORM_HPP
