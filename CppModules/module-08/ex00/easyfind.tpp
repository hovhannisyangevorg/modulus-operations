#ifndef MODULE_08_EASYFIND_TPP
#define MODULE_08_EASYFIND_TPP

#include "easyfind.hpp"

template <typename T>
typename T::const_iterator easyfind(T& container, const int value) {
    typename T::const_iterator it = std::find(container.begin(), container.end(), value);

    if (it == container.end())
        throw ElementNotFoundException("Element not found");
    return it;
}

#endif //MODULE_08_EASYFIND_TPP
