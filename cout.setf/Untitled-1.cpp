// main.cpp
// Bu dosyayı bir C++ derleyicisi ile derleyip çalıştırabilirsiniz.
// Örneğin: g++ main.cpp -o program && ./program

#include <iostream> // cout ve endl gibi temel giriş/çıkış fonksiyonları için gerekli kütüphane
#include <iomanip>  // setprecision, fixed gibi gelişmiş biçimlendirme araçları için modern kütüphane

// using namespace std; // Bu satır, std::cout yerine sadece cout yazmamızı sağlar. Küçük örneklerde kullanışlıdır.

int main() {
    //------------------------------------------------------------------------------------
    // ADIM 1: TEMEL DEĞİŞKEN VE VARSAYILAN ÇIKTI
    //------------------------------------------------------------------------------------
    
    // Yüksek hassasiyetli bir ondalıklı sayı (double) tanımlıyoruz.
    double price = 5.99999999999;
    double another_price = 12345.6;
    double simple_price = 7.0;

    std::cout << "----------- VARSAYILAN DURUM (HİÇBİR AYAR OLMADAN) -----------" << std::endl;
    std::cout << "price degiskeninin normal ciktisi: " << price << std::endl;
    std::cout << "another_price degiskeninin normal ciktisi: " << another_price << std::endl;
    std::cout << "simple_price degiskeninin normal ciktisi: " << simple_price << std::endl;
    std::cout << "Goruldugu gibi, C++ sayinin buyuklugune ve degerine gore varsayilan bir gosterim secer." << std::endl;
    std::cout << std::endl;


    //------------------------------------------------------------------------------------
    // ADIM 2: cout.setf(ios::fixed) ANALİZİ
    //------------------------------------------------------------------------------------
    
    std::cout << "----------- SADECE ios::fixed KULLANINCA -----------" << std::endl;
    
    // cout.setf(), "cout" nesnesinin biçimlendirme bayraklarını (flags) ayarlamak için kullanılır.
    // ios::fixed bayrağı, cout'a "Bundan sonra ondalıklı sayıları bilimsel (e.g., 1.23e+04) formatta DEĞİL,
    // her zaman sabit noktalı (e.g., 12345.6) formatta göster." talimatını verir.
    std::cout.setf(std::ios::fixed);
    
    std::cout << "ios::fixed sonrasi 'price': " << price << std::endl;
    std::cout << "ios::fixed sonrasi 'another_price': " << another_price << std::endl; // Bilimsel gösterimden kurtuldu
    std::cout << std::endl;


    //------------------------------------------------------------------------------------
    // ADIM 3: cout.precision(3) ANALİZİ
    //------------------------------------------------------------------------------------

    std::cout << "----------- ios::fixed ETKİNKEN precision(3) KULLANINCA -----------" << std::endl;
    
    // precision(), gösterilecek ondalık basamak sayısını belirler.
    // ÖNEMLİ NOT: precision() fonksiyonunun davranışı, ios::fixed'in aktif olup olmamasına göre değişir.
    // - EĞER ios::fixed aktif DEĞİLSE: toplamda gösterilecek anlamlı basamak sayısını belirler.
    // - EĞER ios::fixed aktif İSE: VİRGÜLDEN SONRA gösterilecek basamak sayısını belirler.
    // Sizin kodunuzda ios::fixed aktif olduğu için bu komut "virgülden sonra 3 basamak göster" anlamına gelir.
    std::cout.precision(3);
    
    // price (5.99999...) değeri, virgülden sonra 3 basamağa yuvarlanır ve 6.000 olur.
    std::cout << "precision(3) sonrasi 'price' (yuvarlandi): " << price << std::endl; 
    std::cout << "precision(3) sonrasi 'another_price': " << another_price << std::endl;
    std::cout << "precision(3) sonrasi 'simple_price': " << simple_price << std::endl;
    std::cout << std::endl;


    //------------------------------------------------------------------------------------
    // ADIM 4: cout.setf(ios::showpoint) ANALİZİ
    //------------------------------------------------------------------------------------
    
    std::cout << "----------- ios::showpoint KULLANINCA -----------" << std::endl;

    // ios::showpoint bayrağı, cout'a "Ondalık kısmı sıfır bile olsa, noktayı ve precision() ile
    // belirlediğin basamak sayısı kadar sıfırı mutlaka göster." talimatını verir.
    // Örneğin normalde 7.0 değeri "7" olarak gösterilebilirken, bu ayar ile "7.000" olarak gösterilmesi garantilenir.
    // Not: ios::fixed zaten çoğu zaman bu davranışı sergiler, ancak showpoint bunu garanti altına alır.
    std::cout.setf(std::ios::showpoint);

    std::cout << "showpoint sonrasi 'simple_price': " << simple_price << std::endl;
    std::cout << std::endl;


    //------------------------------------------------------------------------------------
    // SONUÇ: SİZİN KODUNUZUN BİRLEŞTİRİLMİŞ HALİ VE ÇIKTISI
    //------------------------------------------------------------------------------------

    std::cout << "----------- TÜM AYARLAR BİR ARADA (SİZİN KODUNUZ) -----------" << std::endl;
    double final_price = 5.99999999999;

    std::cout.setf(std::ios::fixed);      // 1. Kural: Sabit noktalı gösterim kullan.
    std::cout.setf(std::ios::showpoint);  // 2. Kural: Ondalık noktasını her zaman göster.
    std::cout.precision(3);               // 3. Kural: Virgülden sonra 3 basamak göster (çünkü fixed aktif).

    // Bu kurallar birleştiğinde, 5.99999... sayısı 3 basamağa yuvarlanır ve 6.000 olarak yazdırılır.
    std::cout << "the price is $" << final_price << std::endl;
    std::cout << std::endl;


    //------------------------------------------------------------------------------------
    // EK BİLGİ: MODERN VE TAVSİYE EDİLEN YÖNTEM (<iomanip>)
    //------------------------------------------------------------------------------------
    std::cout << "----------- MODERN YONTEM (std::fixed ve std::setprecision) -----------" << std::endl;
    
    // cout.setf() kalıcı bir ayar yapar. Kodu daha sonra okumak zorlaşabilir.
    // Modern C++'da <iomanip> kütüphanesindeki araçlar kullanılır. Bunlar sadece kullanıldığı satırı etkiler.
    // Bu yöntem daha temiz ve tavsiye edilendir.
    std::cout << "Modern yontem ile cikti: $" 
              << std::fixed // ios::fixed ile aynı işi yapar
              << std::setprecision(3) // cout.precision(3) ile aynı işi yapar
              << final_price 
              << std::endl;
              
    return 0;
}