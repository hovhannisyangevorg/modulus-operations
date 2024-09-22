#include <../incs/ScalarConverter.hpp>
#include <string>
#include <iostream>

int main(const int argc, const char** argv) {
    std::string literal(argv[1]);

    if (argc != 2) {
        std::cout << "Error: Expected exactly one argument, but received " << (argc - 1) << std::endl;
        std::cout << "Usage: " << argv[0] << " <argument>" << std::endl;
        return 1;
    }

    try {
        ScalarConverter::convert(literal);
    }
    catch (const ScalarConverter::ScalarConverterException& e)
    {
        std::cerr << e.what() << std::endl;
        return 1;
    }
}
