#include "../incs/ScalarParser.hpp"

#include <string>
#include <sstream>
#include <limits>

ScalarParser::ScalarParser() : validator(NULL), isSuccess(false) {}
ScalarParser::~ScalarParser() {}
ScalarParser::ScalarParser(const ScalarParser& s) : validator(s.validator), isSuccess(false) {}
ScalarParser::ScalarParser(const ScalaValidator* va) : validator(va), isSuccess(false) {}
ScalarParser& ScalarParser::operator=(const ScalarParser& p) {
    if (this != &p) {
        this->validator = p.validator;
    }
    return *this;
}

const ScalaValidator* ScalarParser::GetValidator() const {
    return this->validator;
}

const char* ScalarParser::ScalarParserException::what() throw() {
    ScalarPrinter p;

    switch (this->type) {
    case INT:
        this->formattedString = p.GetInteger();
        break;
    case FLOAT:
        this->formattedString = p.GetFloat();
        break;
    case DOUBLE:
        this->formattedString = p.GetDouble();
        break;
    case CHAR:
        this->formattedString = p.GetCharacter();
        break;
    default: break;
    }
    this->formattedString += this->message;
    return this->formattedString.c_str();
}

void ScalarParser::Parse(t_type type) {
    ScalarPrinter pr(this->validator);

        isSuccess = false;
        switch (type) {
        case CHAR: {

            char vul = this->ScalarParserChar();
            pr.PrintChar(vul);
            isSuccess = true;
            break;
        }
        case INT: {
                int vul = this->ScalarParserInt();
                pr.PrintInt(vul);
                isSuccess = true;
            break;
        }
        case FLOAT: {
            float vul = this->ScalarParserFloat();
            pr.PrintFloat(vul);
            isSuccess = true;
            break;

        }
        case DOUBLE: {
                double vul = this->ScalarParserDouble();
                pr.PrintDouble(vul);
                isSuccess = true;
                break;
            }
        default:
            pr.PrintUnknown();
            isSuccess = true;
            break;
        }

}

char    ScalarParser::ScalarParserChar() {
    std::string literal = this->validator->getVariable().GetLiteral();

    if (!literal.empty()) {
        return literal.at(0);
    }
    throw ScalarParserException(CHAR, "impossible");
}

int     ScalarParser::ScalarParserInt() {
    long long vul;
    std::string literal = this->validator->getVariable().GetLiteral();

    if (literal.empty()) {
        throw ScalarParserException(INT, "impossible");
    }

    std::istringstream iss(literal);
    iss >> vul;

    if (iss.fail() || !iss.eof()) {
        throw ScalarParserException(INT, "impossible");
    }
    if (vul < std::numeric_limits<int>::min() || vul > std::numeric_limits<int>::max())
        throw ScalarParserException(INT, "impossible");

    return vul;
}

float   ScalarParser::ScalarParserFloat() {
    float vul;
    std::string literal = this->validator->getVariable().GetLiteral();

    if (literal.empty()) {
        throw ScalarParserException(FLOAT, "impossible");
    }

    std::istringstream iss(literal);
    iss >> vul;

    if (iss.fail() || !iss.eof()) {
        throw ScalarParserException(FLOAT, "impossible");
    }
    return vul;
}

double  ScalarParser::ScalarParserDouble() {
    double d;
    std::string literal = this->validator->getVariable().GetLiteral();

    if (literal.empty()) {
        throw ScalarParserException(DOUBLE, "impossible");
    }

    std::istringstream iss(literal);
    iss >> d;

    // Check if the conversion was successful
    if (iss.fail() || !iss.eof()) {
        throw ScalarParserException(DOUBLE, "impossible");
    }
    return d;
}