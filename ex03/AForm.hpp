#ifndef INTRA_UUID_D1C3D73E_631C_4B23_8EB6_7989965F2A99_5891587_GEHOVHAN_AFORM_H
#define INTRA_UUID_D1C3D73E_631C_4B23_8EB6_7989965F2A99_5891587_GEHOVHAN_AFORM_H

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    private:
        bool		_signed_;
        const int	_gradeExec_;
        const int	_gradeSign_;
        const std::string	_name_;
    public:
    AForm();
    AForm(std::string name, int GradeExec, int GradeSign);
    AForm(std::string name, bool _signed_, int GradeExec, int GradeSign);
    AForm(const AForm& other);
    virtual ~AForm();
    AForm& operator =(const AForm& other);

    class GradeTooHighException : public std::exception
    {
    public:
        const char * what() const throw();
    };

    class GradeTooLowException : public std::exception
    {
    public:
        const char * what() const throw();
    };

    bool getSigned() const;
    int getGradeExec() const;
    int getGradeSign() const;
    std::string getName() const;

    void checkExec(Bureaucrat const & executor) const;
    void checkSign() const;

    void beSigned(const Bureaucrat &bureaucrat);

    virtual void execute(Bureaucrat const & executor) const = 0;
};

std::ostream& operator <<(std::ostream &os, const AForm& obj);


#endif //INTRA_UUID_D1C3D73E_631C_4B23_8EB6_7989965F2A99_5891587_GEHOVHAN_AFORM_H
