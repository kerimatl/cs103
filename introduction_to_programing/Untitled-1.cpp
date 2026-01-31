#include <iostream>

using namespace std;//semi colon unutma
int main() {
    //decloration=beyanname
    int age,age1,age2;
    double gpa;
    double answer,sum,mult,subt;
    //initialization=ilk deger atama
    age = 21;
    gpa = 3.5;
    // gpa=4.0;


    age*2=answer;//hata verir
    answer=age*2;//dogru

    variable=1;
    int variable;//hata verir

    int variable=1;//dogru
    //or
    int variable;
    variable=1;

    double mpg=26,3, area=0,0, volume;//hata verir virgul varken parantez lazim
    double mpg(26.3), area(0.0), volume;//hata vermez



    int feet=0, inches=0;//hata vermez
    int feet(0), inches(0);//hata vermez
    

    cout<<"Hello World"<<endl;
    cout<<"I am "<<age<<" years old"<<endl;
    cout<<"the asnwer is "<<answer<<endl;
    cout<<"the gpa is "<<gpa<<endl;
    cout << "the variable is \n" << variable << endl;//endl yeni satir icin


    return 0;

    std::cout << "Hello World" << std::endl;//olabilirde ama uzun yol
    cout<<"\"exam is next week\"profesor said"<<endl;//karismamasi icin


    double price=5.99999999999;
    cout.setf(ios::fixed);//Ondalıklı sayıları sabit biçimde (ör: 3.50) göstermek için kullanılır.
    cout.setf(ios::showpoint);//Ondalıklı sayılarda her zaman ondalık noktasını ve ondalık basamakları göstermek için kullanılır.
    cout.precision(3);//Ondalıklı sayılarda gösterilecek ondalık basamak sayısını belirler.
    cout<<"the price is $"<<price<<endl;


    double price;
    cout<<"please enter your price ";
    cin>>price;
    cout<<"hello price is"<<price<<endl;

    

    cout<<"please enter your ages ";
    cin>>age1>>age2;//hata vermez


    //bu kurstta genel olarak float int double kullanilacak
    char letter ='A';//char sembol yapar//tek bir karakter
    string name="ali";//string icin//birden fazla karakter kullanilir
    
    char letter1, letter2, letter3;
    cout<<"please enter 3 letters ";
    cin>>letter1>>letter2>>letter3;
    cout<<"the letters are "<<letter1<<","<<letter2<<","<<letter3<<endl;
    return 0;

    char letter=65;//65='A'
    cout << letter << endl;//A yazar


    bool a=true;
    bool b=false;//true=1 false=0
    cout<<a<<endl;//1 yada 0 yazar//// burda 0 yazar ama







    int x = 5;
    int y = 10;
    int sum = x + y;//if your result is with double you should write double sum

    cout<<"the summation of"<< x <<"and"<< y <<"is "<<sum<<endl;
    //sumation toplama demek
    return 0;


    //reminder=kalan     //divisor=bölen     //divided=bolunen


   


    int a = 17;
    int b = 5;
    int mod = a % b;//% =modunu almak icin kullanilir
    cout << "17 % 5 = " << mod << endl; // Sonuç: 2
    return 0;





    a=a+1;
    a+=1;//a=a+1 ile ayni
    a++;//a=a+1 ile ayni
    ++a;//a=a+1 ile ayni

    

    


}




