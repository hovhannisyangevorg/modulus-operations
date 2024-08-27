#ifndef INTRA_UUID_D1C3D73E_631C_4B23_8EB6_7989965F2A99_5891587_GEHOVHAN_FORM_H
#define INTRA_UUID_D1C3D73E_631C_4B23_8EB6_7989965F2A99_5891587_GEHOVHAN_FORM_H

#include <string>
#include <iostream>

class Form {
    private:
        const std::string   name;
        bool                signedStatus;
        const int           gradeRequiredToSign;
        const int           gradeRequiredToExecute;

    public:
        Form();
        Form(const Form &other);
        Form(const std::string &name, bool gradeToSign, int gradeRequiredToSign, int gradeRequiredToExecute);
        ~Form();

        // Getters
        const std::string   &getName() const;
        bool                getSigned() const;
        int                 getGradeRequiredToSign() const;
        int                 getGradeRequiredToExecute() const;

        // Override Checker for Form
        void                CheckGrade(short grade) const;

        // logic
        void beSigned(class Bureaucrat &b);

        class GradeTooHighException : public std::exception {
            virtual const char *what() const throw();
        };

        class GradeTooLowException : public std::exception {
            virtual const char *what() const throw();
        };

        Form& operator =(const Form& other);
};

std::ostream &operator<<(std::ostream &os, const Form &form);

#endif //INTRA_UUID_D1C3D73E_631C_4B23_8EB6_7989965F2A99_5891587_GEHOVHAN_FORM_H
