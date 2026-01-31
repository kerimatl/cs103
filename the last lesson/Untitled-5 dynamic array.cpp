#include <iostream>
#include <cmath> // Üs alma işlemi (pow) için kütüphane

using namespace std;

// ADIM (b): f(x) fonksiyonunu main dışında tanımlıyoruz
// x^5 + 3x^2 + 1 işlemini yapar.
int f(int x) {
    // x^5 hesaplamak için x'i 5 kere çarparız veya pow(x, 5) kullanırız.
    // pow fonksiyonu double döndürdüğü için sınavda elle çarpmak bazen daha güvenlidir.
    // Formül: (x*x*x*x*x) + (3*x*x) + 1
    
    int sonuc = (x*x*x*x*x) + (3*x*x) + 1;
    return sonuc;
}

int main() {
    // ADIM (a): Dinamik bellek tahsisi (Dynamic Allocation)
    // "new int" diyerek işletim sisteminden yer istiyoruz.
    // Bu yerin adresini tutmak için bir pointer (p) kullanıyoruz.
    int* p = new int;

    cout << "Lutfen bir tamsayi giriniz: ";
    
    // Kullanıcıdan alınan değeri pointer'ın gösterdiği ADRESE yazıyoruz.
    // Başına * koymamızın sebebi: "Adrese değil, kutunun İÇİNE yaz" demek.
    cin >> *p;

    // ADIM (c): Fonksiyonu çağırma
    // Fonksiyona pointer'ın kendisini (p) değil, içindeki değeri (*p) gönderiyoruz.
    int a = f(*p);
    
    cout << "f(x) sonucu: " << a << endl;

    // ADIM (d): Belleği temizleme (Deallocation)
    // new ile açtığımız yeri işimiz bitince delete ile geri vermeliyiz.
    delete p;

    return 0;
}