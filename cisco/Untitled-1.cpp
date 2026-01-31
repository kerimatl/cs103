#include <iostream>

using namespace std;

int main(void) {
    bool answer;
    int value;

    cout << "Enter a value: ";
    cin >> value;

    // İstenen ifade buraya yazılıyor:
    answer = (value >= 0 && value < 10) || 
             (value * 2 < 20 && value - 2 > -2) || 
             (value - 1 > 1 && value / 2 < 10) || 
             (value == 111);

    cout << (answer ? "THAT'S TRUE :)" : "THAT'S NOT TRUE :(") << endl;
    return 0;
}





/*cout satırındaki şu ifade kafanı karıştırmış olabilir: (answer ? "THAT'S TRUE :)" : "THAT'S NOT TRUE :(")

Buna Ternary Operator (Üçlü Operatör) denir. Tek satırlık bir if-else gibidir.

Soru: answer doğru mu?

? (Evetse): İlk tırnak içini yazdır.

; (Hayırsa): İkinci tırnak içini yazdır.
*/