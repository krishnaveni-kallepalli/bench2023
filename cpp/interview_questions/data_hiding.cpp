/* 
DATA HIDING - proctect the data 
Data Abstraction 
Data Encapsulation  


Eg :
*/

#include<iostream>  
using namespace std;  
class Results{  
        
    int num=25;  //by default private  -  cannot access outside class  --> Data Hiding 
    public:  
    int x=5;
 //   cin >> num ;
    
  //  cout << num << endl;// --> compiler unable to recognize definition of num
    void InData();  
    void OutData();  
        
};  
void Results :: InData()  
{  
    cout<< "Enter any Integer value" <<endl;   
    cin>>num;  
        
}  
void Results :: OutData()  
{  
    cout<< "The value is " << num <<endl;  
}  
     
int main(){  
    Results  obj;       
    obj.InData();  
    obj.OutData();   
    cout << "x:" << obj.x;
   // cout << "num:" << obj.num;
}
