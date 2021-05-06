#include <iostream>
using namespace std;

int pow(int, int);

int main(){

    int base,power,result;

    cout<<"please input the BASE: ";
    cin>>base;
    cout<<"please input the POWER: ";
    cin>>power;
    
    result = pow(base, power);

    cout<<base<<" to the power of "<<power<<" is: "<<result; 

    return 0;
}

int pow(int base, int power){
    
    int i, sum=1 ;
    for (i=0; i<power; i++){
        sum *= base;
    }

    return sum;
}