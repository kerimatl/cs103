#include <iostream>
using namespace std;


int remainderBy3(int number) {
    return number % 3;
}


void changeSign(int &x, int &y) {
    x = x * -1;
    y = y * -1;
}


int power(int base, int exponent) {
    int result = 1;
    for (int i = 1; i <= exponent; i++) {
        result = result * base;
    }
    return result;
}

int main() {

   
    int num;
    cout << "Enter a number ";
    cin >> num;

    int rem = remainderBy3(num);
    cout << "The remainder is " << rem << endl;


   
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;

    cout << "Before x = " << a << " y = " << b << endl;
    changeSign(a, b);
    cout << "After: x = " << a << " y = " << b << endl;


   
    int base, exp;
    cout << "Enter base and exponent ";
    cin >> base >> exp;

    int result = power(base, exp);
    cout << "The result " << result << endl;

    return 0;
}
