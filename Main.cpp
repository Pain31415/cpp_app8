#include <iostream>
#include <ctime>

using namespace std;

void reverseArray(int* array, int size) {
    int* start = array;
    int* end = array + size - 1;

    while (start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

void fillWithRandom(int* array, int size) {
    srand(static_cast<unsigned int>(time(0)));

    for (int i = 0; i < size; ++i) {
        array[i] = rand() % 100;
    }
}

int main() {
    const int arraySize = 5;
    int numbers[arraySize];

    fillWithRandom(numbers, arraySize);

    cout << "Original Array: ";
    for (int i = 0; i < arraySize; ++i) {
        cout << numbers[i] << " ";
    }

    reverseArray(numbers, arraySize);

    cout << "\nReversed Array: ";
    for (int i = 0; i < arraySize; ++i) {
        cout << numbers[i] << " ";
    }

    return 0;
}