#include <iostream>
using namespace std;

int main(){

    double A;

    struct circle {
        double r;
        double *area;
    };

    struct circle myC;

    myC.r = 1.4;
    myC.area = &A;
    A = myC.r*myC.r*3.1415;

    cout<<"myC.r= "<<myC.r<<endl;
    cout<<"*myC.area= "<<*myC.area<<endl;
    cout<<"&A= "<<&A<<endl;
    cout<<"myC.area= "<<myC.area;

    return 0;
}