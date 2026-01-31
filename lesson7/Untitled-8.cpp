#include <iostream>
using namespace std;

// 1. Fonksiyon Bildirimleri (Prototypes)
void fillUp(int a[], int size); 
void printArray(int a[], int size);

int main() {
    const int size = 5; // Dizi boyutu sabit
    int score[size];    // Diziyi oluştur

    // 2. Fonksiyon Çağrısı: Doldurma
    fillUp(score, size);

    // 3. Fonksiyon Çağrısı: Yazdırma
    // Kodunu mantıklı hale getirdik: Main içinde tekrar döngü yazmak yerine
    // aşağıda tanımladığımız printArray fonksiyonunu çağırdık.
    printArray(score, size);

    return 0;
}

// 4. fillUp Fonksiyonu Tanımı
// Kullanıcıdan verileri alır
void fillUp(int a[], int size) {
    cout << "Lutfen " << size << " adet not giriniz:" << endl;
    
    for (int i = 0; i < size; i++) {
        cout << (i + 1) << ". notu giriniz: ";
        cin >> a[i];
    }
} 
// fillUp fonksiyonu burada bitti (süslü parantez kapandı).

// 5. printArray Fonksiyonu Tanımı
// Diziyi ekrana yazdırır
void printArray(int a[], int size) {
    cout << "\n--- Grades of Students ---" << endl; // Başlığı döngüden çıkardık (tekrar etmesin diye)
    
    for(int i = 0; i < size; i++) {
        cout << "Ogrenci " << (i + 1) << ": " << a[i] << endl;
    }
}