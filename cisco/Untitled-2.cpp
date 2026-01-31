#include <iostream>
using namespace std;
int main(){

cout<<"lutfen ip adresinizi giriniz: ";
int a,b,c,d;
cin>>a>>b>>c>>d;
if((a>=0 && a<=255) && (b>=0 && b<=255) && (c>=0 && c<=255) && (d>=0 && d<=255)){
    cout<<"girdiginiz ip adresi gecerlidir."<<endl;
    cout<<"ip adresiniz: "<<a<<"."<<b<<"."<<c<<"."<<d<<endl;
}else{
    cout<<"girdiginiz ip adresi gecersizdir."<<endl;}













    return 0;
}