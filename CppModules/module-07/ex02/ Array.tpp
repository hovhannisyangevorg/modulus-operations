#ifndef INTRA_UUID_51C67B7A_AEA1_47D5_A907_1EC700B504DB_6090179_GEHOVHAN_ARRAY_TPP
#define INTRA_UUID_51C67B7A_AEA1_47D5_A907_1EC700B504DB_6090179_GEHOVHAN_ARRAY_TPP

template <typename T>
Array<T>::Array() : elements(NULL), length(0) {}

template <typename T>
Array<T>::~Array() {
    delete[] this->elements;
    this->length = 0;
}

template <typename T>
Array<T>::Array(unsigned int n) : length(n) {
    if (n == 0)
        this->elements = NULL;
    else
        this->elements = new T[this->length]();
}

template <typename T>
Array<T>::Array(const Array<T>& a) : length(a.length) {
    if (this->length == 0) {
        this->elements = NULL;
    }
    else {
        this->elements = new T[this->length]();
        for (size_t i = 0; i < a.length; ++i) {
            this->elements[i] = a.elements[i];
        }
    }
}

template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& a) {
    if (this == &a)
        return *this;

    delete[] this->elements;
    this->length = a.length;
    if (this->length == 0) {
        this->elements = NULL;
        return *this;
    } else {
        this->elements = new T[this->length]();
        for (size_t i = 0; i < this->length; ++i)
            this->elements[i] = a.elements[i];
        return *this;
    }
}

template <typename T>
T& Array<T>::operator[] (const size_t index) {
    if (index >= this->length)
        throw std::out_of_range("Index out of range");
    return this->elements[index];
}

template <typename T>
const T& Array<T>::operator[] (const size_t index) const {
    if (index >= this->length)
        throw std::out_of_range("Index out of range");
    return this->elements[index];
}

template <typename T>
size_t Array<T>::size() const {
    return this->length;
}

#endif //INTRA_UUID_51C67B7A_AEA1_47D5_A907_1EC700B504DB_6090179_GEHOVHAN_ARRAY_TPP
