#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double* ptr1, * ptr2;
    ptr1 = new double;
    ptr2 = new double;
    cout << "введіть значення для першого покажчика: ";
    cin >> *ptr1;
    cout << "введіть значення для другого покажчика: ";
    cin >> *ptr2;
    *ptr1 *= 2;
    cout << "нове значення збільшеного першого покажчика: " << *ptr1 << endl;
    delete ptr1;    
    delete ptr2;

    return 0;
}