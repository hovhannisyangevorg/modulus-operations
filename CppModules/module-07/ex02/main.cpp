#include "Array.hpp"
#include " Array.tpp"

const int MAX_VAL = 10;

int main() {
    std::cout << "\033[32m[TEST INFO]: \033[0m Construction with no parameter: Creates an empty array ";
    Array<int> bucket;
    std::cout << "\033[32m(Successful)" << std::endl;


    std::cout << "\033[32m[TEST INFO]: \033[0m Non-const version of operator [] if Index out of range ";
    bool ifpass = false;
    try {
        bucket[1] = 10;
    } catch (std::out_of_range& e){
        ifpass = true;
    }
    if (!ifpass)
        std::cout << "\033[31m(Failed)" << std::endl;
    else
        std::cout << "\033[32m(Successful)" << std::endl;


    std::cout << "\033[32m[TEST INFO]: \033[0m Creates an array of n elements initialized by default ";
    Array<int> bucket1(MAX_VAL);
    ifpass = false;

    for (size_t i = 0; i < bucket1.size(); ++i) {
        if (bucket1[i] != 0){
            std::cout << "aaaaaaa"<< "\n";
            ifpass = true;
            break ;
        }
        bucket1[i] = 10;
    }
    if (!ifpass)
        std::cout << "\033[32m(Successful)" << std::endl;
    else
        std::cout << "\033[31m(Failed)" << std::endl;



    std::cout << "\033[32m[TEST INFO]: \033[0m Construction by copy and assignment operator ";
    Array<int> bucket2(bucket1);
    ifpass = false;

    for (size_t i = 0; i < bucket2.size(); ++i) {
        if (bucket2[i] != 10){
            ifpass = true;
            break ;
        }
        bucket2[i] = 20;
    }
    if (!ifpass)
        std::cout << "\033[32m(Successful)" << std::endl;
    else
        std::cout << "\033[31m(Failed)" << std::endl;



    std::cout << "\033[32m[TEST INFO]: \033[0m Assignment operator ";
    Array<int> bucket3;
    ifpass = false;

    bucket3 = bucket2;
    for (size_t i = 0; i < bucket2.size(); ++i) {
        if (bucket3[i] != 20) {
            ifpass = true;
            break ;
        }
    }

    if (!ifpass)
        std::cout << "\033[32m(Successful)" << std::endl;
    else
        std::cout << "\033[31m(Failed)" << std::endl;



    std::cout << "\033[32m[TEST INFO]: \033[0m All tests \033[32m(Successful)" << std::endl;
    return 0;
}

std::cout << "\033[32m[TEST INFO]: \033[0m Construction with no parameter: Creates an empty array ";