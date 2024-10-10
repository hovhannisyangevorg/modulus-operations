#include <iostream>
#include "iter.hpp"

int main() {
    size_t len = 10;
    size_t strLen = 3;
    int *arr = new int[len];
    std::string* strArray = new std::string[strLen];

    strArray[0] = "Hello";
    strArray[1] = "World";
    strArray[2] = "!";

    for (size_t i = 0; i < len; ++i) {
        arr[i] = i;
    }

    std::cout << "------------Test-1---------------" << std::endl;
    std::cout << "Original integer array: ";
    iter(arr, len, printElement<int>);
    std::cout << std::endl << "---------------------------------" << std::endl;


    std::cout << "------------Test-2---------------" << std::endl;
    std::cout << "Incrementing each element: ";
    iter(arr, len, insertZero);
    iter(arr, len, printElement<int>);
    std::cout << std::endl << "---------------------------------" << std::endl;


    std::cout << "------------Test-3---------------" << std::endl;
    std::cout << "String array: ";
    iter(strArray, strLen, printElement<std::string>);
    std::cout << std::endl << "---------------------------------" << std::endl;
}
