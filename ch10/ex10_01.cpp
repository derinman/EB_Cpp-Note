#include <iostream>

using namespace std;

int main()
{
    struct foo{
        int a;
        int b;
    };
    
    struct foo  f1;

    struct foo *f2 = &f1;
    int i;

    f2->a = 1;
    f2->b = 10;

    f2->a++;    //等於 (f2->a)++ 
    cout<<"f2->a="<<f2->a<<endl;
    --f2->b;    //等於 i = --(f2->b) 
    cout<<"f2->b="<<f2->b<<endl;
    
    
    return 0;
}
