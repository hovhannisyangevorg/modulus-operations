#include "Bureaucrat.hpp"

// Constructor
Bureaucrat::Bureaucrat(const std::string &name, unsigned short grade) : _name_(name) {
    this->CheckGrade(grade);  // Perform validation
    _grade_ = grade;
}

// Destructor
Bureaucrat::~Bureaucrat() {}

// Get name
const std::string& Bureaucrat::getName() const {
    return _name_;
}

// Get grade
short Bureaucrat::getGrade() const {
    return _grade_;
}

// Increment grade
void Bureaucrat::incrementGrade() {
    this->CheckGrade(_grade_ - 1);
    --_grade_;
}

// Decrement grade
void Bureaucrat::decrementGrade() {
    this->CheckGrade(_grade_ + 1);
    ++_grade_;
}

// Check grade validity
void Bureaucrat::CheckGrade(short grade) const {

    if (grade < 1)
        throw Bureaucrat::GradeTooLowException();
    if (grade > 150)
        throw Bureaucrat::GradeTooHighException();
}

// Exception messages
const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return "Error: Bureaucrat: Grade is too high!";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return "Error: Bureaucrat: Grade is too low!";
}

void Bureaucrat::signForm(const Form& form) const {
    if (form.getSigned())
        std::cout << this->_name_ << " signed " << form.getName() << std::endl;
    else
        std::cout << this->_name_ << " couldn't sign " << form.getName() <<  " because low grade." << std::endl;
}

// Overloaded output operator
std::ostream& operator<< (std::ostream &os, const Bureaucrat &bureaucrat) {
    os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
    return os;
}

Bureaucrat& Bureaucrat::operator = (const Bureaucrat& other) {
    this->_grade_ = other.getGrade();
    this->_name_ = other.getName();
    return *this;
}
