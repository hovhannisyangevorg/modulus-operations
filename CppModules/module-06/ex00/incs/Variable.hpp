#ifndef VARIABLE_HPP
#define VARIABLE_HPP

#include <iostream>

typedef enum s_type {
    CHAR,
    INT,
    FLOAT,
    DOUBLE,
    UNKNOWN,
} t_type;

class Variable {
private:
    std::string literal;
    t_type      type;
public:
    Variable();
    ~Variable();
    Variable(const std::string& l);
    Variable(const Variable& t);
    Variable& operator=(Variable& t);

    t_type GetType() const;
    const std::string& GetLiteral() const;
    void SetType(t_type t);
    void FindType();
};
#endif //VARIABLE_HPP
