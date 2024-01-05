#include<iostream>
using namespace std;
class Singleton
{
	static Singleton *instance;
	int data;
	Singleton()
	{
		cout << "Constructor\n";
	}

	public:
	~Singleton()
	{
		cout << "Delete constructor\n";
	}
	static Singleton* getInstance() 
	{
		if(instance==NULL)
		instance = new Singleton;
		return instance;
	}
	void setData(int data)
	{
		this->data = data;
	}
	int getData()
	{
		return this->data = data;
	}
};

Singleton *Singleton::instance = 0;

int main()
{
	Singleton *s = s->getInstance();
	cout << s->getData() << endl;
	s->setData(10); 
	cout << s->getData() << endl;

	delete s;

	return 0;
}
