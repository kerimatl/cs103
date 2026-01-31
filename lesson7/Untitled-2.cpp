#include <iostream>
using namespace std;
int main (){

int dizi[5];   // 5 elemanlı int array






int a[5] = {1, 2, 3, 4, 5};
int b[]  = {10, 20, 30};   // boyut otomatik = 3




cout << a[0];   // ilk eleman
a[2] = 99;      // 3. elemana değer atama



a[10]   // HATA! (tanımsız davranış)

int mat[2][3] = {
    {1, 2, 3},
    {4, 5, 6}
};


void yazdir(int d[], int n) {
    for(int i=0; i<n; i++)
        cout << d[i] << " ";
}


for(int i = 0; i < 5; i++) {
    cout << a[i] << " ";
}

int size = sizeof(a) / sizeof(a[0]);





    return 0;
}
