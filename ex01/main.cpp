#include <iostream>

#include "Bureaucrat.hpp"
#include "Form.hpp"



int main() {
    {
        try {
            Bureaucrat Evelyn("Evelyn Hardcastle", 148);
            Bureaucrat Percival("Percival Thorne", 15);
            Bureaucrat Harriet("Harriet Wexley", 70);
            Bureaucrat Mortimer("Mortimer Finch", 1);

            Form form1("TEST", false, 150, 151);
            Form form2("TEST2", false, 30, 10);


            std::cout << "----------------------------------1----------------------------------" << std::endl;
            form1.beSigned(Evelyn);
            Evelyn.signForm(form1);
            std::cout << form1 << std::endl;

            std::cout << "----------------------------------2----------------------------------" << std::endl;
            form1.beSigned(Mortimer);
            Mortimer.signForm(form1);
            std::cout << form2 << std::endl;

            std::cout << "----------------------------------3----------------------------------" << std::endl;
            form1.beSigned(Harriet);
            Harriet.signForm(form1);
            std::cout << form2 << std::endl;

            std::cout << "----------------------------------4----------------------------------" << std::endl;
            form1.beSigned(Mortimer);
            Mortimer.signForm(form1);
            std::cout << form2 << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << std::endl;
        }
    }
    return 0;
}