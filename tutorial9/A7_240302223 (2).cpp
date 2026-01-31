#include <iostream>
using namespace std;
int main() {
    //write a program that reads 7 integers into a vector and finds the average value of the elemnents
    const int SIZE = 7;
    int numbers[SIZE];
    cout << "Enter 7 integers:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cin >> numbers[i];
    }
    int sum = 0;
    for (int i = 0; i < SIZE; i++) {
        sum += numbers[i];
    }
    double average = static_cast<double>(sum) / SIZE;
    cout << "Average value: " << average << endl;

    

















    return 0;
}