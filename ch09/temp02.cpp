#include <iostream>
using namespace std;

#define JUDGE(n) (n%2==0?1:2)

int main(){

    int x;

    cout<<"input a number: ";
    cin>>x;

    cout<<JUDGE(x);

    return 0;
}