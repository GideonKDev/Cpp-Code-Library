#include <iostream>
using namespace std;

int arr[10];

void reader() {
    for (int i = 0; i < 10; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> arr[i];
    }
}

void display() {
    for (int j = 0; j < 10; j++) {
        cout << arr[j];
        if (j < 9) cout << ", ";
    }
    cout << endl;
}

void sortArray() {
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    reader();

    cout << "\nUnsorted array: ";
    display();

    sortArray();

    cout << "Sorted array:   ";
    display();

    return 0;
}
