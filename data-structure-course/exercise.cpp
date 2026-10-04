#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;
    int age;

    cout << "Name: ";
    cin >> name;

    cout << "Age: ";
    cin >> age;

    cout << "Hello " << name << endl;
    cout << "Age = " << age << endl;
}