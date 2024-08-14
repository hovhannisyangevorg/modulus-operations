#include "Bureaucrat.hpp"

// Constructor
Bureaucrat::Bureaucrat(const std::string &name, short grade) : _name_(name) {
    checkGrade(grade);  // Perform validation
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
    checkGrade(_grade_ - 1);
    --_grade_;
}

// Decrement grade
void Bureaucrat::decrementGrade() {
    checkGrade(_grade_ + 1);
    ++_grade_;
}

// Check grade validity
void Bureaucrat::checkGrade(short grade) const {
    if (grade < 1)
        throw GradeTooLowException();
    if (grade > 150)
        throw GradeTooHighException();
}

// Exception messages
const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return "Grade is too high!";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return "Grade is too low!";
}

// Overloaded output operator
std::ostream& operator<<(std::ostream &os, const Bureaucrat &bureaucrat) {
    os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
    return os;
}