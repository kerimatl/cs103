#include <iostream>
using namespace std;

int main() {
    int hours;

    // Kullanıcıya ne girmesi gerektiğini söyleyen bir mesaj ekledim.
    cout << "Lutfen saat sayisini girin: "; 
    
    // 1. Hata: cin icin ">>" operatoru kullanilir.
    cin >> hours;

    if (hours > 40) {
        // 2. Hata: cout icin "<<" operatoru kullanilir ve satir sonuna ";" eklenmelidir.
        cout << "40 saatin ustunde";
    } else {
        // 3. Hata: cout icin yine "<<" kullanilir ve satir sonuna ";" eklenmelidir.
        cout << "40 saat veya altinda"; 
    }
    
    // main fonksiyonunun basariyla bittigini belirtmek icin return 0 eklemek iyi bir yontemdir.
    return 0; 
} // 4. Hata: Fazla olan kapatma parantezleri kaldirildi.








#include <iostream>
using namespace std;
int main() {
    int hours;
    double rate,grosspay;
    cout<<"please enter hours ";
    cin>>hours;
    cout<<"please enter rate ";
    cin>>rate;
    if(hours>40){
        grosspay=40*rate+(hours-40)*rate*1.5;
    }
    else{
        grosspay=hours*rate;
    }

    cout<<"the gross pay is "<<grosspay<<endl;

  return 0;
}


   





#include <iostream>
using namespace std;    
int main() {

int maxtemp=80;//true
if (maxtemp ==80){//true



}
if((2<x)&&(x<10)){//true ve anlamina gelir 2 ile 10 arasinda demek
    cout<<"x is between 2 and 10"<<endl;

}
if(2<x<10){//false cunku 2<x ifadesi true yani 1 olur ve 1<10 ifadesi dogru olur


}


if(2<x || x<10){//true veya anlamina gelir 2den buyuk veya 10dan kucuk demek ama ikiside dogru olabilir
    


(!(x>10))//true degil anlamina gelir x 10dan buyuk degil demek


    return 0;
}




>=//greater than or equal to
<=//less than or equal to
==//equal to or equaivalent to
!=//not equal to




if(a%2==0){//a cift sayi demektir
    cout<<"a is even"<<endl;
}
else{
    cout<<"a is odd"<<endl;
}
  






#include <iostream>
using namespace std;
int main() {
    cout<<"Hello "<<endl;
   
   cout<<"hello";
   cout<<"hello\n"<<endl;


   
   
   
   
    return 0;
}


    #include <iostream>
using namespace std;
int main() {
int countDown=3;
while(countDown >0){
    cout<<"hello"<<endl;

countDown=countDown-1;//countDown--;//countDown-=1;

}



    return 0;
}



#include <iostream>

using namespace std;

int main() {
    int sayi;

    do {
        // Bu soru kullanıcıya en az bir kere mutlaka sorulur.
        cout << "Lutfen 1 ile 10 arasinda bir sayi giriniz: ";
        cin >> sayi;

    } while (sayi < 1 || sayi > 10); // Girilen sayı 1'den küçük VEYA 10'dan büyük olduğu sürece döngüye devam et.

    // Döngü bittiğinde, girilen sayının doğru olduğu garantidir.
    cout << "\nTesekkurler! Girdiginiz gecerli sayi: " << sayi << endl;

    return 0;
}


#include <iostream>
using namespace std;
int main() {
    int countDown=3;
    do{
        cout<<"hello"<<endl;
        countDown=countDown-1;//countDown--;//countDown-=1;

    }
    while(countDown>0);//do while dongusu bu sekilde yazilir

    return 0;
}

a++;//a=a+1
++a;//a=a+1
a--;//a=a-1
--a;//a=a-1
a+=2;//a=a+2
a-=2;//a=a-2
a*=2;//a=a*2
a/=2;//a=a/2
a%=2;//a=a%2


cout<<a++<<endl;//once a yazdirilir sonra a 1 artirilir
cout<<++a<<endl;//once a 1 artirilir sonra a yazdirilir
cout<<a--<<endl;//once a yazdirilir sonra a 1 azaltirilir
cout<<--a<<endl;//once a 1 azaltirilir sonra a yazdirilir



#include <iostream>
using namespace std;
int main() {
cout<<5/2<<endl;//2 int
cout<<5.0/2<<endl;//2.5 double





}
int main() {
int a=5;
int b=2;
cout<<a/b<<endl;//2 int
cout<<double(a)/b<<endl;//2.5 double
cout<<a/double(b)<<endl;//2.5 double
cout<<double(a)/double(b)<<endl;//2.5 double
cout<<"static_cast "<<double(a/b)<<endl;// cevabi cevirir 2.0 yapar int e ellemez








}




#include <iostream>
using namespace std;
int main() {

double celcius=20;
double fahrenheit;
cout<<"please enter the celcius ";
cin>>celcius;
fahrenheit=celcius*9.0/5+32;//double yapmayi unutma unutursan tam dogru olamayabilir

cout<<"the fahrenheit is "<<fahrenheit<<endl;

    return 0;




}

/*
yorum satirlari olusturur


strings kutuphanesi isim yazmada kullanilir


*/

const int a=5;//degismez sabit degerler icin kullanilir
//a=6; hata verir cunku const ile tanimlandi
//const int a; hata verir cunku const ile tanimlandi ve deger atamasi yapilmadi
//teamste dersin pdf i var orda bakabilirsin
//parantezler bazzen oncelik sirasini degistirmek icin kullanilir bazende daha iyi anlamak icin kullanilir

