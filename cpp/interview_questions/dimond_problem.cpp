/*
 DIMOND PROBLEM 
 
 Eg:
*/

#include <iostream>
using namespace std;
class A
{
public:
    void show() 
    {
        cout << "Class A" << std::endl;
    }
};

class B : virtual public A 
{
public:
    // Class B can override or extend functionality
    void show() 
    {
        cout << "Class B" << std::endl;
    }
};

class C : virtual public A 
{
public:
    // Class C can override or extend functionality
    void show() 
    {
        cout << "Class C" << std::endl;
    }
};

class D : public B, public C 
{
    // No need to override show() in class D
};

int main() {
    D obj;
    obj.show(); // This will call the show method without ambiguity
    return 0;
}
/*
In this example, the virtual keyword is used in the inheritance of classes B and C from class A. This ensures that there is only one instance of the shared base class A in the hierarchy, and it helps resolve the ambiguity in the diamond problem.*/
