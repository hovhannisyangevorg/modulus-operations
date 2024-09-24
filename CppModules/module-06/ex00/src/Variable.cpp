#include "../incs/Variable.hpp"

Variable::Variable() : literal(""), type(UNKNOWN) {}
Variable::~Variable() {}

Variable::Variable(const std::string& l) {
    this->literal = l;
    this->type = UNKNOWN;
}

Variable::Variable(const Variable& t) : literal(t.literal), type(t.type) {}

Variable& Variable::operator=(Variable& t) {
    if (this != &t) {
        this->literal = t.literal;
        this->type = t.type;
    }
    return *this;
}

void Variable::SetType(t_type t) {
    this->type = t;
}

t_type Variable::GetType() const{
    return this->type;
}

const std::string& Variable::GetLiteral() const {
    return  this->literal;
}

void Variable::FindType() {
    size_t i = 0;
    const size_t minFloatSize = 3;
    const size_t minDoubleSize = 2;

//    if (literal.length() == 1) {
//        this->SetType(CHAR);
//        return ;
//    }

    if (literal == "inf" || literal == "+inf" || literal == "-inf" || literal == "nan") {
        this->SetType(DOUBLE);
        return ;
    }
    else if (literal == "inff" || literal == "+inff" || literal == "-inff" || literal == "nanf") {
        this->SetType(FLOAT);
        return ;
    }
    while (i < literal.length() && std::isspace(static_cast<unsigned char>(literal[i]))) {
        ++i;
    }

    if ((literal[i] == '+' || literal[i] == '-') && (literal.length() != 1)) {
        ++i;
    }

    std::string remaining = literal.substr(i);
    if (isdigit(remaining[0]) && (remaining.find(".", 0) != std::string::npos) && (remaining.find("f", 0) != std::string::npos) && remaining.length() > minFloatSize) {
        this->SetType(FLOAT);
    }
    else if (isdigit(remaining[0]) && (remaining.find(".", 0) != std::string::npos) && remaining.length() > minDoubleSize) {
        this->SetType(DOUBLE);
    }
    else if ((isdigit(remaining[0]) && (remaining.find(".", 0) == std::string::npos) && (remaining.find("f", 0) == std::string::npos))) {
        this->SetType(INT);
    }
    else if (remaining.length() == 1) {
        this->SetType(CHAR);
    }
    else {
        this->SetType(UNKNOWN);
    }
}