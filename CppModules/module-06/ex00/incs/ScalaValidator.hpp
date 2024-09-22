#ifndef SCALAVALIDATOR_HPP
#define SCALAVALIDATOR_HPP

#include <../incs/Variable.hpp>

#include <iostream>

class ScalaValidator
{
private:
    Variable       variable;
public:
    ScalaValidator();
    ~ScalaValidator();
    ScalaValidator(const std::string& literal);
    ScalaValidator(const ScalaValidator&);
    ScalaValidator& operator=(const ScalaValidator& );
     const Variable& getVariable() const {
        return this->variable;
    }
    void validate();
};



#endif //SCALAVALIDATOR_HPP
