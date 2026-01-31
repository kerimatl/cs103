#include <iostream>
using namespace std;

int main() {
   //sum of digits until single digit
    int number;
    cout << "Bir sayi girin: ";
    cin >> number;
    int sum = 0;
    while (number > 0 || sum > 9) {
        if (number == 0) {
            number = sum;
            sum = 0;
        }
        sum += number % 10;
        number /= 10;
    }
    cout << "final number is " << sum << endl;

    return 0;
}