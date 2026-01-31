/*#include <iostream>
using namespace std;
int main (){


    float x,y;
    if (x<y){



 x= 0.0;
    y=1.0/x;

    x=x+0.000000000000001;
    
    
    cout<<y<<endl;
    




    }
    







    return 0;
}



#include <iostream>
#include <iomanip>
#include <string>

int main()
{
  float v=2;
  float result = (v + 1) * 2;
  std::cout << "result:  " << result <<  "  expected result :  6" << std::endl;
  result = (v + 1) * (v + 2) * 2;
  std::cout << "result: " << result <<  "  expected result : 24" << std::endl;
  result = (v - 1) * 2 + 2 * 2;
  std::cout << "result:  " << result <<  "  expected result :  6" << std::endl;
  result = (v + v) * (v + v) * 2;
  std::cout << "result: " << result <<  "  expected result : 32" << std::endl;
  result = (int)v % 2 * (v + 2) * 2;
  std::cout << "result:  " << result <<  "  expected result :  0" << std::endl;
}
  


#include <iostream>

using namespace std;

int main(void) {
	float pi = 3.14159265359;
	float x, y;

	cout << "Enter value for x: ";
	cin >> x;

	// x2 : squared x (to simplify final expression)
	float x2 = x * x;	

	// pi2 : squared pi (as above)
	float pi2 = pi * pi;	
	
	// note: we use 0.5 instead of 1./2. - don't use 1/2 because it's equal to 0!
	y = ( x2 / (pi2 * (x2 + 0.5) )) * ( 1 + (x2 / (pi2 * (x2 - 0.5) * (x2 - 0.5) )));
	
	cout << "y = " << y << endl;
	return 0;
}
  */

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>   // rand, srand
#include <ctime>     // time()
using namespace std;

// --------------------------------------------
// 1) Call-by-reference örneği
// --------------------------------------------
void kareReferans(int &x) {
    x = x * x; // orijinal değişkeni değiştirir
}

// --------------------------------------------
// 2) Function overloading örneği
// --------------------------------------------
int topla(int a, int b) {
    return a + b;
}

int topla(int a, int b, int c) {
    return a + b + c;
}

double topla(double a, double b) {
    return a + b;
}

// --------------------------------------------
// 3) void fonksiyon ile dosyaya yazma
// --------------------------------------------
void yazDosya(const string &dosyaAdi, const string &yazi) {
    ofstream dosya(dosyaAdi, ios::app); // append modu
    if (!dosya.is_open()) {
        cout << "Dosya acilamadi!" << endl;
        return; // void fonksiyonda erken çıkış
    }
    dosya << yazi << endl;
    dosya.close();
}

// --------------------------------------------
// 4) Random sayı üretme (1-100 arası)
// --------------------------------------------
int randomSayi(int min, int max) {
    return rand() % (max - min + 1) + min;
}

// --------------------------------------------
// 5) main
// --------------------------------------------
int main() {
    srand(time(0)); // random seed, her çalıştırmada farklı sayı

    // 1️⃣ Call-by-reference
    int sayi = randomSayi(1, 10);
    cout << "Orijinal sayi (random): " << sayi << endl;
    kareReferans(sayi);
    cout << "Kare alindiktan sonra: " << sayi << endl << endl;

    // 2️⃣ Function overloading
    cout << "topla(3,4) = " << topla(3, 4) << endl;
    cout << "topla(1,2,3) = " << topla(1, 2, 3) << endl;
    cout << "topla(2.5,3.1) = " << topla(2.5, 3.1) << endl << endl;

    // 3️⃣ Dosyaya yazma
    yazDosya("sonuclar.txt", "Random sayi kare: " + to_string(sayi));
    yazDosya("sonuclar.txt", "topla(3,4) = " + to_string(topla(3,4)));
    cout << "Dosyaya yazma tamamlandi.\n\n";

    // 4️⃣ Dosyadan okuma
    ifstream oku("sonuclar.txt");
    if (!oku.is_open()) {
        cout << "Dosya acilamadi!" << endl;
        return 1;
    }

    string satir;
    cout << "Dosya icerigi:\n";
    while (getline(oku, satir)) {
        cout << satir << endl;
    }
    oku.close();

    return 0;
}


