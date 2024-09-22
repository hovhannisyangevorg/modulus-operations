#ifndef SCALARCONVERTER_H
#define SCALARCONVERTER_H

#include <iostream>

class ScalarConverter
{
private:
    ScalarConverter();
    ~ScalarConverter();
    ScalarConverter(const ScalarConverter&);
    ScalarConverter& operator=(const ScalarConverter&);

public:
    class ScalarConverterException : public std::exception {
    public:
        virtual const char* what() const throw ();
    };

    static void convert(const std::string& literal);
};


#endif
