#include <iostream>
using namespace std;

class ObjectInit{
public:
    int data;

   // ObjectInit(int val) : data(val) {}
   ObjectInit(int val)
   {
   		data = val;
   }

    //ObjectInit(const ObjectInit& other) : data(other.data) {}
    ObjectInit(const ObjectInit& other)
    {
    	data = other.data;
    	data  = other.data +3;
    	data = data+3;	
    }
};

int main() {

    ObjectInit obj1(27);

    ObjectInit obj2 = obj1;
    
    cout << "Original Object: " << obj1.data << endl;
    cout << "Copied Object: " << obj2.data+3 << endl;

    return 0;
}
