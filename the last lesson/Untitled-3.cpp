#include <iostream>
using namespace std;
struct Date{
    int month;
    int day;
    int year;








};
struct PersonInfo{
    string name;
    int age;
    Date birthday;//struct icinde baska bir struct kullanimi
};








int main(){
    PersonInfo person1;
    person1.name="Ali Veli";
    person1.age=30;
    person1.birthday.month=5;
    person1.birthday.day=15;
    person1.birthday.year=1994;

    cout<<"Name: "<<person1.name<<endl;
    cout<<"Age: "<<person1.age<<endl;
    cout<<"Birthday: "<<person1.birthday.month<<"/"<<person1.birthday.day<<"/"<<person1.birthday.year<<endl;








return 0;
}