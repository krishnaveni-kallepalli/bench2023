#include <iostream>

class Singleton {
private:
    Singleton() {}
    static Singleton* instance;

public:
    static Singleton* getInstance() {
        if (instance==nullptr) {
            instance = new Singleton();
        }
        return instance;
    }
    void showMessage() {
        std::cout << "Hello from Singleton!" << std::endl;
    }
};

Singleton* Singleton::instance = nullptr;

int main() {

    Singleton* obj1 = Singleton::getInstance();
    Singleton* obj2 = Singleton::getInstance();

    if (obj1 == obj2) {
        std::cout << "Both objects point to the same instance." << std::endl;
    } else {
        std::cout << "Error: Objects point to different instances." << std::endl;
    }

    // Using the singleton instance
    obj1->showMessage();

    // Deleting the instance (not necessary in most cases, just for demonstration)
    delete obj1;

    return 0;
}
