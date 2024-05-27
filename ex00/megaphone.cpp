#include <string>
#include <iostream>
#include <map>


class Megaphone {
private:
    int argc;
    const char **argv;
    std::map<int, std::string> inputMap;
    typedef std::map<int, std::string>::iterator iterator;

public:
    Megaphone(int argc, const char **argv) : argc(argc), argv(argv) {}
    void convertr();
    void toUpperCase();
    void printUppercase() const;
};

void Megaphone::convertr() {
    for (int i = 0; i < argc; ++i) {
        inputMap[i] = std::string(argv[i]);
    }
}

void Megaphone::toUpperCase() {
    for (iterator it = inputMap.begin(); it != inputMap.end(); ++it)
    {
        for (std::string::size_type i = 0; i < it->second.size(); ++i) {

            it->second[i] = std::toupper(it->second[i]);
        }
    }
}

void Megaphone::printUppercase() const {

    for (std::map<int, std::string>::const_iterator it = inputMap.begin(); it != inputMap.end(); ++it) {
        std::cout << it->second;
        if (it != --inputMap.end()) {
            std::cout << " ";
        }
    }
    std::cout << std::endl;
}

int main(int argc, const char** argv)
{
    if (argc == 1) {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return -1;
    }
    Megaphone *info = new Megaphone(--argc, ++argv);
    
    info->convertr();
    info->toUpperCase();
    info->printUppercase();
    return (0);
}
