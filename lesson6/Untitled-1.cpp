#include <iostream>
using namespace std;


int sum(int a,int b){

return a+b;




}

void sum(int a,int b){
int c= a+b
cout<<"summation of"<<a<<" and "<<b<<" is "<<c<<endl;





}




int main(){


int a=5, b=3;
cout<<"summation is "<<sum(a,b)<<endl;
sum(a,b);






    return 0;
}
//-----------------------------------------







#include <iostream>
using namespace std;










int main(){

cout<<"please enter the number of people and total weight of ice cream in kg "<<endl;
int number;
double totalWeight;
cin>>number>>totalWeight;
iceCreamDivision(number,totalWeight);






    return 0;
}




void iceCreamDivision (int number,double totalWeight){




double porsion;
portion totalWeight/number;
cout<<"each person gets "<<portion<<" kg of ice cream"<<endl;
    






}

#include <iostream>
using namespace std;
int main(){

int a=3;
cout<<"before calling ,the value of a"<<a<<endl;
increment(a);
cout<<"after calling ,the value of a"<<a<<endl;
return 0;



    
}

void increment(int a){

a ++;
cout<<"inside the function ,the value of a"<<a<<endl;
increment(a)    ;
cout<<"after incrementing inside the function ,the value of a"<<a<<endl;
return 0;


//geneli etkilemez
//cunku kopya uzerinde degisiklik yapilir

}


//call by reference example

#include <iostream>
using namespace std;


void getInput(double& fVariable){

using namespace std;
cout <<"convert a fahrenheit temperature"<<"to Celsius\n"
<<"Enter a fahrenheit temperature: ";
cin>>fVariable;





}





int main(){

getInput(fVariable);







}



//-----------------------------------------
#include <iostream>
using namespace std;
void increment2(int &a){//evde bak









    void swap(int &x, int &y);//void swap function to swap the values of two integers  //void swap fonksiyonu iki tamsayinin degerlerini degistirmek icin
    //x ve y yer degostirir






    void swap (int &x, int &y){
        innt x=c;
        y=x;
        x=c;





    }

int main(){

    int a=5;
    int b=10;
    swap(a,b);
    cout<<"after swapping ,a= "<<a<<" b= "<<b<<endl;//after swapping ,a= 10 b= 5






    return 0;
}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <iostream>
using namespace std;

    //mixed parameter passing example
void modifyValues(int &refVar, int valVar){//referans ve deger parametre
    refVar +=10;//referans parametre
    valVar +=10;//deger parametre
    cout<<"inside modifyValues function :"<<endl;//modifyValues fonksiyonu icinde 
    cout<<"refVar= "<<refVar<<endl;
    cout<<"valVar= "<<valVar<<endl;




    return 0;

    
}





//precontition example 
#include <iostream>
using namespace std;
double calculateAverage(int total, int numberOfValues){
    //precondition: numberOfValues must be greater than 0
    if(numberOfValues <=0){
        cout<<"Error: numberOfValues must be greater than 0"<<endl;
        return 0.0;
    }
    return static_cast<double>(total)/numberOfValues;
}

//post contition example
#include <iostream>
using namespace std;
double calculateSquareRoot(double number){
    double result = sqrt(number);
    //postcondition: result must be non-negative
    if(result <0){
        cout<<"Error: result must be non-negative"<<endl;
        return -1.0;
    }
    return result;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

































