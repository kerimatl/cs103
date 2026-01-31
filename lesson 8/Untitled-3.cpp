#include <iostream>
using namespace std;
int main(){
int num[5]{1,2,3,4,5};
//sorting algorithm: selection sort
for(int i=0;i<4;i++){
int smallest_index=i;
    //find the smallest element in the unsorted array
for(int j=i+1;j<5;j++){
if(num[j]<num[smallest_index]){

smallest_index=j;//update smallest position



    }











}







int temp=num[i];
num[i]=num[smallest_index];
num[smallest_index]=temp;

}

cout<<"Sorted array is: ";
for(int i=0;i<5;i++){
cout<<num[i]<<" ";


return 0;  
}
return 0;
}