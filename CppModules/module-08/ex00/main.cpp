#include <vector>
#include "easyfind.tpp"
#include "easyfind.hpp"

int main() {
    std::vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);

    bool flag = true;

    // Test case 1: Finding an existing element in a vector
    std::cout << "\033[32m[TEST INFO]: \033[0m Finding an existing element in a vector ";
    try {
        std::vector<int>::const_iterator it = easyfind(vec, 1);
        if (*it == 3) {
            flag = false;
        }
        if (!flag) {
            std::cout << "\033[32m(Test case 1 passed!)\033[0m" << std::endl;
        } else {
            std::cerr << "\033[31m(Test case 1 failed)\033[0m" << std::endl;
        }
    } catch (const ElementNotFoundException& e) {
        std::cerr << "\033[31m(Test case 1 failed)\033[0m" << std::endl;
    }
}

/**
#include <iostream>
#include <vector>
#include <algorithm>  // For std::find
#include <cassert>
#include "easyfind.tpp"
#include "easyfind.hpp"
#include "list"

int main() {
    std::vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);

    std::cout << "\033[32m[TEST INFO]: \033[0m Finding an existing element in a vector ";
    try {
        std::vector<int>::const_iterator it = easyfind(vec, 3);
        assert(*it == 3);
        std::cout << "\033[32m(Test case 1 passed!)" << std::endl;
    } catch (const ElementNotFoundException& e) {
        std::cerr << "\033[31m(Test case 1 failed)" << std::endl;
    }
}


int main() {
    std::vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);

    std::cout << "\033[32m[TEST INFO]: \033[0m Trying to find a non-existing element in a vector ";
    try {
        easyfind(vec, 100);
        std::cerr << "\033[31m(Test case 2 failed)" << std::endl;
    } catch (const ElementNotFoundException& e) {
        std::cout << "\033[32m(Test case 2 passed!)" << std::endl;
    }
}

int main() {
    std::list<int> lst;
    lst.push_back(10);
    lst.push_back(20);
    lst.push_back(30);
    lst.push_back(40);

    std::cout << "\033[32m[TEST INFO]: \033[0m Finding an existing element in a list ";
    try {
        std::list<int>::const_iterator it = easyfind(lst, 20);
        assert(*it == 20);
        std::cout << "\033[32m(Test case 3 passed!)" << std::endl;
    } catch (const ElementNotFoundException& e) {
        std::cerr << "\033[31m(Test case 3 failed)" << std::endl;
    }
}

int main() {
    std::list<int> lst;

    lst.push_back(41);
    lst.push_back(42);
    lst.push_back(43);
    lst.push_back(44);
    lst.push_back(44);

    std::cout << "\033[32m[TEST INFO]: \033[0m Trying to find a non-existing element in a list ";
    try {
        easyfind(lst, 100);
        std::cerr << "\033[31m(Test case 4 failed!)" << std::endl;
    } catch (const ElementNotFoundException& e) {
        std::cout << "\033[32m(Test case 4 passed!)" << std::endl;
    }
}
*/