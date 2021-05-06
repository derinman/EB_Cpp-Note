#include <iostream>
using namespace std;

int add (int, int);

int main(){
    
    int n1= 2, n2=34; 
    
    cout <<add(n1, n2);

    return 0;
}

int add (int a, int b){
    return (a+b);
}