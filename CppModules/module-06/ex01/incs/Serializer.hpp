#ifndef INTRA_UUID_2DDF59B0_C18E_4BBD_AF0A_1C3E61E36935_6056671_GEHOVHAN_SERIALIZER_HPP
#define INTRA_UUID_2DDF59B0_C18E_4BBD_AF0A_1C3E61E36935_6056671_GEHOVHAN_SERIALIZER_HPP

#include <cstdint>
#include <iostream>
#include "../incs/Data.hpp"

class Serializer
{
private:
    Serializer();
    ~Serializer();
    Serializer(const Serializer&);
    Serializer& operator =(const Serializer&);

public:
    static uintptr_t serialize(Data* ptr);
    static Data* deserialize(uintptr_t raw);
};

#endif
