#include <iostream>

using namespace std;

void addition(int* x, int* y) {
    cout << "Result of addition: " << *x + *y << endl;
}

void subtraction(int* x, int* y) {
    cout << "Result of subtraction: " << *x - *y << endl;
}

void multiplication(int* x, int* y) {
    cout << "Result of multiplication: " << *x * *y << endl;
}

void division(int* x, int* y) {
    if (*y != 0) {
        cout << "Result of division: " << *x / *y << endl;
    }
    else {
        cout << "Division by zero!" << endl;
    }
}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    addition(&a, &b);
    subtraction(&a, &b);
    multiplication(&a, &b);
    division(&a, &b);

    return 0;
}