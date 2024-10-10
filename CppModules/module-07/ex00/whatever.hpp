#ifndef INTRA_UUID_51C67B7A_AEA1_47D5_A907_1EC700B504DB_6090179_GEHOVHAN_WHATEVER_HPP
#define INTRA_UUID_51C67B7A_AEA1_47D5_A907_1EC700B504DB_6090179_GEHOVHAN_WHATEVER_HPP

template <typename T>
void swap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

template <typename T>
T const& min(T const& a, T const& b) {
    return (a < b ? a : b);
}

template <typename T>
T const& max(T const& a, T const& b) {
    return (a > b ? a : b);
}

#endif //INTRA_UUID_51C67B7A_AEA1_47D5_A907_1EC700B504DB_6090179_GEHOVHAN_WHATEVER_HPP
