#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

int main() {
    try {
        Bureaucrat b("John", 151);
        std::cout << b << std::endl;

        b.incrementGrade();
        std::cout << b << std::endl;

        b.decrementGrade();
        std::cout << b << std::endl;

        // This will throw an exception
        Bureaucrat b2("Jane", 151);
    } catch (const std::exception &e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    return 0;
}