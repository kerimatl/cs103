class Kullanici {
private:
    string sifre; // GİZLİ! Dışarıdan erişilemez.

public:
    string isim;  // AÇIK! Herkes erişebilir.

    // Şifreyi değiştirmek için bir "kapı" (Setter) bırakıyoruz
    void sifreBelirle(string yeniSifre) {
        if (yeniSifre.length() > 5) { // Şifre 5 haneden uzunsa kabul et
            sifre = yeniSifre;
        } else {
            cout << "Sifre cok kisa!" << endl;
        }
    }
};

int main() {
    Kullanici k1;
    
    k1.isim = "Ahmet";    // ✅ SORUN YOK: Public olduğu için değiştirebilirim.
    
    // k1.sifre = "1234"; // ❌ HATA! Private olduğu için kırmızı çizgi çeker.
                          // "Sen buna dokunamazsın" der.

    k1.sifreBelirle("gucluSifre123"); // ✅ DOĞRUSU: Fonksiyon üzerinden değiştirdim.
    
    return 0;
}