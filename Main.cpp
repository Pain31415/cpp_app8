#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	srand(static_cast<unsigned int>(time(0)));
	int x = rand() % 100;
	int y = rand() % 100;
	cout << "Generated numbers: " << x << " and " << y << endl;
	int* ptrA = &x;
	int* ptrB = &y;
	if (*ptrA > *ptrB) {
		cout << "The largest number: " << *ptrA << endl;
	}
	else {
		cout << "The largest number: " << *ptrB << endl;
	}
	return 0;
}