#include <conio.h>
#include <fstream>

using namespace std;
void add_one(int &num) {//eger referans olarak gondermezsek fonksiyon icinde yapilan degisiklikler main fonksiyonuna yansimaz=&
    num += 1;
}//void fonksiyonlar deger dondurmezler tek seferlik islem icin kullanilirlar

int main(){
    int y(5);
    add_one(y);
    cout<<"y degeri: "<<y<<endl;
    return 0;





}




