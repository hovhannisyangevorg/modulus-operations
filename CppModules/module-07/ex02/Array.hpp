#ifndef INTRA_UUID_51C67B7A_AEA1_47D5_A907_1EC700B504DB_6090179_GEHOVHAN_ARRAY_HPP
#define INTRA_UUID_51C67B7A_AEA1_47D5_A907_1EC700B504DB_6090179_GEHOVHAN_ARRAY_HPP

#include <iostream>

template <typename T>
class Array {
    private:
        T*      elements;
        size_t  length;
    public:
        Array();
        ~Array();
        Array(unsigned int n);
        Array(const Array<T>& a);
        Array<T>& operator=(const Array<T>& a);
        T& operator[] (const size_t index);
        const T& operator[] (const size_t index) const;
        size_t size() const;
};

#endif //INTRA_UUID_51C67B7A_AEA1_47D5_A907_1EC700B504DB_6090179_GEHOVHAN_ARRAY_HPP
