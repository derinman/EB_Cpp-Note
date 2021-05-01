#include <iostream>

using namespace std;

void foo(void);  //無意義的函式，用來顯示區域變數值 

int x = 10;//宣告全域變數 x 

int main(void)
{
    cout<<"全域變數 x = "<<x<<endl;
    foo();
    cout<<"全域變數 x = "<<x<<endl;

    
    return 0;
}

void foo(void)
{
    int x = 20;//宣告區域變數 x 

    printf( "區域變數 x = %d\n", x );
}
