#include <iostream>
#include <ctime>

int main() {
    const int arraySize = 5;
    int sourceArray[arraySize];
    int destinationArray[arraySize];

    srand(static_cast<unsigned int>(time(0)));

    for (int i = 0; i < arraySize; ++i) {
        sourceArray[i] = rand() % 100;
    }

    int* sourcePtr = sourceArray;
    int* destinationPtr = destinationArray;

    for (int i = 0; i < arraySize; ++i) {
        *destinationPtr = *sourcePtr;
        sourcePtr++;
        destinationPtr++;
    }

    std::cout << "Source Array: ";
    for (int i = 0; i < arraySize; ++i) {
        std::cout << sourceArray[i] << " ";
    }

    std::cout << "\nCopied Array: ";
    for (int i = 0; i < arraySize; ++i) {
        std::cout << destinationArray[i] << " ";
    }
    return 0;
}