#include <iostream>
using namespace std;

class abc{
    public:
        void boo(){
            cout<<"i'm from abc";
        };
};

class child:public abc{
    public:
        void boo(){
            cout<<"i'm from child";
        };
};

int main(){

    abc a;
    child c;

    a.boo();
    c.boo();

    return 0;
}