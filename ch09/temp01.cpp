#include <iostream>
using namespace std;

#define TRAPEZOID(r1,r2,h) (r1+r1)*h/2

int main(){

    int r1, r2, h;

    cout<<"input r1: ";
    cin>>r1;
    cout<<"input r2: ";
    cin>>r2;
    cout<<"input h: ";
    cin>>h;

    cout<<"the area of trapezoid is:  "<<TRAPEZOID(r1,r2,h);1


    return 0;
}
