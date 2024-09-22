#ifndef INTRA_UUID_D1C3D73E_631C_4B23_8EB6_7989965F2A99_5891587_GEHOVHAN_BUREAUCRAT_H
#define INTRA_UUID_D1C3D73E_631C_4B23_8EB6_7989965F2A99_5891587_GEHOVHAN_BUREAUCRAT_H

#include <iostream>
#include "Form.hpp"

class Bureaucrat {
    private:
        std::string _name_;
        short _grade_;

    public:
        Bureaucrat(const std::string &name, unsigned short grade);
        ~Bureaucrat();
        const std::string& getName() const;
        short getGrade() const;

        void incrementGrade();
        void decrementGrade();

        void CheckGrade(short grade) const;

        class GradeTooHighException : public std::exception {
            public:
                virtual const char* what() const throw();
        };

        class GradeTooLowException : public std::exception {
            public:
                virtual const char* what() const throw();
        };
        void signForm(const Form& form) const;
        Bureaucrat& operator =(const Bureaucrat& other);
};

std::ostream& operator<<(std::ostream &os, const Bureaucrat &bureaucrat);

#endif //INTRA_UUID_D1C3D73E_631C_4B23_8EB6_7989965F2A99_5891587_GEHOVHAN_BUREAUCRAT_H
