#include "PresidentialPardonForm.hpp"
#include <dlfcn.h>

PresidentialPardonForm::PresidentialPardonForm():AForm("nil", PresidentialPardonForm::MaxGradeExec, PresidentialPardonForm::MaxGradeSidned),target("nil") {}

PresidentialPardonForm::PresidentialPardonForm(const std::string & target):AForm(target, MaxGradeExec, MaxGradeSidned),target(target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & other):AForm(other.target, MaxGradeExec, MaxGradeSidned),target(other.target) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm& PresidentialPardonForm::operator =(const PresidentialPardonForm & other) {
    if (this == &other)
        return *this;
    AForm::operator=(other);
    this->target = other.target;
    return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const {
    this->checkExec(executor);
    this->checkSign();
    std::cout << AForm::getName() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}