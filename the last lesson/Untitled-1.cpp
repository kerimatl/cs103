#include <iostream>
using namespace std;

// ADIM 1: Struct Tanımlama (Tahtadaki sağ taraf)
// Bir "Quiz"in içinde neler olacağını bilgisayara öğretiyoruz.
struct Quiz {
    int studentID;  // Öğrenci Numarası
    int grade;      // Notu
};

int main() {
    // --- BÖLÜM 1: BASİT DİZİ (Tahtadaki sol taraf) ---
    // Sadece notları tutan basit bir dizi.
    int simpleArray[3];
    
    simpleArray[0] = 50;
    simpleArray[1] = 85;
    simpleArray[2] = 100;

    cout << "Basit Dizi Elemani (Index 1): " << simpleArray[1] << endl;
    cout << "--------------------------------------" << endl;

    // --- BÖLÜM 2: STRUCT DİZİSİ (Tahtadaki karmaşık çizim) ---
    // CS103 dersi için 10 kişilik bir quiz listesi oluşturuyoruz.
    // Her bir eleman hem ID hem de Not tutacak.
    Quiz cs103[10]; 

    // İlk öğrencinin (0. indeks) bilgilerini girelim
    cs103[0].studentID = 20251;
    cs103[0].grade = 90;

    // İkinci öğrencinin (1. indeks) bilgilerini girelim
    cs103[1].studentID = 20252;
    cs103[1].grade = 75;

    // Bu verileri ekrana yazdıralım
    cout << "Ders: CS103" << endl;
    cout << "Ogrenci ID: " << cs103[0].studentID << " | Notu: " << cs103[0].grade << endl;
    cout << "Ogrenci ID: " << cs103[1].studentID << " | Notu: " << cs103[1].grade << endl;

    return 0;
}