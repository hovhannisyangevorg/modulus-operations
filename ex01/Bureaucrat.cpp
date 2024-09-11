#include "Bureaucrat.hpp"

const std::string UNKNOWN = "Unknown";

// Default Constructor
Bureaucrat::Bureaucrat() : name(UNKNOWN), grade(0) {}

// Constructor
Bureaucrat::Bureaucrat(const std::string &name, unsigned short grade) : name(name) {
    this->CheckGrade(grade);  // Perform validation
    this->grade = grade;
}

// Destructor
Bureaucrat::~Bureaucrat() {}

// Get name
const std::string& Bureaucrat::getName() const {
    return this->name;
}

// Get grade
short Bureaucrat::getGrade() const {
    return this->grade;
}

// Set grade
void Bureaucrat::setGrade(const short g) {
    this->CheckGrade(g);
    this->grade = g;
}

// Increment grade
void Bureaucrat::incrementGrade() {
    this->CheckGrade(this->grade - 1);
    --this->grade;
}

// Decrement grade
void Bureaucrat::decrementGrade() {
    this->CheckGrade(this->grade + 1);
    ++this->grade;
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
    if (form.getSignedStatus())
        std::cout << this->name << " signed " << form.getName() << std::endl;
    else
        std::cout << this->name << " couldn't sign " << form.getName() <<  " because low grade." << std::endl;
}

// Overloaded output operator
std::ostream& operator<< (std::ostream &os, const Bureaucrat &bureaucrat) {
    os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
    return os;
}

Bureaucrat& Bureaucrat::operator = (const Bureaucrat& o) {
    CheckGrade(o.getGrade());
    // We cannot assign to 'name' because it's a constant,
    if (this != &o) {
        this->grade = o.getGrade();
    }
    return *this;
}
