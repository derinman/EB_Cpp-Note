#include <iostream>

using namespace std;

class square{
    friend int operator+ (square, square);
    private:
        int w;
        int a;
    public:
        
        square(int x){
            w = x;
            a = w * w;
        };
};

int sum;
int operator+ (square s1, square s2){
    return (s1.a + s2.a);
};

int main(){
    square S1(3);
    square S2(4);

    cout<<(S1+S2);

    return 0;
}