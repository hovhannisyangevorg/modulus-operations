#include <../incs/ScalarConverter.hpp>
#include "../incs/ScalarPrinter.hpp"
#include <string>
#include <iostream>

int main(const int argc, const char** argv) {

    if (argc != 2) {
        std::cout << "Usage: " << argv[0] << " <argument>" << std::endl;
        return 1;
    }
    std::string literal(argv[1]);
    try {
        ScalarConverter::convert(literal);
    }
    catch (const ScalarConverter::ScalarConverterException& e)
    {
        ScalarPrinter p;
        p.PrintUnknown();
        return 1;
    }
}