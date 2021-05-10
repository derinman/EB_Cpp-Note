#include <iostream>
using namespace std;

#define cArea(r) r*r*3.1415 

int main(){

    int r;

    cout<<"input thr radius of circle: ";
    cin>>r;

    cout<<"the area of the circle is: "<<cArea(r);

    return 0;
}