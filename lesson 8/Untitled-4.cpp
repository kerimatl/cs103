#include <iostream>
using namespace std;
int main(){




    int matrix[3][3]{
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };//2D array initialization
    cout<<"Matrix elements are: "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }






//multidimensional array with different sizes

    
    int scores[2][3]{
        {85,90,78},
        {88,76,95}
    };//another 2D array initialization
    cout<<"Scores are: "<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<scores[i][j]<<" ";
        }
        cout<<endl;
    }













    return 0;
}