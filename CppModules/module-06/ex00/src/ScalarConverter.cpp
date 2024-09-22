#include "../incs/ScalarConverter.hpp"
#include "../incs/ScalaValidator.hpp"
#include "ScalarParser.hpp"
#include <../incs/ScalarParser.hpp>

// Constructors
ScalarConverter::ScalarConverter() {}
ScalarConverter::ScalarConverter(const ScalarConverter&) {}
ScalarConverter::~ScalarConverter() {}

// Operators
ScalarConverter& ScalarConverter::operator=(const ScalarConverter&) { return *this; }

const char* ScalarConverter::ScalarConverterException::what() const throw () {
    return "ScalarConverterException: Invalid argument entered.";
}


// iterator design pattern
class Iterator
{
    t_type _selected;
    t_type _all_types[5];
    bool  visited[5];
    const int _size;
public:
    Iterator(t_type type) : _selected(type), _size(5) {
        _all_types[0] = INT;
        _all_types[1] = DOUBLE;
        _all_types[2] = FLOAT;
        _all_types[3] = UNKNOWN;
        _all_types[4] = CHAR;
        visited[0] = false;
        visited[1] = false;
        visited[2] = false;
        visited[3] = false;
        visited[4] = false;

    }

    bool hasNext() {
        for (int i = 0; i < _size; ++i) {
            if (!visited[i]) {
                return true;
            }
        }
        return false;
    }

    t_type next(t_type type) {
        for (int i = 0; i < this->_size; ++i) {
            if (_all_types[i] == type && !visited[i]) {
                visited[i] = true;
            }
        }
        for (int i = 0; i < _size; ++i) {
            if (_all_types[i] != type && !visited[i])
                return  _all_types[i];
        }
        return UNKNOWN;
    }
};

void ScalarConverter::convert(const std::string& literal) {
    ScalaValidator v(literal);
    ScalarParser p(&v);

    try {
        v.validate();

        int type = v.getVariable().GetType();
        Iterator iterator((t_type)type);

        while (!p.isSuccessful()) {
            try {
                p.Parse(static_cast<t_type>(type));
                break;
            }
            catch (ScalarParser::ScalarParserException& e) {
                if (!iterator.hasNext())
                    break;
                type = iterator.next((t_type)type);
            }
        }
    } catch (const std::runtime_error& e) {
        throw ScalarConverter::ScalarConverterException();
    }
}
