#include <iostream>
#include <ctime>

using namespace std;

int main() {
    const int arraySize = 5;
    int numbers[arraySize];

    srand(static_cast<unsigned int>(time(0)));

    int sum = 0;
    for (int i = 0; i < arraySize; ++i) {
        numbers[i] = rand() % 100;
        sum += numbers[i];
    }

    // Display the array elements
    cout << "Array elements: ";
    for (int i = 0; i < arraySize; ++i) {
        cout << numbers[i] << " ";
    }

    cout << "\nSum of array elements: " << sum << endl;

    return 0;
}