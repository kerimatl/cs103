#include <iostream>

using namespace std;
int main() {
    //function bool is even (int n)that returns true if the number is even, false if its odd.
    int n;
    cout<<"please enter an integer number ";
    cin>>n;
    bool isEven;
    isEven = (n % 2 == 0);
    if(isEven){
        cout<<n<<" is even number"<<endl;
    }
    else{
        cout<<n<<" is odd number"<<endl;
    }


return 0;
}