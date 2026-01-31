#include <iostream>
using namespace std;
int main() {
   //write a program that dynamically allocates one integer using a pointer, assigns the value 9, and print it
   //then add 3 to the value using the pointer and print it again
    int* ptr = new int; 
    *ptr = 9;
    cout << "Initial value: " << *ptr << endl;
    *ptr += 3;
    cout << "Value after adding 3: " << *ptr << endl;
    delete ptr;
    

















    return 0;
}