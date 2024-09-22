#ifndef SCALARPRINTER_HPP
#define SCALARPRINTER_HPP

#include <iostream>
#include "../incs/ScalaValidator.hpp"
#include "../incs/ScalarParser.hpp"

class ScalarPrinter {
private:
    const ScalaValidator* validator;
    const std::string Character;
    const std::string Integer;
    const std::string Float;
    const std::string Double;
public:
    ScalarPrinter();
    ~ScalarPrinter();
    ScalarPrinter(const ScalaValidator* va);
    ScalarPrinter(const class ScalarParser& p);
    ScalarPrinter& operator=(const ScalarPrinter& );
    const ScalaValidator* GetValidator() const ;


    void PrintChar(char literal);
    void PrintInt(int literal);
    void PrintFloat(float literal);
    void PrintDouble(double literal);
    void PrintUnknown(void);

    std::string GetCharacter() const;
    std::string GetInteger() const;
    std::string GetFloat() const;
    std::string GetDouble() const;
};

#endif
