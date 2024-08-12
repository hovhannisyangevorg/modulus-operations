#include <iostream>

#include "Bureaucrat.hpp"
#include "Form.hpp"



int main() {
    {
        try
        {
            Bureaucrat A("A", 20);
            Bureaucrat B("B", 15);
            Bureaucrat C("C", 70);
            Bureaucrat D("D", 1);

            Form form1("TEST", false, 150, 50);
            Form form2("TEST2", false, 1, 10);

            form1.beSigned(A);
            A.signForm(form1);
            std::cout << form1 << std::endl;

            form2.beSigned(B);
            B.signForm(form2);
            std::cout << form2 << std::endl;

            form1.beSigned(C);
            C.signForm(form1);

            form1.beSigned(D);
            D.signForm(form1);
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << std::endl;
        }
    }
    return 0;
}