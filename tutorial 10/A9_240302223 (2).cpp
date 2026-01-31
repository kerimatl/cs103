#include <iostream>
using namespace std;
int main() {
   
    //write a program that declares two integer variables and two pointers.
    //make each pointer point to a different variable, print both values, then make both pointers point to the same variable and print the values again.
    int var1 = 10;
    int var2 = 20;
    int* ptr1 = &var1;
    int* ptr2 = &var2;
    cout << "Initial values:" << endl;
    cout << "Pointer 1 points to value: " << *ptr1 << endl;
    cout << "Pointer 2 points to value: " << *ptr2 << endl;
    ptr2 = ptr1; //ikisinide ayni degere isaret etmesini sagladik
    cout << "After making both pointers point to the same variable:" << endl;
    cout << "Pointer 1 points to value: " << *ptr1 << endl;
    cout << "Pointer 2 points to value: " << *ptr2 << endl;
























    return 0;
}