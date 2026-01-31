#include <iostream>
using namespace std;

// 1. Fonksiyon Bildirimleri (Prototypes)
// Görseldeki 4. ve 6. satırlarda "int" kelimesi unutulmuştu, onları ekledim.
void insertValues(double a[], int size);
double sumArray(double a[], int size);

int main() {
    const int size = 4; // Dizi boyutu
    double num[size];   // Kesirli sayı dizisi oluşturuluyor

    // 2. Değerleri Al
    // insertValues fonksiyonunu çağırarak diziyi dolduruyoruz.
    insertValues(num, size);

    // 3. Toplamı Hesapla
    // sumArray fonksiyonu toplamı hesaplayıp bize 'a' değişkeni olarak geri döndürüyor.
    double a = sumArray(num, size); 
    cout << "Summation of the array elements: " << a << endl;

    // 4. Ortalamayı Hesapla
    // Toplamı (a), eleman sayısına (size) bölüyoruz.
    double avg = a / size;
    
    // Görselde yarım kalan satırı tamamladım:
    cout << "Average of the array elements: " << avg << endl;

    return 0;
}

// --- Fonksiyon Tanımları (Definitions) ---

// Kullanıcıdan sayıları alan fonksiyon
void insertValues(double a[], int size) {
    cout << "Lutfen " << size << " adet ondalikli sayi giriniz:" << endl;
    for (int i = 0; i < size; i++) {
        cout << (i + 1) << ". sayi: ";
        cin >> a[i];
    }
}

// Dizideki sayıları toplayan ve sonucu döndüren fonksiyon
double sumArray(double a[], int size) {
    double total = 0; // Toplamı tutacak değişken
    for (int i = 0; i < size; i++) {
        total += a[i]; // Her elemanı total'e ekle
    }
    return total; // Sonucu main fonksiyonuna geri gönder
}