#ifndef INTRA_UUID_D1C3D73E_631C_4B23_8EB6_7989965F2A99_5891587_GEHOVHAN_AFORM_H
#define INTRA_UUID_D1C3D73E_631C_4B23_8EB6_7989965F2A99_5891587_GEHOVHAN_AFORM_H

#include <string>
#include <iostream>
#include "CheckGrade.hpp"
//#include "Bureaucrat.hpp"

class AForm : public Checker {
    private:
        const std::string   name;
        bool                signedStatus;
        const int           gradeRequiredToSign;
        const int           gradeRequiredToExecute;

    public:
        AForm();
        AForm(const AForm &other);
        AForm(const std::string &name, bool gradeToSign, int gradeRequiredToSign, int gradeRequiredToExecute);
        ~AForm();

        // Getters
        const std::string   &getName() const;
        bool                getSigned() const;
        int                 getGradeRequiredToSign() const;
        int                 getGradeRequiredToExecute() const;

        // Override Checker for Form
        void                CheckGrade(unsigned short grade) const;

        // logic
        void beSigned(class Bureaucrat &b);


        class GradeTooHighException : public std::exception {
            virtual const char *what() const throw();
        };

        class GradeTooLowException : public std::exception {
            virtual const char *what() const throw();
        };

        AForm& operator =(const AForm& other);
};

std::ostream &operator<<(std::ostream &os, const AForm &form);

#endif //INTRA_UUID_D1C3D73E_631C_4B23_8EB6_7989965F2A99_5891587_GEHOVHAN_FORM_H
