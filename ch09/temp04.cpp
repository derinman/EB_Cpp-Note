#include <iostream>
using namespace std;

#define PRINT(x) (cout<<x)

int main(){
    int x;

    cout<<"input a number: ";
    cin>>x;

    cout<<"the number you input is: ";
    PRINT(x);

    return 0;
}