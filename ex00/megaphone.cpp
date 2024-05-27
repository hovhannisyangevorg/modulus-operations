#include <string>
#include <iostream>
// #include <map>


// class Megaphone {
// private:
//     int argc;
//     const char **argv;
//     std::map<int, std::string> inputMap;
//     typedef std::map<int, std::string>::iterator iterator;

// public:
//     Megaphone(int argc, const char **argv) : argc(argc), argv(argv) {}
//     void convertr();
//     void toUpperCase();
//     void printUppercase() const;
// };

// void Megaphone::convertr() {
//     for (int i = 0; i < argc; ++i) {
//         inputMap[i] = std::string(argv[i]);
//     }
// }

// void Megaphone::toUpperCase() {
//     for (iterator it = inputMap.begin(); it != inputMap.end(); ++it)
//     {
//         for (std::string::size_type i = 0; i < it->second.size(); ++i) {

//             it->second[i] = std::toupper(it->second[i]);
//         }
//     }
// }

// void Megaphone::printUppercase() const {

//     for (std::map<int, std::string>::const_iterator it = inputMap.begin(); it != inputMap.end(); ++it) {
//         std::cout << it->second;
//         if (it != --inputMap.end()) {
//             std::cout << " ";
//         }
//     }
//     std::cout << std::endl;
// }

// int main(int argc, const char** argv)
// {
//     if (argc == 1) {
//         std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
//         return -1;
//     }
//     Megaphone *info = new Megaphone(--argc, ++argv);
    
//     info->convertr();
//     info->toUpperCase();
//     info->printUppercase();
//     return (0);
// }

class Megaphone {
private:
    int argc;
    const char **argv;
    std::string *inputArray;
public:
    Megaphone(int argc, const char **argv) : argc(argc), argv(argv), inputArray(NULL) {
        inputArray = new std::string[argc];
        for (int i = 0; i < argc; i++)
            inputArray[i] = argv[i];        
    }
    ~Megaphone() {
            delete[] inputArray;
    }
    void convertToUpperCase();
    void printUpperCase();
};

void Megaphone::convertToUpperCase() {
    for (int i = 0; i < argc; ++i) {
        std::string& str = inputArray[i];
        for (size_t j = 0; j < str.length(); ++j) {
            str[j] = std::toupper(str[j]);
        }
    }
}

void Megaphone::printUpperCase() {
    for (int i = 0; i < argc; i++) {
        std::cout << inputArray[i];
        if (i != argc - 1)
            std::cout << " ";
    }
    std::cout << std::endl;
}

int main(int argc, const char** argv) {
    if (argc == 1) {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return -1;
    }
    Megaphone info(--argc, ++argv);

    info.convertToUpperCase();
    info.printUpperCase();
}