#include "../incs/ScalarConverter.hpp"
#include "../incs/ScalaValidator.hpp"
#include "../incs/ScalarParser.hpp"
#include "../incs/ScalarIterator.hpp"

// Constructors
ScalarConverter::ScalarConverter() {}
ScalarConverter::ScalarConverter(const ScalarConverter&) {}
ScalarConverter::~ScalarConverter() {}

// Operators
ScalarConverter& ScalarConverter::operator=(const ScalarConverter&) { return *this; }

const char* ScalarConverter::ScalarConverterException::what() const throw () {
    return "ScalarConverterException: Invalid argument entered.";
}

void ScalarConverter::convert(const std::string& literal) {
    ScalaValidator v(literal);
    ScalarParser p(&v);

    try {
        v.validate();

        int type = v.getVariable().GetType();
        ScalarIterator iterator;

        while (!p.isSuccessful()) {
            try {
                p.Parse(static_cast<t_type>(type));
                break;
            }
            catch (ScalarParser::ScalarParserException& e) {
                if (!(iterator.HasNext())) {
                    break;
                }
                type = iterator.Next((t_type)type);
            }
        }
    } catch (const std::runtime_error& e) {
        throw ScalarConverter::ScalarConverterException();
    }
}
