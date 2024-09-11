#include "Bureaucrat.hpp"

const std::string UNKNOWN = "Unknown";

// Default Constructor
Bureaucrat::Bureaucrat() : name(UNKNOWN), grade(0) {}

// Destructor
Bureaucrat::~Bureaucrat() {}

// Parameterized constructor
Bureaucrat::Bureaucrat(const std::string &name, short grade) : name(name) {
    checkGrade(grade);
    this->grade = grade;
}

// Get name
const std::string& Bureaucrat::getName() const {
    return name;
}

// Get grade
short Bureaucrat::getGrade() const {
    return grade;
}

// Set grade
void Bureaucrat::setGrade(const short g) {
    checkGrade(g);
    this->grade = g;
}


// Increment grade
void Bureaucrat::incrementGrade() {
    checkGrade(grade - 1);
    --grade;
}

// Decrement grade
void Bureaucrat::decrementGrade() {
    checkGrade(grade + 1);
    ++grade;
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

Bureaucrat& Bureaucrat::operator =(const Bureaucrat& o)
{
    // We cannot assign to 'name' because it's a constant,
    if (this != &o) {
        grade = o.grade;
    }
    return *this;
}

//std::ostream& operator<<(std::ostream &os, const Bureaucrat &bureaucrat);