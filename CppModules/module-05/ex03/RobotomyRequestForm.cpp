#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm():AForm("nil", RobotomyRequestForm::MaxGradeExec, RobotomyRequestForm::MaxGradeSidned),target("nil") {}

RobotomyRequestForm::RobotomyRequestForm(const std::string & target):AForm(target, MaxGradeExec, MaxGradeSidned),target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & other):AForm(other.target, MaxGradeExec, MaxGradeSidned),target(other.target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm& RobotomyRequestForm::operator =(const RobotomyRequestForm & other) {
    if (this == &other)
        return *this;
    AForm::operator=(other);
    this->target = other.target;
    return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {
    this->checkExec(executor);
    this->checkSign();

    std::srand(time(NULL));

    if (rand() % 2 == 0)
        std::cout << this->target << " has been robotomized successfully."<<std::endl;
    else
        std::cout << this->target << " robotomy failed."<<std::endl;
}