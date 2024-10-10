#include <iostream>
#include <stack>
#include <iterator>
#include <deque>
//
//template <typename T, typename Container = std::deque<T> >
//class MutantStack : public std::stack<T, Container> {
//public:
//    typedef typename Container::iterator iterator; // Define iterator type
//    typedef typename Container::const_iterator const_iterator; // Define const_iterator type
//
//    // Default constructor
//    MutantStack() {}
//
//    // Push element onto the stack
//    void push(const T& value) {
//        std::stack<T, Container>::push(value);
//    }
//
//    // Pop element from the stack
//    void pop() {
//        std::stack<T, Container>::pop();
//    }
//
//    // Get top element
//    T& top() {
//        return std::stack<T, Container>::top();
//    }
//
//    // Get size of the stack
//    std::size_t size() const {
//        return std::stack<T, Container>::size();
//    }
//
//    // Check if the stack is empty
//    bool empty() const {
//        return std::stack<T, Container>::empty();
//    }
//
//    // Begin iterator
//    iterator begin() {
//        return this->c.begin(); // Access underlying container
//    }
//
//    // End iterator
//    iterator end() {
//        return this->c.end(); // Access underlying container
//    }
//
//    // Const begin iterator
//    const_iterator begin() const {
//        return this->c.begin(); // Access underlying container
//    }
//
//    // Const end iterator
//    const_iterator end() const {
//        return this->c.end(); // Access underlying container
//    }
//};

#include <iostream>
#include <deque>
#include <vector>

// Template class Base
template<typename _Tp, typename _Sequence = std::deque<_Tp> >
class Base : public std::stack<_Tp, _Sequence> {
public:

    typedef typename std::stack<_Tp, _Sequence>::container_type::iterator iterator;
    typedef typename std::stack<_Tp, _Sequence>::container_type::const_iterator const_iterator;
    typedef typename std::stack<_Tp, _Sequence>::container_type::reverse_iterator reverse_iterator;
    typedef typename std::stack<_Tp, _Sequence>::container_type::const_reverse_iterator const_reverse_iterator;

    iterator begin() { return this->_Get_container.begin(); }

    iterator end() {
        return this->_Get_container.end();
    }

    const_iterator begin() const {
        return this->_Get_container.begin();
    }

    const_iterator end() const {
        return this->_Get_container.end();
    }

    reverse_iterator rbegin() {
        return this->_Get_container.rbegin();
    }

    reverse_iterator rend() {
        return this->_Get_container.rend();
    }

    const_reverse_iterator rbegin() const {
        return this->_Get_container.rbegin();
    }

    const_reverse_iterator rend() const {
        return this->_Get_container.rend();
    }
};

int main() {
    Base<int, std::vector<int> > b;
    b.push(10);
    b.push(10);
    b.push(10);
    b.push(10);

    for (Base<int>::iterator it = b.begin(); it != b.end(); ++it) {
        std::cout << *it << " ";
    }
    return 0;
}


//
//int main() {
////    MutantStack<int> l;
////    l.push(100);
////    MutantStack<int> mstack;
////    mstack.push(5);
////    mstack.push(17);
////    std::cout << mstack.top() << std::endl; // Output: 17
////    mstack.pop();
////    std::cout << mstack.size() << std::endl; // Output: 1
////    mstack.push(3);
////    mstack.push(5);
////    mstack.push(737);
////    mstack.push(0);
////
////    // Using iterators to print elements
////    MutantStack<int>::iterator it = mstack.begin();
////    MutantStack<int>::iterator ite = mstack.end();
////
////    while (it != ite) {
////        std::cout << *it << std::endl; // Output each element in the stack
////        ++it;
////    }
////
////    // Create a std::deque from the MutantStack
////    std::deque<int> temp(mstack.begin(), mstack.end());
////    // Now create the std::stack from that deque
////    std::stack<int, std::deque<int> > s(temp);
//
//    return 0;
//}
