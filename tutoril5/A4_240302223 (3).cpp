#include <iostream>





using namespace std;
int main() {

//write a char getGrade(int score) function that returns letter grade based on the numeric score
    int score;
    cout<<"please enter your score ";
    cin>>score;
    char grade;
    if(score>=90){
        grade='A';
    }
    else if(score>=80){
        grade='B';
    }
    else if(score>=70){
        grade='C';
    }
    else if(score>=60){
        grade='D';
    }
    else{
        grade='F';
    }


    cout<<"Your grade is "<<grade<<endl;
    





    return 0;
}