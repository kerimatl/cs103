#include <string>
#include <cstring>
#include <iostream>
using namespace std;

int main(){

    //strings and arrays
    string fruits[4]{"Apple","Banana","Cherry","Date"};
    cout<<"Fruits in the array are: "<<endl;
    for(int i=0;i<4;i++){
        cout<<fruits[i]<<endl;
    }
//_=underscore demek ingilizcede


//an array type of strings
    string colors[3]{"Red","Green","Blue"};
    cout<<"Colors in the array are: "<<endl;
    for(int i=0;i<3;i++){
        cout<<colors[i]<<endl;
    }




    //with char arrays
    char myMessage[6]{'H','e','l','l','o','\0'};
    cout<<"Message is: "<<myMessage<<endl;




//there is two ways to initialize char arrays

 char ar[]="hello";//C-string initialization
 char ar2[]={'h','e','l','l','o','\0'};//char array initialization

 cout<<"ar: "<<ar<<endl;
    cout<<"ar2: "<<ar2<<endl;


    //using with strcpy
    char greeting[20];//char array with enough size
    strcpy(greeting,"Hello, World!");//copy string into char array
    cout<<"Greeting message: "<<greeting<<endl;


    cin.getline(greeting,20);//input string into char array//getline kullaniyoruz cunku bosluklu string alacaksak boyle yapmaliyiz
    cout<<"You entered: "<<greeting<<endl;

    





    return 0;
}