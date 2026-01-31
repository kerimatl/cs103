#include <iostream>
#include <string>
using namespace std;

// 1. ADIM: Class (Kalıp) Tanımlama
class Araba {
    public:
        // Özellikler (Variables/Attributes) - Arabanın nesi var?
        string marka;
        string renk;
        int modelYili;

        // Davranışlar (Functions/Methods) - Araba ne yapabilir?
        void bilgileriGoster() {
            cout << "Araba Markasi: " << marka << endl;
            cout << "Rengi: " << renk << endl;
            cout << "Modeli: " << modelYili << endl;
            cout << "-----------------------" << endl;
        }

        void kornaCal() {
            cout << marka << " düt düt diye korna caldi!" << endl;
        }
};

int main() {
    // 2. ADIM: Object (Nesne) Oluşturma
    // Araba kalıbından "araba1" adında gerçek bir nesne üretiyoruz.
    Araba araba1; 
    
    // Nesnenin özelliklerini dolduruyoruz
    araba1.marka = "BMW";
    araba1.renk = "Siyah";
    araba1.modelYili = 2023;

    // Araba kalıbından "araba2" adında BAŞKA bir nesne daha üretiyoruz.
    Araba araba2;
    araba2.marka = "Fiat";
    araba2.renk = "Beyaz";
    araba2.modelYili = 2015;

    // 3. ADIM: Nesneleri Kullanma
    // Fonksiyonları çağırıyoruz
    cout << "--- 1. Araba Bilgileri ---" << endl;
    araba1.bilgileriGoster();
    araba1.kornaCal();

    cout << "\n--- 2. Araba Bilgileri ---" << endl;
    araba2.bilgileriGoster(); // Aynı fonksiyonu farklı verilerle çalıştırır

    return 0;
}