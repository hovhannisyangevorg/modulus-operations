#include <iostream>


class Hello {
    private:
        int a;
        int b;
        int c;
    public:
        Hello(){};
        Hello(int a){
            this->a = a;
        };
        Hello(int a, int b){
            this->a = a;
            this->b = b;
        };
        Hello(int a, int b, int c){
            this->a = a;
            this->b = b;
            this->c = c;
        };
};

//class Typee {
//
//};

int main() {
    Hello Hel;
    Hello();
    Hello(10);
    Hello(10,20);
    Hello(10,20,30);
}
