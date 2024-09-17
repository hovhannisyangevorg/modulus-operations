//
// Created by gehovhan on 9/17/24.
//

#include "../incs/ScalarConverter.hpp"

// Constructors
ScalarConverter::ScalarConverter() {}
ScalarConverter::ScalarConverter(const ScalarConverter&) {}
ScalarConverter::~ScalarConverter() {}

// Operators
ScalarConverter& ScalarConverter::operator=(const ScalarConverter&) { return *this; }

const char* ScalarConverter::ScalarConverterException::what() const throw () {
    return "Exception: Invalid argument entered.";
}







//void convert(const std::string& literal) {
//
//}

//void convert(const std::string& literal) {
//
//}