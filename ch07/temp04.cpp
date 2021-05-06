#include <iostream>
using namespace std;

void swap(int*, int*);

int main(){
    int n1, n2;

    cout<<"input two number, baby:"<<endl;
    cin>>n1>>n2;

    cout<<"before swap:"<<endl;
    cout<<&n1<<": "<<n1<<endl;
    cout<<&n2<<": "<<n2<<endl;

    swap(&n1, &n2);

    cout<<"after swap:"<<endl;
    cout<<&n1<<": "<<n1<<endl;
    cout<<&n2<<": "<<n2<<endl;

    return 0;
}

void swap(int* a, int* b){
    int temp;
    temp = *a;
    *a =*b;
    *b = temp;
}