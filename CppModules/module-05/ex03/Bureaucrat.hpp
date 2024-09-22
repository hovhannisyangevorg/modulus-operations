#ifndef INTRA_UUID_D1C3D73E_631C_4B23_8EB6_7989965F2A99_5891587_GEHOVHAN_BUREAUCRAT_H
#define INTRA_UUID_D1C3D73E_631C_4B23_8EB6_7989965F2A99_5891587_GEHOVHAN_BUREAUCRAT_H

#include <iostream>
#include <fstream>
#include "AForm.hpp"

class AForm;

class Bureaucrat {
    private:
        std::string _name_;
        int			_grade_;

    public:
        Bureaucrat();
        Bureaucrat(std::string _name_, int _grade_);
        Bureaucrat(const Bureaucrat& other);
        ~Bureaucrat();
        Bureaucrat& operator =(const Bureaucrat& other);

        class GradeTooLowException : public std::exception {
            public:
                const char * what() const throw ();
        };

        class GradeTooHighException : public std::exception {
            public:
                const char * what() const throw ();
        };

        void increaseGrade();
        void decreaseGrade();

        std::string getName() const;
        int			getGrade() const;

        void signForm(const AForm& form) const;
        void executeForm(AForm const & form) const;
};

std::ostream& operator <<(std::ostream &os, const Bureaucrat& obj);


#endif //INTRA_UUID_D1C3D73E_631C_4B23_8EB6_7989965F2A99_5891587_GEHOVHAN_BUREAUCRAT_H
