#include <iostream>
using namespace std;

class sc{

    friend int operator+(int, sc);
    
    private:
        int var;
    public:
        sc(int x){
            var=x;
        }
};

int operator+(int x, sc s){
    return (x + s.var);
};

int main(){
    sc sc1(9);

    cout<< 8 +sc1;

    return 0;
}