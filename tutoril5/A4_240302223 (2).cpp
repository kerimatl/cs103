#include <iostream>
using namespace std;
int main() {

    //function bool isAdult(int age) that returns true if the age is 18 or older, false otherwise.
    int age;
    cout<<"please enter your age ";
    cin>>age;
    bool isAdult;
    isAdult = (age >= 18);
    if(isAdult){
        cout<<"You are an adult."<<endl;
    }
    else{
        cout<<"You are not an adult."<<endl;
    }





    return 0;

}