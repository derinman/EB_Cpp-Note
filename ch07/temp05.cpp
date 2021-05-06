#include <iostream>
using namespace std;

int cumsum1toN(int); 

int main(){

    int n, result;

    cout<<"input a number yoyoyo: "<<endl;
    cin>>n;

    result = cumsum1toN(n);

    cout<<"result is: "<<result;

    return  0;
}

int cumsum1toN(int N){
    int i, sum=0;

    for(i=1; i<=N; i++){
        sum+=i;
    }

    return sum;
}