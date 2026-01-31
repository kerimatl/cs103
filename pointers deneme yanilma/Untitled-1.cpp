#include <iostream>
using namespace std;

int main(){
    
    int n=10;
    int *ptr; //declaration of pointer
    ptr=&n;
    int *p=&n;//assigned n's address to p//n deki adresi p'ye atandi
    cout<<p<<endl; //printout value p holds
    cout<<*p; //printout value in address p point
    //cout<<&n;

    

    return 0;   
}
