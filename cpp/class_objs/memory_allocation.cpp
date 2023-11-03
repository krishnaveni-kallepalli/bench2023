#include<iostream>
using namespace std;
class shop
{
	int itemid[100];
	int itemprice[100];
	int counter;
	public:
	void initCounter()
	{
		counter =0;
	}
	void getprice();
	void setprice();
	void displayprice();
};
void shop :: getprice()
{
	cout << "Enter item ID no :" << counter << endl;
	cin >> itemid[counter];
	cout << "Enter item Price:";
	cin >> itemprice[counter];
	counter ++ ;
}
void shop :: setprice()
{
	cout << endl;
}
void shop :: displayprice()
{
	for(int i=0;i<counter;i++)
	{
		cout << "Price of item " << itemid[i] << " is" << itemprice[i] << endl; 
	}
}
int main()
{
	shop s;
	s.initCounter();
	s.getprice();
	s.getprice();
	s.getprice();
	s.displayprice();
	return 0;
}
