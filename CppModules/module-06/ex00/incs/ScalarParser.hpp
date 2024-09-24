#ifndef SCALARPARSER_HPP
#define SCALARPARSER_HPP

#include "../incs/ScalaValidator.hpp"
#include "../incs/ScalarPrinter.hpp"

class ScalarPrinter;

class ScalarParser
{
private:
    const ScalaValidator* validator;
    bool isSuccess;
public:
    ScalarParser();
    ~ScalarParser();
    ScalarParser(const ScalarParser& s);
    ScalarParser(const ScalaValidator* variable);
    ScalarParser& operator=(const ScalarParser& p);

    class ScalarParserException : public std::exception {
    private:
        t_type type;
        const std::string message;
        mutable std::string formattedString;

    public:

        ~ScalarParserException() throw() {}

        ScalarParserException(t_type type, const std::string& message) : type(type), message(message), formattedString("") {}

        virtual const char* what() const throw();
    };

    const ScalaValidator* GetValidator() const;
    char    ScalarParserChar();
    int     ScalarParserInt();
    float   ScalarParserFloat();
    double  ScalarParserDouble();

    void    Parse(t_type type);

    bool  isSuccessful() const { return  isSuccess;}

};


#endif //SCALARPARSER_HPP
