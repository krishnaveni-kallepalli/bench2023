#include<iostream>
using namespace std;
class sms
{
	private :
	static int *ptr;
	public:
	static int *p;
	static void dma()
	{
		p = new int;
		ptr = new int;
	}
	static int* get_p()
	{
		*p=20;
		return p;
	}
	static int* get_ptr()
	{
		*ptr = 30;
		return ptr;
	}
};
int *sms :: ptr = nullptr;
int *sms :: p = nullptr;
int main()
{
	sms s;
	s.dma();
	int x = *sms :: get_p();
	int y = *sms :: get_ptr();
	cout << x << endl; 
	cout << y << endl;
}
