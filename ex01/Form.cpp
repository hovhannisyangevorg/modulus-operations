#include "Form.hpp"
#include "Bureaucrat.hpp"

// Default Constructor
Form::Form() : name(""), signedStatus(false), gradeRequiredToSign(0), gradeRequiredToExecute(0) {}

// Parameterized (with specific values)
Form::Form(const std::string &name, bool gradeToSign, int gradeRequiredToSign, int gradeRequiredToExecute) : name(name), signedStatus(gradeToSign), gradeRequiredToSign(gradeRequiredToSign), gradeRequiredToExecute(gradeRequiredToExecute) {
    this->CheckGrade(this->gradeRequiredToSign);
    this->signedStatus = gradeToSign;
}

// Copy constructor
Form::Form(const Form &other) : name(other.name), signedStatus(other.signedStatus), gradeRequiredToSign(other.gradeRequiredToSign), gradeRequiredToExecute(other.gradeRequiredToExecute) {}
Form::~Form() {}

// Getters
const std::string &Form::getName() const { return this->name; }
bool Form::getSigned() const { return this->signedStatus; }
int Form::getGradeRequiredToSign() const { return this->gradeRequiredToSign; }
int Form::getGradeRequiredToExecute() const { return this->gradeRequiredToExecute; }

// Check grade validity
void Form::CheckGrade(unsigned short grade) const {
    if (grade < 1)
        throw Form::GradeTooHighException();
    if (grade > 150)
        throw Form::GradeTooLowException();
}

void Form::beSigned(Bureaucrat &b) {
    if (this->gradeRequiredToSign > b.getGrade()) {
        this->signedStatus = true;
        return ;
    }
    throw Form::GradeTooLowException();
}

const char* Form::GradeTooLowException::what() const throw() {
    return "Error: Form: Grade is too low!";
}

const char* Form::GradeTooHighException::what() const throw() {
    return "Error: Form: Grade is too high!";
}

Form& Form::operator =(const Form& other)
{
    if (this == &other)
        return *this;
    this->signedStatus = other.getSigned();
    return *this;
}

std::ostream& operator <<(std::ostream &os, const Form& obj)
{
    os << obj.getName() << ", form GradeExec " << obj.getGradeRequiredToExecute() << ", ";
    os << "form GradeSign " << obj.getGradeRequiredToSign() << ", form sined " << obj.getSigned() << ".";
    return (os);
}
