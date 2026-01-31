#include <iostream>


using namespace std;
int main() {
//program that compares two pozza sizes to determine the best buy based on cost per square inch


//diameter of small pizza(int)
    int diameter_small;
    cout<<"enter diameter of small pizza(in inches): ";
    cin>>diameter_small;
    //cost of small pizza(double)
    double cost_small;
    cout<<"enter cost of small pizza(in dollars): ";
    cin>>cost_small;
    //diameter of large pizza(int)
    int diameter_large;
    cout<<"enter diameter of large pizza(in inches): ";
    cin>>diameter_large;
    //cost of large pizza(double)
    double cost_large;
    cout<<"enter cost of large pizza(in dollars): ";
    cin>>cost_large;
    //outputs 1)price per square inch for both pizzas 2)which pizza is the better buy
    const double PI=3.14159;
    double radius_small=diameter_small/2.0;
    double area_small=PI*radius_small*radius_small;
    double price_per_square_inch_small=cost_small/area_small;
    double radius_large=diameter_large/2.0;
    double area_large=PI*radius_large*radius_large;
    double price_per_square_inch_large=cost_large/area_large;
    cout<<"price per square inch of small pizza: $"<<price_per_square_inch_small<<endl;
    cout<<"price per square inch of large pizza: $"<<price_per_square_inch_large<<endl;
    if(price_per_square_inch_small<price_per_square_inch_large){
        cout<<"small pizza is the better buy."<<endl;
    }
    else if(price_per_square_inch_large<price_per_square_inch_small){
        cout<<"large pizza is the better buy."<<endl;
    }
    else{
        cout<<"both pizzas are the same price per square inch."<<endl;
    }













    return 0;
}