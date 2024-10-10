#ifndef INTRA_UUID_2DDF59B0_C18E_4BBD_AF0A_1C3E61E36935_6056671_GEHOVHAN_BASE_HPP
#define INTRA_UUID_2DDF59B0_C18E_4BBD_AF0A_1C3E61E36935_6056671_GEHOVHAN_BASE_HPP

class Base {
public:
    Base();
    virtual ~Base();
    Base& operator=(Base& b);
};

Base*   generate(void);
void    identify(Base* p);
void    identify(Base& p);

#endif //INTRA_UUID_2DDF59B0_C18E_4BBD_AF0A_1C3E61E36935_6056671_GEHOVHAN_BASE_HPP
