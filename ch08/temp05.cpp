#include <iostream>
using namespace std;

int (*ptrFn)(int);

int square(int);
int cubic(int);

int main(){

    int x;
    

    cout<<"input a integer:"<<endl;
    cin>>x;

    if(x%2==0){
        ptrFn = square;
    }else{
        ptrFn = cubic;
    }

    cout<<ptrFn(x);

    return 0;
}

int square(int n){
    return n*n;
}

int cubic(int n){
    return n*n*n;
}