#include <iostream>
#include <ctime>

using namespace std;

void copyReverse(int* source, int* destination, int size) {
    int* sourcePtr = source + size - 1;
    int* destPtr = destination;

    for (int i = 0; i < size; ++i) {
        *destPtr = *sourcePtr;
        destPtr++;
        sourcePtr--;
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
    int sourceArray[arraySize];
    int destinationArray[arraySize];

    fillWithRandom(sourceArray, arraySize);

    cout << "Source Array: ";
    for (int i = 0; i < arraySize; ++i) {
        cout << sourceArray[i] << " ";
    }

    copyReverse(sourceArray, destinationArray, arraySize);

    cout << "\nCopied Array in Reverse: ";
    for (int i = 0; i < arraySize; ++i) {
        cout << destinationArray[i] << " ";
    }

    return 0;
}