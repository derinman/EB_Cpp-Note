#include <iostream>
using namespace std;

int main(){
    
    int i,j;
    int *ptr[3];         
    int num1[]={ 15,23,31 };
    int num2[]={ 114,225,336 };
    int num3[]={ 1237,3358,9271 };

    ptr[0]=num1;
    ptr[1]=num2;
    ptr[2]=num3;

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<*(*(ptr+i)+j)<<"\t";
        }
    } 

    return 0;
}