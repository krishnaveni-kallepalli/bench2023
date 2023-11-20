#include<iostream>
using namespace std;


int main(){
    queue <int> q;
    q.push(1); // q -> {1}
    q.push(2); // q -> {1,2}
    q.push(3); // q -> {1,2,3}
    cout << q.front() << endl; 
    cout << q.back() << endl;
    q.pop(); // q -> {2,3}
    cout << q.front() << endl;
    return 0;
}
