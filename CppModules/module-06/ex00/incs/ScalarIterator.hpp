#ifndef INTRA_UUID_2DDF59B0_C18E_4BBD_AF0A_1C3E61E36935_6056671_GEHOVHAN_ITERATOR_HPP
#define INTRA_UUID_2DDF59B0_C18E_4BBD_AF0A_1C3E61E36935_6056671_GEHOVHAN_ITERATOR_HPP
#include "../incs/Variable.hpp"

class ScalarIterator
{
private:
    t_type  _all_types[5];
    bool    visited[5];
    const int _size;
public:
    ScalarIterator();
    ~ScalarIterator();
    ScalarIterator(const ScalarIterator& other);
    ScalarIterator& operator=(const ScalarIterator& other);

    bool HasNext();
    t_type Next(t_type type);
};

#endif // INTRA_UUID_2DDF59B0_C18E_4BBD_AF0A_1C3E61E36935_6056671_GEHOVHAN_ITERATOR_HPP
