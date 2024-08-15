#include "AForm.hpp"
#include "Bureaucrat.hpp"

// Default Constructor
AForm::AForm() : name(""), signedStatus(false), gradeRequiredToSign(0), gradeRequiredToExecute(0) {}

// Parameterized (with specific values)
AForm::AForm(const std::string &name, bool gradeToSign, int gradeRequiredToSign, int gradeRequiredToExecute) : name(name), signedStatus(gradeToSign), gradeRequiredToSign(gradeRequiredToSign), gradeRequiredToExecute(gradeRequiredToExecute) {
    this->CheckGrade(this->gradeRequiredToSign);
    this->signedStatus = gradeToSign;
}

// Copy constructor
AForm::AForm(const AForm &other) : name(other.name), signedStatus(other.signedStatus), gradeRequiredToSign(other.gradeRequiredToSign), gradeRequiredToExecute(other.gradeRequiredToExecute) {}
AForm::~AForm() {}

// Getters
const std::string &AForm::getName() const { return this->name; }
bool AForm::getSigned() const { return this->signedStatus; }
int AForm::getGradeRequiredToSign() const { return this->gradeRequiredToSign; }
int AForm::getGradeRequiredToExecute() const { return this->gradeRequiredToExecute; }

// Check grade validity
void AForm::CheckGrade(short grade) const {
    if (grade < 1)
        throw AForm::GradeTooLowException();
    if (grade > 150)
        throw AForm::GradeTooHighException();
}

void AForm::beSigned(Bureaucrat &b) {
    if (this->gradeRequiredToSign > b.getGrade()) {
        this->signedStatus = true;
        return ;
    }
    throw AForm::GradeTooLowException();
}

const char* AForm::GradeTooLowException::what() const throw() {
    return "Error: Form: Grade is too low!";
}

const char* AForm::GradeTooHighException::what() const throw() {
    return "Error: Form: Grade is too high!";
}

AForm& AForm::operator =(const AForm& other)
{
    if (this == &other)
        return *this;
    this->signedStatus = other.getSigned();
    return *this;
}

std::ostream& operator <<(std::ostream &os, const AForm& obj)
{
    os << obj.getName() << ", form GradeExec " << obj.getGradeRequiredToExecute() << ", ";
    os << "form GradeSign " << obj.getGradeRequiredToSign() << ", form sined " << obj.getSigned() << ".";
    return (os);
}

void AForm::checkExec(Bureaucrat const & executor) const
{
    if (executor.getGrade() > this->gradeRequiredToExecute)
        throw GradeTooLowException();
}

void AForm::checkSign() const
{
    if (!this->signedStatus)
        throw std::runtime_error("Form cannot be signed\n");
}
