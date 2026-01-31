#include <iostream>
#include <string>
#include <cstdlib> // rand() ve srand() fonksiyonları için
#include <ctime>   // time() fonksiyonu için (rastgele sayıları zamana bağlamak için)

using namespace std;

class Player {
private:
    // 1. İstenen Private Değişkenler
    string name;
    int healthPoints;

public:
    // 2. Constructor (Yapıcı Fonksiyon)
    // Sınıf yaratıldığı anda çalışır, değişkenleri ilk değerlerine eşitler.
    Player(string n, int hp) {
        name = n;
        healthPoints = hp;
    }

    // 3. Mutator (Setter) Fonksiyonlar
    // Private değişkenleri dışarıdan değiştirmek için kapı görevi görür.
    void setName(string n) {
        name = n;
    }

    void setHealthPoints(int hp) {
        healthPoints = hp;
    }

    // 4. Accessor (Getter) Fonksiyonlar
    // Private değişkenlerin değerini dışarıya okumak için kullanılır.
    string getName() {
        return name;
    }

    int getHealthPoints() {
        return healthPoints;
    }

    // 5. Attack Fonksiyonu
    void attack() {
        // 0 ile 10 arasında rastgele sayı üretmek için:
        // rand() % 11 yaparız. (Kalan her zaman 0..10 arasında olur)
        int damage = rand() % 11; 

        cout << "Saldiri yapildi! Hasar miktari: " << damage << endl;

        // Sorudaki kontrol: Can hasardan büyük mü?
        if (healthPoints > damage) {
            healthPoints = healthPoints - damage;
            cout << "Can azaldi. Guncel Can: " << healthPoints << endl;
        } 
        else {
            // Can yetersizse sıfıra eşitle ve Game Over yaz
            healthPoints = 0;
            cout << "Guncel Can: 0" << endl;
            cout << "Game Over" << endl;
        }
        cout << "-----------------------" << endl;
    }
};

int main() {
    // Rastgele sayı üretimini her çalıştırışta farklı yapmak için zamana bağlıyoruz.
    // Bunu yazmazsan program her seferinde aynı "rastgele" sayıları üretir.
    srand(time(0));

    // Constructor kullanarak oyuncuyu oluşturuyoruz ("Hero", 25 can)
    Player p1("Hero", 25);

    cout << "Oyuncu Adi: " << p1.getName() << endl;
    cout << "Baslangic Cani: " << p1.getHealthPoints() << endl;
    cout << "-----------------------" << endl;

    // Oyunu test etmek için arka arkaya saldırı yapıyoruz
    // Game Over yazısını görene kadar birkaç kez çağırabiliriz
    p1.attack();
    p1.attack();
    p1.attack();
    p1.attack();

    return 0;
}