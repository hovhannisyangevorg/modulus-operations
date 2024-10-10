#include <iostream>

#include "../incs/Base.hpp"
#include "../incs/A.hpp"
#include "../incs/B.hpp"
#include "../incs/C.hpp"

/**
 * @brief Identifies the type of the object pointed to by p.
 *
 * This function checks the actual type of the object that p points to
 * and prints "A", "B", or "C" depending on the derived class.
 *
 * @param p Pointer to a Base object to identify.
 */
void identify(Base* p) {
    if (dynamic_cast<A*>(p)) {
        std::cout << "A" << std::endl;
    } else if (dynamic_cast<B*>(p)) {
        std::cout << "B" << std::endl;
    } else if (dynamic_cast<C*>(p)) {
        std::cout << "C" << std::endl;
    } else {
        std::cout << "Unknown type" << std::endl;
    }
}

/**
 * @brief Identifies and prints the type of the object referenced by p.
 *
 * This function checks the actual type of the object that p refers to
 * and prints "A", "B", or "C" depending on the derived class.
 * It uses dynamic casting to determine the type.
 *
 * @param p Reference to a Base object whose type is to be identified.
 */
void identify(Base& p) {
    if (dynamic_cast<A*>(&p)) {
        std::cout << "A" << std::endl;
    } else if (dynamic_cast<B*>(&p)) {
        std::cout << "B" << std::endl;
    } else if (dynamic_cast<C*>(&p)) {
        std::cout << "C" << std::endl;
    } else {
        std::cout << "Unknown type" << std::endl;
    }
}
