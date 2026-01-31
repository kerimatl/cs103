#include <iostream>
using namespace std;
void changeSign(int &a, int &b){
        a=a * -1;
        b=b * -1;
    }
int main(){

//Write a void function that multiplies two integers by –1 using call by reference (changes both signs).


    int x,y;
    cout<<"enter 2 integers:";
    cin>>x>>y;
    cout<<"before changing signs,x= "<<x<<" y= "<<y<<endl;
    //call by reference function to change signs
    
    changeSign(x,y);
    cout<<"after changing signs,x= "<<x<<" y= "<<y<<endl;









    return 0;
}