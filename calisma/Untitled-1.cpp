#include <iostream>
using namespace std;
int main(){

    int numberOfBars;
    double oneWeight , totalWeight;
    cout<<"enter the number of candy bars in a package\n";
    cout<<"and the weight in ounces of one candy bar.\n";
    cout<<"then press return.\n";
    cin>>numberOfBars;
    cin>>oneWeight;
    

    totalWeight = oneWeight * numberOfBars;

    cout<<numberOfBars<<"candy bars\n";
    cout<<oneWeight<<"ounces of each\n";
    cout<<"Total wight is"<<totalWeight<<"ounces.\n";



    cout<<"try another brand\n";
    cout<<"enter the number of candy bars in a package\n";
    cout<<"and the weight in ounces of one candy bar\n";
    cout<<"then press return\n";
    cin>>numberOfBars;
    cin>>oneWeight;

    totalWeight = oneWeight*numberOfBars;

    cout<<numberOfBars<<"candy bars\n";
    cout<<oneWeight<<"ounces each\n";
    cout<<"Total weight is"<<totalWeight<<"ounces\n";

    cout <<"Perhaps an apple would be healthier\n";

    return 0;



















    return 0;
}