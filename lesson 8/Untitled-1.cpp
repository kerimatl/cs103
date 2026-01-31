#include <iostream>
using namespace std;
int main(){

    int num[5]={2,5,7,3,1};
    int target;
    cout<<"enter a number between 0 and 10 search array:"<<endl;
    cin>>target;

    bool found=false;
    int index=-1;

    for(int i=0;i<5;i++){

        if(num[i]==target){
            cout<<"TARGET NUMBER FOUND AT index"<<i<<endl;
            found=true;
            index=i;
            break;




            return 0 ;



        }// ctrl +/ hepsini yorum moduna aliyor






    }


    if(found){
    cout<<"target is found at index"<<index<<endl;}
    else
    cout<<"target is not found ";

        






   




    return 0;
}






