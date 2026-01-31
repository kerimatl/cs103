#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Bir sayi girin: ";
    cin >> number;

    // Kullanıcının girdiği sayının 0'dan büyük olduğunu kontrol edelim
    if (number > 0) {
        cout << "1'den " << number << "'e kadar olan sayilarin kareleri:" << endl;
        
        // 1'den başlayıp 'number'a kadar giden bir döngü oluşturuyoruz
        for (int i = 1; i <= number; i++) {
            // Her döngü adımında 'i' sayısının karesini hesapla
            int square = i * i;
            
            // Sonucu ekrana yazdır
            cout << i << " sayisinin karesi: " << square << endl;
        }
    } else {
        cout << "Lutfen 0'dan buyuk bir sayi girin." << endl;
    }

    return 0;
}