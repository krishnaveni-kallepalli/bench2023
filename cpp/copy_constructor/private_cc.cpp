#include <iostream>
using namespace std;

class Singleton {
	private:
	int data;
	Singleton(int val) : data(val) {}
	public:
	static Singleton& getInstance(int val) {
	static Singleton instance(val);
	return instance;}

	int getData() const {
	return data;}

private:
Singleton(const Singleton& other) {
 cout << "Private copy constructor to prevent copying\n";
}
};

int main() 
{
	Singleton& obj1 = Singleton::getInstance(10);

	cout << "obj1.getData(): " << obj1.getData() << endl;
	return 0;
}
