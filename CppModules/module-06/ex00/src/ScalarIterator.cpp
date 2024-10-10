#include "../incs/ScalarIterator.hpp"


// Default Constructor
ScalarIterator::ScalarIterator() : _size(5) {
    this->_all_types[0] = INT;
    this->_all_types[1] = DOUBLE;
    this->_all_types[2] = FLOAT;
    this->_all_types[3] = UNKNOWN;
    this->_all_types[4] = CHAR;

    for (int i = 0; i < this->_size; ++i) {
        this->visited[i] = false;
    }
}

// Destructor
ScalarIterator::~ScalarIterator() {}

// Copy Constructor
ScalarIterator::ScalarIterator(const ScalarIterator& other) : _size(other._size) {
    for (int i = 0; i < this->_size; ++i) {
        _all_types[i] = other._all_types[i];
        visited[i] = other.visited[i];
    }
}

// Copy Assignment Operator
ScalarIterator& ScalarIterator::operator=(const ScalarIterator& other) {
    if (this != &other) {  // Check for self-assignment
        for (int i = 0; i < _size; ++i) {
            _all_types[i] = other._all_types[i];
            visited[i] = other.visited[i];
        }
    }
    return *this;
}

bool ScalarIterator::HasNext() {
    for (int i = 0; i < _size; ++i) {
        if (!visited[i]) {
            return true;
        }
    }
    return false;
}

t_type ScalarIterator::Next(t_type type) {
    for (int i = 0; i < this->_size; ++i) {
        if (_all_types[i] == type && !visited[i]) {
            visited[i] = true;
        }
    }
    for (int i = 0; i < _size; ++i) {
        if (_all_types[i] != type && !visited[i])
            return  _all_types[i];
    }
    return UNKNOWN;
}