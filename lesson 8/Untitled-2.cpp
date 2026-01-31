#include <iostream>

using namespace std;
//1. kodun aynisi ama fonksiyon kullanarak yapildi
// Fonksiyon prototipi (bildirimi)
int search(int arr[], int size, int target);

int main()
{
    int num[5] = {2, 5, 7, 3, 1};
    int target;

    cout << "Enter a number between 0 and 10 to search array:" << endl;
    cin >> target;

    // Arama fonksiyonunu çağırıyoruz
    int found = search(num, 5, target);

    if(found == -1){
        cout << "Target is not found.";
    }
    else {
        // Bu else kısmı resimde görünmüyor ama mantıken bulunursa ekrana yazması gerekir
        cout << "Target found at index: " << found;
    }

    return 0;
}

// Görselde aşağıda kaldığı için görünmeyen fonksiyonun tanımı.
// Yorum satırlarındaki (16-18. satırlar) mantığa göre tamamladım:
int search(int arr[], int size, int target) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == target) {
            return i; // Sayıyı bulursa index numarasını döndürür
        }
    }
    return -1; // Döngü biter ve sayı bulunamazsa -1 döndürür
}