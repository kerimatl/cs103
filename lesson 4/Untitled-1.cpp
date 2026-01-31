#include <iostream>
using namespace std;
int main() {
    for(int i=1;i<=7;i++){
       //i sadece for um icin gecerli



        //for un icinde yazdigin int i=1; sadece for un icin gecerli






    return 0;



}


int main() {

//debugging loop
    for (int i = 1; i <= 5; i++) {
        cout << "Dongu sayisi: " << i << endl;
    }


    int a=4;
    while(a>0){
        
        cout<<"a degeri: "<<a<<endl;
        a--;
    }





return 0;
}
int main() {

    int next = 2 ,product=1;
    while (next <= 10) {
        product *= next; // product = product * next
        next += 2;      // next = next + 2
    }

    cout << "1'den 10'a kadar olan cift sayilarin carpimi: " << product << endl;



return 0;
}//break donguyu sonlandirir
//continue o anki iterasyonu atlar ve bir sonraki iterasyona gecer
//; semicolon denir

#include <fstream>
using namespace std;
int main() {
//dosya acma
    ofstream outfile;
    outfile.open("output.txt");

    //dosyaya yazma
    for (int i = 1; i <= 5; i++) {
        outfile << "Bu satir dosyaya yazildi: " << i << endl;
    }

    //dosyayi kapama
    outfile.close();

    return 0;






    #include <inputstream>
using namespace std;
int main() {
    //dosya acma
    ifstream infile;
    infile.open("input.txt");

    //dosyadan okuma
    string line;
    while (getline(infile, line)) {
        cout << "Dosyadan okunan satir: " << line << endl;
    }

    //dosyayi kapama
    infile.close();




    ifstream printfile;//dosya acma
    int numbers;//okunacak sayi
    printfile.open("input.txt");//dosyadan okuma
    while(printfile>>numbers){//dosyadan sayi okuma
        cout<<"Dosyadan okunan sayi: "<<numbers<<endl;//ekrana yazma

    }
    printfile.close();//dosyayi kapama




    return 0;       

    





}
int main() {
string name;

int score, amount;
ifstream printfile;
printfile.open("scores.txt");
printfile>>amount;
for(int i=0;i<amount;i++){
    printfile>>name;
    printfile>>score;
    cout<<"Ogrenci adi: "<<name<<" Notu: "<<score<<endl;}//dosyadan okuma
printfile.close();//dosyayi kapama



//birden fazla kisinin notlarini dosyadan okuyup ekrana yazdirma




    return 0;
}












//top down design
#include <iostream>
using namespace std;
void printWelcomeMessage() {
    cout << "Welcome to the Program!" << endl;




}

void deneme(){

cout<<"deneme fonksiyonu"<<endl;

}



int main() {
    printWelcomeMessage(); // Fonksiyonu çağırma
    deneme();

    return 0;
}





//predifined functions
#include <cmath>
#include <iostream>
using namespace std;
int main() {
    double number = 16.0;
    double squareRoot = sqrt(number); // Karekök alma
    double power = pow(number, 2);    // Üs alma

    cout << "Karekök of " << number << " is " << squareRoot << endl;
    cout << number << " raised to the power of 2 is " << power << endl;

    return 0;
}    




//function call syntax
#include <iostream>
using namespace std;
void greetUser(string name) {
    cout << "Hello, " << name << "!" << endl;
}
#include <ctime>//rastgele sayi uretmek icin
#include <cstdlib>//rastgele sayi uretmek icin
srand(time(0));//rastgele sayi uretmek icin
rand()%100;//0-99 arasinda rastgele sayi uretmek icin
rand()%6 0-5 arasinda rastgele sayi uretmek icin





#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
    
    srand(time(0));//rastgele sayi uretmek icin

    int randomNumber = rand() %6+1; // 1-6 arasinda rastgele sayi uret
    int randomNumber2 = rand() %6+1; // 1-6 arasinda rastgele sayi uret
    cout<<"1.zar daki sayi"<<randomNumber<<endl;
    cout <<"2.zar daki sayi"<<randomNumber2<<endl;
    cout<<"Toplam: "<<randomNumber+randomNumber2<<endl;
    return 0;
}



#include <cstdlib>
#include <iostream>
using namespace std;
int main() {
    
    srand(time(0));//rastgele sayi uretmek icin

int randomNumber = rand()%10+11;//11-20 arasinda rastgele sayi uret
cout<<"Rastgele sayi: "<<randomNumber<<endl;
    return 0;
}

#include <cstdlib>
#include <ctime>
#include <string>
#include <iostream>
string hello();
int main() {


    cout<<hello();
    return 0;
}
string hello(){
    string a="Merhaba Dünya";
    return a;//fonksiyon string deger donduruyor




}




#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int sum(int a, int b); //function decleration
int main() {
    int a,b;
    cout<<"enter 2 integers:";
    cin>>a>>b;
    int summation=sum(a,b);
    cout<<"summation is:"<<sum;
    return 0;
}
int sum(int a, int b) { //function definition
    return a+b;
}//hatali kod






#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int sum(int a, int b); //function decleration
int main() {
    int a,b;
    int summation=0;
    cout<<"enter 2 integers:";
    cin>>a>>b;
    summation=sum(a,b);
    cout<<"summation is:"<<summation;
    cout<<"summation2:"<<sum(a,b);
    return 0;
}
int sum(int a, int b) { //function definition
    return a+b;
}
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main() {


//order argument
    int x = 5;
    int y = 10;

    cout << "Before swapping: x = " << x << ", y = " << y << endl;

    // Swapping values using a temporary variable
    int temp = x;
    x = y;
    y = temp;

    cout << "After swapping: x = " << x << ", y = " << y << endl;//order argument
    






return 0;
}





