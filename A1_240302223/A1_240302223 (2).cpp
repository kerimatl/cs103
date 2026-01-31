#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Bir sayi girin: ";
    cin >> number;

   
    if (number > 0) {
        cout << "1'den " << number << "'e kadar olan sayilarin kareleri:" << endl;
        
        
        for (int i = 1; i <= number; i++) {
           
            int square = i * i;
            
           
            cout << i << " sayisinin karesi: " << square << endl;
        }
    } else {
        cout << "Lutfen 0'dan buyuk bir sayi girin." << endl;
    }

    return 0;
}