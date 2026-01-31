#include <iostream>

// Slayttaki gibi ayların uzunluklarını tanımlayan bir enum
// Değerleri kendimiz atıyoruz.
enum MonthLength {
    JAN_LENGTH = 31,
    FEB_LENGTH = 28,
    MAR_LENGTH = 31,
    APR_LENGTH = 30,
    // ... diğer aylar
    DEC_LENGTH = 31
};

// Haftanın günlerini tanımlayan bir enum
// Değer atamazsak, varsayılan olarak 0'dan başlar ve birer birer artar.
// MONDAY = 0, TUESDAY = 1, WEDNESDAY = 2 ...
enum Day {
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
};

// Enum'ı bir fonksiyonda kullanma örneği
void checkDay(Day today) {//void checkDay(Day today) fonksiyonu, Day enum tipinde bir parametre alır yani bugün hangi gün olduğunu belirtir
    if (today == SATURDAY || today == SUNDAY) {
        std::cout << "Bugün hafta sonu! Dinlenme zamanı." << std::endl;
    } else {
        std::cout << "Bugün hafta içi. Çalışma zamanı." << std::endl;
    }
}

int main() {
    // MonthLength enum'ını kullanalım
    MonthLength january = JAN_LENGTH;
    std::cout << "Ocak ayının uzunluğu: " << january << std::endl;
    std::cout << "Şubat ayının uzunluğu: " << FEB_LENGTH << std::endl;

    std::cout << "---" << std::endl;

    // Day enum'ını kullanalım
    Day bugun = MONDAY;

    // Enum değerinin aslında bir sayı olduğunu görelim
    std::cout << "MONDAY'in sayısal değeri: " << bugun << std::endl;
    std::cout << "FRIDAY'in sayısal değeri: " << FRIDAY << std::endl;

    // Fonksiyonu enum ile çağıralım
    checkDay(bugun);       // bugun = MONDAY olduğu için hafta içi mesajı verir
    checkDay(SATURDAY);    // Doğrudan SATURDAY değeri ile çağırarak hafta sonu mesajı alırız

    return 0;
}




//eger enum un icini tanimlamasydik  0 1 2 3 4 5 6 seklinde deger atardi



int main() {


enum Gunler {PAZARTESI, SALI, CARSAMBA, PERSEMBE, CUMA, CUMARTESI, PAZAR};
Gunler bugun = CUMA;
cout<< "Bugün haftanin " << bugun + 1 << ". gunu." << endl;





    return 0;
}


int main() {
    enum Size {KUCUK = 1, ORTA = 2, BUYUK = 3};
    Size tshirtSize = ORTA;
    cout << "Secilen tişört bedeni: " << tshirtSize << endl;


    return 0;
}


//Kısacası enum, "sihirli sayıları" (magic numbers) koddaki anlamlı isimlerle değiştirmeye yarar.

int main() {

    //the using strong enum
    enum class Renk {KIRMIZI, YESIL, MAVI};
    Renk favoriRenk = Renk::MAVI;
    if (favoriRenk == Renk::MAVI) {
        cout << "Favori renginiz mavi!" << endl;
    } else {
        cout << "Favori renginiz mavi değil." << endl;
        //buraya bakarsak enum class in normal enum dan farkli oldugunu anlariz
        //normal enum da direk YESIL gibi kullanabiliyorduk ama enum class da Renk::YESIL seklinde kullanmak zorundayiz
        //bu da isim çakışmalarını önler
        //ayrıca enum class in tip güvenliği daha yüksektir, yani farklı enum class lar karıştırılamaz
        //örneğin Renk::KIRMIZI ile Size::KUCUK karşılaştırılamaz
        //bu da hataların önlenmesine yardımcı olur
        //böylece kod daha okunabilir ve bakımı daha kolay olur
    



    }


    int main() { 
        enum Color{RED=1, GREEN, BLUE};
        
        int choice;
        cout << "Bir seçenek girin (1-3): ";
        cout<<"1-RED, 2-GREEN, 3-BLUE"<<endl;
        cout<< "Seçiminiz: ";
        cin >> choice;
        if (choice<1 || choice>3) {
            cout << "Geçersiz seçim!" << endl;
            return 1;
        }if else (choice == RED) {//yanlis kullanim if else yerine else if olmaliydi
            cout<< "Seçilen renk kırmızı." << endl;
        } else if (choice == GREEN) {
            cout << "Seçilen renk yeşil." << endl;
        } else {
            cout << "Seçilen renk mavi." << endl;
            }
        }//else if seklinde kullanilir unutma

     
        
        
        return 0; }


        selectedColor = static_cast<Color>(choice);
     if (selectedColor == Color::RED) {
         cout << "Seçilen renk kırmızı." << endl;
         //static cast ile enum degerini int den enum a ceviriyoruz
         //bu sayede enum degerleri ile karsilastirma yapabiliyoruz
         //ancak bu yontem dikkatli kullanilmali cunku gecersiz degerler de atanabilir



            //&& nin tersi ||          
            //veya ! ile degilini alabiliriz
            //if(2<x<5) yanlistir
            //if(x>2 && x<5) dogrudur
            //

























            #include <iostream>
            using namespace std;
                int main() {
                    //nested statenment demek ic ice if kullanmak demektir
                    int sayi;
                    cout << "Bir sayi girin: ";
                    cin >> sayi;
                    if (sayi > 0) {
                        if (sayi % 2 == 0) {
                            cout << "Girdiginiz sayi pozitif ve cifttir." << endl;
                        } else {
                            cout << "Girdiginiz sayi pozitif ve tektir." << endl;
                        }
                    } else if (sayi < 0) {//dogru kullanim
                        cout << "Girdiginiz sayi negatiftir." << endl;
                    } else {
                        cout << "Girdiginiz sayi sifirdir." << endl;
                    }
                    
                

                    





                  return 0;
                    }


                    #include <iostream>
                    using namespace std;
                    int main() {
                        
                        int salary,years;
                        cout << "Maasinizi girin: ";
                        cin >> salary;
                        cout << "Calisma yilinizi girin: ";
                        cin >> years;
                        if (salary>= 30000){

                            if (years>=5){
                                cout << "Tebrikler! Terfi ettiniz." << endl;
                            } else {
                                cout << "Terfi icin yeterli calisma yili yok." << endl;
                            }
                        } else {
                            cout << "Terfi icin maasiniz yetersiz." << endl;



                        }
                        return 0;
                    }


                    #include <iostream>
                    using namespace std;
                    int main() {




                        return 0;
                    }













#include <iostream>
using namespace std;
int main() {

    //switch statement kullanimi
    //switch if-else yapisinin daha okunabilir bir alternatifi olabilir
    //genellikle belirli sabit degerlere gore farkli islemler yaparken kullanilir
    //örnegin haftanin gunlerine gore mesaj vermek gibi
    //switch ifadesi bir degiskenin degerine bakar ve o degere uygun case blogunu calistirir
    //her case blogu break ifadesi ile sonlandirilir, aksi takdirde sonraki case bloglari da calisir (fall-through)
    //default blogu ise hicbir case ile eslesme olmadiginda calisir
    //switch ifadesi sadece tamsayi, karakter veya enum tipindeki degiskenlerle kullanilabilir
    //float veya double gibi tiplerle kullanilamaz
    int gun;
    cout << "Bir gun numarasi girin (1-7): ";
    cin >> gun;
    switch (gun) {
        case 1:
            cout << "Pazartesi" << endl;
            break;
        case 2:
            cout << "Sali" << endl;
            break;
        case 3:
            cout << "Carsamba" << endl;
            break;
        case 4:
            cout << "Persembe" << endl;
            break;
        case 5:
            cout << "Cuma" << endl;
            break;
        case 6:
            cout << "Cumartesi" << endl;
            break;
        case 7:
            cout << "Pazar" << endl;
            break;
        default:
            cout << "Gecersiz gun numarasi!" << endl;
    }





    return 0;
}
                    
#include <iostream>
using namespace std;
int main() {

int grade;//if ile yapimi
cout << "Notunuzu girin (0-100): ";
cin >> grade;
if (grade >= 90) {
    cout << "Harf notunuz: A" << endl;
} else if (grade >= 80) {
    cout << "Harf notunuz: B" << endl;
} else if (grade >= 70) {
    cout << "Harf notunuz: C" << endl;
} else if (grade >= 60) {
    cout << "Harf notunuz: D" << endl;
} else {
    cout << "Harf notunuz: F" << endl;
}
    return 0;}




    #include <iostream>
    using namespace std;
    int main() {
    
        int grade;//switch ile yapimi
        cout << "Notunuzu girin (0-100): ";
        cin >> grade;
        switch (grade / 10) {
            case 10:// case 'A' de yazilabilirdi ama int oldugu icin 10 yazdik
            //eger 'A' yazmak isteseydik if ile araliklari eslestiebilirdik ama gereksiz uzardi boyle daha kisa oldu


                cout << "Harf notunuz: A" << endl;//burdaki kodu yazmasaydik case 9 a da girerdi yani sorun olmazdi cunku ikisi de A yi temsil ediyor

                break;
            case 9:
                cout << "Harf notunuz: A" << endl;
                break;
            case 8:
                cout << "Harf notunuz: B" << endl;
                break;
            case 7:
                cout << "Harf notunuz: C" << endl;
                break;
            case 6:
                cout << "Harf notunuz: D" << endl;
                break;
            default:
                cout << "Harf notunuz: F" << endl;
        }
    
    
    
    
    
    
        return 0;
    }




    #include <iostream>
    using namespace std;
    int main() {


        int sum = 0;
        int number=1;
        while (number <= 100) {
            sum += number;//sum = sum + number
            number++;//number = number + 1
        }

        cout << "1'den 100'e kadar olan sayıların toplamı: " << sum << endl;




        return 0;
    }

    #include <iostream>
    using namespace std;
    int main() {
        //ayni islemi for dongusu ile yapalim
        int sum = 0;
        for (int number = 1; number <= 100; number++) {//eger number++ i basa yazsaydik 1 den 101 e kadar toplardi     //ama genel kural boyledir
            
            
            sum += number;
        }
        cout << "1'den 100'e kadar olan sayıların toplamı: " << sum << endl;
        return 0;




    }






#include <iostream>
using namespace std;
int main() {


        //basit oyun döngüsü
        for(int i = 0; i < 5; i++) {
            cout << "?\n"<< endl;
            cout<<?<<endl;           //burada oyun mantığı, kullanıcı girişi, grafik güncellemeleri vb. işlemler yapılabilir


        }
            
        







}

//for dongusunden sonra ; yazarsak bos bir ifade olur ve hata vermez
//ama for dongusunun amacina ulasamazsiniz
//{} kullanmassaka sadece bir sonraki satiri for dongusune dahil eder
//eger birden fazla satiri dahil etmek istiyorsak {} kullanmaliyiz











#include <iostream>
using namespace std;
int main() {
    
    int a,int sum=0;
    int counter=0;
    while(counter<5){

        cout<<"Bir negatif sayi girin: ";
        cin>>a;
        
        if(a=>){

cout<<"Gecersiz sayi, lutfen negatif bir sayi girin."<<endl;
            break;
        } else {

            sum += a;
            
            counter++;

        }

        cout<<sum
    }



    }







//break ifadesi donguyu sonlandirmak icin kullanilir
//continue ifadesi ise o anki iterasyonu atlayip bir sonraki iterasyona gecmek icin kullanilir



//butun programi kapatmak istiyosak return 0 yada 1; kullanabiliriz ama sadece donguyu sonlandirmak istiyorsak break; kullanmaliyiz
 
#include <iostream>
using namespace std;
int main() {
int a,product=1;
char cont='Y';
while(cont=='Y' || cont=='y'){

    cout<<"Bir pozitif sayi girin: ";
    cin>>a;

    if(a<=0){

        cout<<"Gecersiz sayi, lutfen pozitif bir sayi girin."<<endl;
        break;
    } else {

        product *= a;

    }

    cout<<"Toplam carpim: "<<product<<endl;

    cout<<"Devam etmek istiyor musunuz? (Y/N): ";
    cin>>cont;






}
}


#include <iostream>
using namespace std;
int main() {







}
















