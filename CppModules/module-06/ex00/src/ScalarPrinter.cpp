#include "../incs/ScalarPrinter.hpp"
#include <limits>

ScalarPrinter::ScalarPrinter() : validator(NULL), Character("char: "), Integer("int: "), Float("float: "), Double("double: ") {}

ScalarPrinter::~ScalarPrinter() {}
ScalarPrinter::ScalarPrinter(const ScalaValidator* va) : validator(va), Character("char: "), Integer("int: "), Float("float: "), Double("double: ") {}
ScalarPrinter::ScalarPrinter(const ScalarParser& p) : validator(p.GetValidator()), Character("char: "), Integer("int: "), Float("float: "), Double("double: ") {}

ScalarPrinter& ScalarPrinter::operator=(const ScalarPrinter& ) {
    return *this;
}

const ScalaValidator* ScalarPrinter::GetValidator() const {
    return this->validator;
}

void ScalarPrinter::PrintChar(char literal) {

    std::cout << this->Character;
    if (literal >= 0 && literal < 32)
        std::cout << "Non displayable" << std::endl;
    else
        std::cout << "'" << literal << "'" << std::endl;
    std::cout << this->Integer << static_cast<int>(literal) << std::endl;
    std::cout << this->Float << static_cast<float>(literal) << ".0f" << std::endl;
    std::cout << this->Double << static_cast<double>(literal) << std::endl;
}



void ScalarPrinter::PrintInt(int literal) {

    std::cout << this->Character;
    if (literal < -128 || literal > 127)
        std::cout << "impossible" << std::endl;
    else if (literal >= 0 && literal < 32)
        std::cout << "Non displayable" << std::endl;
    else
        std::cout << static_cast<char>(literal) << std::endl;
    std::cout << this->Integer << literal << std::endl;
    std::cout << this->Float << static_cast<float>(literal) << ".0f" << std::endl;
    std::cout << this->Double << static_cast<double>(literal) << std::endl;
}

void ScalarPrinter::PrintFloat(float literal) {
    const std::string fliteral = this->validator->getVariable().GetLiteral();

    if (fliteral == "nanf" || fliteral == "inff" || fliteral == "+inff" || fliteral == "-inff")
    {
        std::cout << this->Character << "impossible" << std::endl;
        std::cout << this->Integer << "impossible" << std::endl;
        std::cout << this->Float << fliteral << std::endl;
        std::string lit(fliteral);
        lit.resize(lit.size() - 1);
        std::cout << this->Double << lit << std::endl;
    }
    else
    {
        std::cout << this->Character;
        if (literal < 0.0f || literal > 127.0f)
            std::cout << "impossible" << std::endl;
        else if (literal >= 0 && literal < 32)
            std::cout << "Non displayable" << std::endl;
        else
            std::cout << static_cast<char>(literal) << std::endl;
        if (literal < static_cast<float>(std::numeric_limits<int>::min()) || literal > static_cast<float>(std::numeric_limits<int>::max())) {
            std::cout << this->Integer << "impossible\n";
        }
        else {
            std::cout << this->Integer << static_cast<int>(literal) << std::endl;
        }
        std::cout << this->Integer << static_cast<int>(literal) << std::endl;
        std::cout << this->Float << literal << "f" << std::endl;
        std::cout << this->Double << static_cast<double>(literal) << std::endl;
    }
}
void ScalarPrinter::PrintDouble(double literal) {
    const std::string fliteral = this->validator->getVariable().GetLiteral();

    if (fliteral == "nan" || fliteral == "inf" || fliteral == "+inf" || fliteral == "-inf")
    {
        std::cout << this->Character << "impossible" << std::endl;
        std::cout << this->Integer << "impossible" << std::endl;
        std::cout << this->Float << fliteral << "f" << std::endl;
        std::cout << this->Double << fliteral << std::endl;
    }
    else
    {
        std::cout << this->Character;
        if (literal < 0.0 || literal > 127.0)
            std::cout << "impossible" << std::endl;
        else if (literal >= 0 && literal < 32)
            std::cout << "Non displayable" << std::endl;
        else
            std::cout << static_cast<char>(literal) << std::endl;
        if (literal < static_cast<double>(std::numeric_limits<int>::min()) || literal > static_cast<double>(std::numeric_limits<int>::max())) {
            std::cout << this->Integer << "impossible\n";
        }
        else {
            std::cout << this->Integer << static_cast<int>(literal) << std::endl;
        }
        std::cout << this->Float << static_cast<float>(literal) << "f" << std::endl;
        std::cout << this->Double << literal << std::endl;
    }
}

void ScalarPrinter::PrintUnknown(void) {
    std::cout << this->Character << "impossible" << std::endl;
    std::cout << this->Integer << "impossible" << std::endl;
    std::cout << this->Float << "impossible" << std::endl;
    std::cout << this->Double << "impossible" << std::endl;
}

std::string ScalarPrinter::GetCharacter() const {return this->Character;}
std::string ScalarPrinter::GetInteger() const {return this->Character;}
std::string ScalarPrinter::GetFloat() const {return this->Character;}
std::string ScalarPrinter::GetDouble() const {return this->Character;}