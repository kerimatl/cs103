#include <iostream>
using namespace std;
int main(){
    //write a program that reads 5 integers, applies selection sort,and prints the array in descending
    const int SIZE = 5;
    int arr[SIZE];
    cout << "Enter 5 integers: ";
    for (int i = 0; i < SIZE; i++) {
        cin >> arr[i];
    }   
    // Selection sort in descending order
    for (int i = 0; i < SIZE - 1; i++) {
        int maxIndex = i;
        for (int j = i + 1; j < SIZE; j++) {
            if (arr[j] > arr[maxIndex]) {
                maxIndex = j;
            }
        }
        // Swap the found maximum element with the first element
        if (maxIndex != i) {
            int temp = arr[i];
            arr[i] = arr[maxIndex];
            arr[maxIndex] = temp;
        }
    }
    cout << "Sorted array in descending order: ";
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;


    
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
    return 0;
}