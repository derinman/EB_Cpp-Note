#include <iostream>
using namespace std;

class foo{
    public:
        void aFn(){
            cout<<"aFn";
        };
};

class boo{
    public:
        void bFn(){
            cout<<"bFn";
        };
};

class combine: public foo, public boo{
};

int main(){

    combine c;
    c.aFn();
    c.bFn();

    return 0;
}