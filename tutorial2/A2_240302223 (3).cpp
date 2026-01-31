#include <iostream>
using namespace std;
int main() {
//temperature conversion with display menu
    int choice;
    cout << "Sicaklik donusumu yapmak istediginiz birimi secin:" << endl;
    cout << "1. Fahrenheit'tan Celsius'a" << endl;
    cout << "2. Celsius'tan Fahrenheit'a" << endl;
    cout << "exit icin 0 girin" << endl;
    cout << "Seciminiz: ";
    cin >> choice;
    if (choice == 1) {
        double fahrenheit;
        cout << "Fahrenheit sicaklik degerini girin: ";
        cin >> fahrenheit;
        double celsius = (fahrenheit - 32.0) * 5.0 / 9.0;
        cout << "Celsius sicaklik degeri: " << celsius << " C" << endl;
    } else if (choice == 2) {
    double celsius;
    cout << "Celsius sicaklik degerini girin: ";
    cin >> celsius;
    double fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
    cout << "Fahrenheit sicaklik degeri: " << fahrenheit << " F" << endl;
    } else if (choice == 0) {
        cout << "Cikis yapiliyor..." << endl;
    } else {
        cout << "Gecersiz secim!" << endl;
    }









    return 0;
    }