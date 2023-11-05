#include <iostream>

using namespace std;

int main()
{
	int number;
	cout << "Enter a number: ";
	cin >> number;

	int* ptr = &number;

    if (*ptr > 0) {
        cout << "Number " << *ptr << " is positive." << endl;
    }
    else if (*ptr < 0) {
        cout << "Number " << *ptr << " is negative." << endl;
    }
    else {
        cout << "Number " << *ptr << " is zero." << endl;
    }
    return 0;
}