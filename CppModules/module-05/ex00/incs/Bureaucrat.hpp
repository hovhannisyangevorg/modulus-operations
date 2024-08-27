#ifndef INTRA_UUID_D1C3D73E_631C_4B23_8EB6_7989965F2A99_5891587_GEHOVHAN_BUREAUCRAT_H
#define INTRA_UUID_D1C3D73E_631C_4B23_8EB6_7989965F2A99_5891587_GEHOVHAN_BUREAUCRAT_H

#include <iostream>
#include <exception>
#include <string>

class Bureaucrat {
    private:
        const std::string _name_;
        short _grade_;
        void checkGrade(short grade) const;

    public:
        Bureaucrat(const std::string &name, short grade);
        ~Bureaucrat();
        const std::string& getName() const;
        short getGrade() const;

        void incrementGrade();
        void decrementGrade();

        class GradeTooHighException : public std::exception {
            public:
                virtual const char* what() const throw();
        };

        class GradeTooLowException : public std::exception {
            public:
                virtual const char* what() const throw();
        };
        Bureaucrat& operator= (const Bureaucrat& other);
};

std::ostream& operator<<(std::ostream &os, const Bureaucrat &bureaucrat);

#endif //INTRA_UUID_D1C3D73E_631C_4B23_8EB6_7989965F2A99_5891587_GEHOVHAN_BUREAUCRAT_H
