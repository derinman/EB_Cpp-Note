#include <iostream>
using namespace std;

int main(){
    
    int arr[2][3]={{10,20,30},{1,2,3}};
    
    int i, j;
    int *ptr=*arr;
    int temp = arr;
    cout<<"*arr= "<<*arr;
    cout<<"\t"<<"arr= "<<temp<<endl;
    for (i=0; i<6;i++){
        cout<<"*(ptr+"<<i<<")= "<<*(ptr+i)<<"\t";
        cout<<"ptr+"<<i<<"= "<<ptr+i<<endl;
    }

    return 0;
}