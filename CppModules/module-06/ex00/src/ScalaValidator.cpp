#include <../incs/ScalaValidator.hpp>
#include <../incs/Variable.hpp>
#include <cctype>

ScalaValidator::ScalaValidator() : variable() {}
ScalaValidator::~ScalaValidator() {}
ScalaValidator::ScalaValidator(const std::string& literal) : variable(literal) {}
ScalaValidator::ScalaValidator(const ScalaValidator& v) : variable(v.variable) {}
ScalaValidator& ScalaValidator::operator=(const ScalaValidator &) { return *this; }

void ScalaValidator::validate() {
    this->variable.FindType();
//    std::cout <<
    if (this->variable.GetType() == UNKNOWN) {
//        std::cout << "Hiiiiiiiiiiii\n";
        throw  std::runtime_error("ScalaValidator: Validation Failed.");
    }
}
