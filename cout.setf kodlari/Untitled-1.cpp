#include <iostream>
using namespace std;
int main() {
    double price=5.99999999999;
   cout.setf(ios::fixed);//Ondalıklı sayıları sabit biçimde (ör: 3.50) göstermek için kullanılır.
   cout.setf(ios::showpoint);//Ondalıklı sayılarda her zaman ondalık noktasını ve ondalık basamakları göstermek için kullanılır.
   cout.precision(3);//Ondalıklı sayılarda gösterilecek ondalık basamak sayısını belirler.
    cout<<"the price is $"<<price<<endl;
    return 0;
}