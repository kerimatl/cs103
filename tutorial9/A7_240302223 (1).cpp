#include <iostream>
using namespace std;
int main() {
    //write a program that reads 6 integers into a vector and replaces all negative numbers with 0
    const int SIZE = 6;
    int numbers[SIZE];
    cout << "Enter 6 integers:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cin >> numbers[i];
    }
    for (int i = 0; i < SIZE; i++) {
        if (numbers[i] < 0) {
            numbers[i] = 0;
        }
    }
    cout << "Modified integers:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;
    

















    return 0;
}