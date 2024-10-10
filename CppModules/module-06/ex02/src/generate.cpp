#include <iostream>
#include <random>

#include "../incs/Base.hpp"
#include "../incs/A.hpp"
#include "../incs/B.hpp"
#include "../incs/C.hpp"

/**
 * @brief Creates a random instance of A, B, or C.
 *
 * This function returns a pointer to a randomly instantiated object
 * of type A, B, or C, derived from the Base class.
 *
 * @return Base* Pointer to the newly created object.
 *
 * Note: The caller must delete the pointer to avoid memory leaks.
 */
Base * generate(void) {
    std::random_device rd;
    std::mt19937 gen(rd());

    std::uniform_int_distribution<> distr(1, 3);
    int randomValue = distr(gen);

    if (randomValue == 0)
        return new A();
    else if (randomValue == 1)
        return new B();
    else
        return new C();
};

