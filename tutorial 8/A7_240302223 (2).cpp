#include <iostream>
using namespace std;
int main(){
    //write a program that reads 7 integers into an array and uses linear search to find the number 15
    //if found print its index otherwise print -1
    const int SIZE = 7;
    int arr[SIZE];
    cout << "Enter 7 integers: ";
    for (int i = 0; i < SIZE; i++) {
        cin >> arr[i];
    }
    int index = -1;
    for (int i = 0; i < SIZE; i++) {
        if (arr[i] == 15) {
            index = i;
            break;
        }
    }
    cout << "Index of 15: " << index << endl;
    
 
    
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
    return 0;
}