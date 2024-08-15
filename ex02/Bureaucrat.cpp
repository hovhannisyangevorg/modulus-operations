#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name_("nil"), _grade_(0) {}

Bureaucrat::Bureaucrat(std::string _name_, int _grade_) {
    if (_grade_ < 0)
        throw Bureaucrat::GradeTooHighException();
    if (_grade_ > 150)
        throw Bureaucrat::GradeTooLowException();
    this->_grade_ = _grade_;
    this->_name_ = _name_;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) {
    this->_grade_ = other._grade_;
    this->_name_ = other._name_;
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat& Bureaucrat::operator =(const Bureaucrat& other) {
    this->_grade_ = other._grade_;
    this->_name_ = other._name_;
    return *this;
}

std::string Bureaucrat::getName() const {
    return this->_name_;
}

int	Bureaucrat::getGrade() const {
    return this->_grade_;
}

const char * Bureaucrat::GradeTooLowException::what() const throw () {
    return "You entered a rating less than required.";
}

const char * Bureaucrat::GradeTooHighException::what() const throw () {
    return "You entered a rating that is more than required.";
}

void Bureaucrat::increaseGrade() {
    if (--this->_grade_ < 1)
        throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decreaseGrade() {
    if (++this->_grade_ > 150)
        throw Bureaucrat::GradeTooLowException();
}

void Bureaucrat::signForm(const AForm& form) const {
    if (form.getSigned())
        std::cout << this->_name_ << " signed " << form.getName() << std::endl;
    else
        std::cout << this->_name_ << " couldn't sign " << form.getName() <<  " because low grade." << std::endl;
}

void Bureaucrat::executeForm(AForm const & form) const {
    if (form.getGradeExec())
        std::cout << this->_name_ << " executed " << form.getName() << std::endl;
    else
        std::cout << this->_name_ << " failed " << form.getName() << std::endl;
}

std::ostream& operator <<(std::ostream &os, const Bureaucrat& obj) {
    os << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".";
    return (os);
}