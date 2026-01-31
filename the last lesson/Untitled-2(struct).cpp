#include <iostream>
using namespace std;

struct car{//declare a struct named car 
    string brand;
    string model;
    int year;







};



int main(){



    car MyCar;//create an object of car struct named MyCar
    MyCar.brand = "Toyota";//assign values to the members of MyCar
    MyCar.model = "Corolla";
    MyCar.year = 2020;
    cout << MyCar.brand << " " << MyCar.model << " " << MyCar.year << endl;//print the values of MyCar members

    car YourCar;//create another object of car struct named YourCar
    YourCar.brand = "Honda";//assign values to the members of YourCar
    YourCar.model = "Civic";
    YourCar.year = 2019;
    cout << YourCar.brand << " " << YourCar.model << " " << YourCar.year << endl;//print the values of YourCar members

    //or
    car HisCar = {"Ford", "Mustang", 2021};//create and initialize an object of car struct named HisCar
    cout << HisCar.brand << " " << HisCar.model << " " << HisCar.year << endl;//print the values of HisCar members
    


    return 0;
}