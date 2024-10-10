#ifndef INTRA_UUID_51C67B7A_AEA1_47D5_A907_1EC700B504DB_6090179_GEHOVHAN_ITER_HPP
#define INTRA_UUID_51C67B7A_AEA1_47D5_A907_1EC700B504DB_6090179_GEHOVHAN_ITER_HPP

#include <cstdio>
#include <iostream>

template <typename T, typename F>
void iter(T* array, size_t length, F func) {
    for (size_t i = 0; i < length; ++i) {
        func(array[i]);
    }
}

template <typename T>
void printElement(const T& element) {
    std::cout << element << " ";
}


void insertZero(int& element) {
    element = 0;
}


#endif //INTRA_UUID_51C67B7A_AEA1_47D5_A907_1EC700B504DB_6090179_GEHOVHAN_ITER_HPP
