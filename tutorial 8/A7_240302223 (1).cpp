#include <iostream>
using namespace std;
int main(){
    
 //wrtite a program that reads a C-string (character array) and prints its length 
    const int MAX_SIZE = 100;
    char str[MAX_SIZE];
    cout << "Enter a C-string: ";
    cin.getline(str, MAX_SIZE);
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    cout << "Length of the C-string: " << length << endl;
    
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
    return 0;
}