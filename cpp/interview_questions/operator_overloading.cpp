#include <iostream>
#include <string>
using namespace std;
class Person {
private:
    string name;

public:
    Person(const string &n) : name(n) {}

    // Overloading the + operator to concatenate names
    Person operator+(const Person &other) const {
        return Person(name + other.name);
    }

    // Display the name
    void display() const {
        cout << name << endl;
    }
};

int main() {
    // Creating two Person objects
    Person john("John");
    Person smith("Smith");

    // Overloaded + operator concatenates names
    Person johnSmith = john + smith;

    // Display the concatenated name
    cout << "Concatenated Name: ";
    johnSmith.display();
    
    return 0;
}
