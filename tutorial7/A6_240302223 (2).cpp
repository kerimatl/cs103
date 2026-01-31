#include <iostream>
using namespace std;
int main(){

//write a program that reads 3 integers into an array and pronts the smallest of the three
int a,b,c;

cout<<"enter 3 numbers"<<endl;
cin>>a>>b>>c;

if (a<b&&a<c){

cout<<"the smallest number is"<<a<<endl;


}
else if (b<a&&b<c){

cout<<"the smallest number is"<<b<<endl;


}
else if (c<b&&c<a){

cout<<"the smallest number is"<<c<<endl;


}











    return 0;
}