#include<iostream>
using namespace std;
class Simple
{
  int data1;
    int data2;
    int data3;

 public:
        Simple(int a, int b=9, int c=8)
        {
            data1 = a;
            data2 = b;
            data3 = c;
        }

        void printData();

};

void Simple :: printData()
{
    cout<<"The value of data1: "<< data1 << endl;
    cout<<"The value of data2: "<< data2 << endl;
    cout<<"The value of data3: "<< data3 << endl;
}

int main(){
    Simple s(12,223);
    s.printData();
    return 0;
}

