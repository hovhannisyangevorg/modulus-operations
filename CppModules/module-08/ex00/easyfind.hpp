#ifndef MODULE_08_EASYFIND_HPP
#define MODULE_08_EASYFIND_HPP

#include <iostream>

class ElementNotFoundException : public std::runtime_error {
public:
    explicit ElementNotFoundException(const std::string& message) : std::runtime_error(message) {}
};

#endif //MODULE_08_EASYFIND_HPP
