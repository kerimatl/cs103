#include <iostream>
using namespace std;
int main(){
int a,b,c,d,e;
//write a program that reads 5 integers into an array and prints gow many of them greater than 10

cout<<"enter 5 numbers"<<endl;
cin>>a>>b>>c>>d>>e;
int count=0;
if (a>10){
    count++;
}
if (b>10){
    count++;
}
if (c>10){
    count++;}
if (d>10){
    count++;
}
if (e>10){
    count++;}
cout<<"the count of numbers greater than 10 is "<<count<<endl;
return 0;










}