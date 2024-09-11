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
Form::Form(const Form &o) : name(o.name), signedStatus(o.signedStatus), gradeRequiredToSign(o.gradeRequiredToSign), gradeRequiredToExecute(o.gradeRequiredToExecute) {}
Form::~Form() {}

// Getters
const std::string &Form::getName() const { return this->name; }
bool Form::getSignedStatus() const { return this->signedStatus; }
int Form::getGradeRequiredToSign() const { return this->gradeRequiredToSign; }
int Form::getGradeRequiredToExecute() const { return this->gradeRequiredToExecute; }

// Check grade validity
void Form::CheckGrade(short grade) const {
    if (grade < 1)
        throw Form::GradeTooLowException();
    if (grade > 150)
        throw Form::GradeTooHighException();
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

Form& Form::operator =(const Form& o)
{
    if (this != &o) {
        this->signedStatus = o.getSignedStatus();
    }
    return *this;
}

std::ostream& operator <<(std::ostream &os, const Form& obj)
{
    os << obj.getName() << ", form GradeExec " << obj.getGradeRequiredToExecute() << ", ";
    os << "form GradeSign " << obj.getGradeRequiredToSign() << ", form sined " << obj.getSignedStatus() << ".";
    return (os);
}
