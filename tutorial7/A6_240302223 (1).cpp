#include <iostream>
using namespace std;
int main(){
//write a program that reads 4 integers into an array and prints the difference between the first and second elements and the difference between the third and fourth elements.
    int arr[4];
    cout << "Enter 4 integers: ";
    for(int i = 0; i < 4; i++){
        cin >> arr[i];
    }
    if(arr[0] > arr[1]){
         int diff1 = arr[0] - arr[1];
         cout << "Difference between first and second elements: " << diff1 << endl;
        
    }
    else if(arr[0] < arr[1]){
         int diff1 = arr[1] - arr[0];
         cout << "Difference between first and second elements: " << diff1 << endl;
        
    }
    else{cout << "The first and second elements are equal." <<0<< endl;
    }
    
    
    
    









return 0;
}