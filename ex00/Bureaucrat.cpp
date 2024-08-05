//
// Created by Gevorg Hovhannisyan on 8/5/24.
//

#include "Bureaucrat.hpp"

// Constructor
Bureaucrat::Bureaucrat(const std::string &name, unsigned short grade) : _name_(name) {
    checkGrade(grade);
    _grade_ = grade;
}

// Destructor
Bureaucrat::~Bureaucrat() {}

// Get name
const std::string& Bureaucrat::getName() const {
    return _name_;
}

// Get grade
unsigned short Bureaucrat::getGrade() const {
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
void Bureaucrat::checkGrade(unsigned short grade) const {
    if (grade < 1)
        throw GradeTooHighException();
    if (grade > 150)
        throw GradeTooLowException();
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