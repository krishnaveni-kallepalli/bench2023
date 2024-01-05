#include<iostream>
using namespace std;
class Singleton
{
	private:
	Singleton()
	{
		cout << "Constructor\n";
	}
	
	private:
	static Singleton *ptr;
	public:
	static Singleton* fun()
	{
		ptr = new Singleton();
		return ptr;
	}
	public:
	~Singleton(){}
	Singleton(const Singleton &obj) = delete;
	void func()
	{
	cout << "public Function \n";
	}
};
Singleton* Singleton :: ptr = nullptr; 
int main()
{
	Singleton* s = Singleton :: fun();
	Singleton* s1 = Singleton :: fun();

	s->func();
	s1->func();
	
	if(s == s1) cout << "same\n";
	else cout << "Diff\n";
}
