#include<iostream>
usinf namespace std;

class base 
{
  virtual void funct1(void);
  virtual void funct2(void);
};

b.vtable[0]= &base::funct1;
b.vtable[1]= &base::funct2;
int main()
{
/* Object construction */
base b;

/* C++ Compiler internally does this*/
b.vptr = address of b.vtable;

}
