#include <iostream>
#include <random>

#include "../incs/Base.hpp"

/**
 * @brief Entry point of the program.
 *
 * Generates and identifies instances of derived classes from the Base class
 * three times, demonstrating dynamic polymorphism and proper memory management.
 *
 * @return int Returns 0 on successful execution.
 */
int main() {
    std::srand(static_cast<unsigned int>(std::time(NULL)));
    {
        Base *ptr;
        ptr = generate();
        identify(ptr);
        identify(*ptr);
        std::cout << std::endl;
        delete ptr;
    }
    {
        Base *ptr;
        ptr = generate();
        identify(ptr);
        identify(*ptr);
        std::cout << std::endl;
        delete ptr;
    }
    {
        Base *ptr;
        ptr = generate();
        identify(ptr);
        identify(*ptr);
        delete ptr;
    }
    return 0;
}



/**
 *
 * This code test identify function.
*/
//int main() {
//    Base* basePtrA = new A();
//    Base* basePtrB = new B();
//    Base* basePtrC = new C();
//
//    identify(basePtrA);
//    identify(basePtrB);
//    identify(basePtrC);
//
//    delete basePtrA;
//    delete basePtrB;
//    delete basePtrC;
//}

/**
 * This code Test generate function behavior.
 *
 * Generate random instances of A, B, or C and test the identify function behavior
 */
//int main() {
//    for (int i = 0; i < 5; ++i) {
//        Base* randomObject = generate();
//        identify(randomObject);
//        delete randomObject;
//    }
//    return 0;
//}


/**
 * This code Test generate function behavior.
 *
 * Generate random instances of A, B, or C and test the identify function behavior (by reference)
 */
//int main() {
//    for (int i = 0; i < 5; ++i) {
//        Base* randomObject = generate();
//        Base& objRef = *randomObject;
//
//        identify(objRef);
//        delete randomObject;
//    }
//    return 0;
//}