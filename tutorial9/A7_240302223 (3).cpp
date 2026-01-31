#include <iostream>
using namespace std;
int main (){
//write a program that reads a string and prints the first and last character of the string
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    if (!input.empty()) {
        cout << "First character: " << input.front() << endl;
        cout << "Last character: " << input.back() << endl;
    } else {
        cout << "The string is empty." << endl;
    }
    





    return 0;
}