#include <iostream>
#include <string>
#include <vector>

//struct Chanector {
//    int x;
//    int y;
//    std::string name;
//
//    Chanector() : x(0), y(0), name("") {}
//    Chanector(std::string _name) : x(0), y(0), name(_name) {}
//
//    void move(int _x, int _y) {
//        x = _x;
//        y = _y;
//    }
//
//    void printPosition() const {
//        std::cout << name << " is at (" << x << ", " << y << ")" << std::endl;
//    }
//
//};
//
//class Command {
//    public:
//        virtual ~Command() {} // Properly define the virtual destructor
//        virtual void execute(Chanector &c) = 0;
//        virtual void undo(Chanector &c) = 0;
//};
//
//class Move : public Command {
//    public:
//        void execute(Chanector &c);
//        void undo(Chanector &c);
//};
//
//void Move::execute(Chanector &c) {
//    std::cout << c.name << " moved" << std::endl;
//}
//
//void Move::undo(Chanector &c) {
//    std::cout << c.name << " undo move" << std::endl;
//}

//int main() {
//    Chanector mike("Mike");
//    std::vector<Command*> command_queue;
//
//    // Create commands
//    Command* move1 = new Move(10, 20);
//    Command* move2 = new Move(30, 40);
//
//    // Add commands to queue
//    command_queue.push_back(move1);
//    command_queue.push_back(move2);
//
//    // Execute commands
//    for (std::vector<Command*>::iterator it = command_queue.begin(); it != command_queue.end(); ++it) {
//        (*it)->execute(mike);
//    }
//
//    // Undo commands
//    for (std::vector<Command*>::reverse_iterator it = command_queue.rbegin(); it != command_queue.rend(); ++it) {
//        (*it)->undo(mike);
//    }
//
//    // Clean up
//    for (std::vector<Command*>::iterator it = command_queue.begin(); it != command_queue.end(); ++it) {
//        delete *it;
//    }
//    std::vector<int> vec;
//
//    vec.push_back(10);
//    vec.push_back(10);
//    vec.push_back(10);
//    vec.push_back(10);
//    vec.push_back(10);
//    std::cout << "Initial capacity: " << vec.capacity() << std::endl;
//
//    return 0;
//}

//int main()
//{
//    std::vector<int> vec(5,5);
//
//    std::cout << vec[0] << std::endl;
//    std::cout << vec[1] << std::endl;
//    std::cout << vec[2] << std::endl;
//    std::cout << vec[3] << std::endl;
//    std::cout << vec[4] << std::endl;
//
//    std::cout << "size=" << vec.size() << std::endl;
//    std::cout << "capacity=" << vec.capacity() << std::endl;
//    return 0;
//}


#include <iostream>


//class MyClass {
//    public:
//        short y;
//    protected:
//        int c;
//};

//class YourClass : public My, public Me {
//    protected:
//        int c;
//};
//
//class My : public MyClass {
//    private:
//        int x;
//    public:
//        My(int _x) : x(_x){
//            this->x = _x;
//            this->c = _x;
//        };
//
//        void PrintX() {
//            std::cout << "My" << this->x << std::endl;
//            std::cout << "My" << this->x << std::endl;
//        };
//};

//class Me : public MyClass {
//    private:
//        int x;
//    public:
//        Me(int _x) : x(_x){
//            this->x = _x;
//            this->c = _x;
//        };
//
//        void PrintX() {
//            std::cout << "Me"<< this->c << std::endl;
//            std::cout << "Me" << this->x << std::endl;
//        };
//};

// c++ -std=c++98 -Wall -Wextra -Werror main.cpp
//class Complex {
//    private:
//        int a;
//        int b;
//    public:
//        Complex(int _a = 0, int _b = 0) : a(_a), b(_b) {}
//        Complex(const Complex & c) : a(c.a), b(c.b) { std::cout << "Copy constructor called" << std::endl; }
//
//        Complex operator+ (const Complex &c) const {
//            return Complex(this->a + c.a, this->b + c.b);
//        };
//
//        void PrintAll() const {
//            std::cout << "a=" << a << std::endl << "b=" << b << std::endl;
//        }
//};
//
//int main() {
//    const Complex c(1, 1);
//    const Complex c1(1, 1);
//
//    Complex res = c + c1;
//    res.PrintAll();
//
//    return 0;
//}








///////



///////
////////////////////



class Command {
    public:
       virtual void exec() = 0;
};

class Ligth {
    public:
        void On() {std::cout << "Light is On";};
        void Off() {std::cout << "Light is Off";};

};