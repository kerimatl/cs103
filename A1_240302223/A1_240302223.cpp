#include  <iostream>
using namespace std;

int main() {
    int sayi;
        cout << "Enter total length in centimeters: ";
        cin >> sayi;
    cout << "You entered: " << sayi/100 << " meter and " << sayi%100 << " centimeters." << endl;


    return 0;
}