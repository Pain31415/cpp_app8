#include <iostream>

namespace myNamespace {
    void swapValues(int* pointer1, int* pointer2) {
        int temp = *pointer1;
        *pointer1 = *pointer2;
        *pointer2 = temp;
    }
}

int main() {
    using namespace std;

    int variable1 = 5;
    int variable2 = 10;

    cout << "Initial values:\n";
    cout << "Variable 1 = " << variable1 << ", Variable 2 = " << variable2 << endl;

    myNamespace::swapValues(&variable1, &variable2);

    cout << "Values after swapping:\n";
    cout << "Variable 1 = " << variable1 << ", Variable 2 = " << variable2 << endl;

    return 0;
}