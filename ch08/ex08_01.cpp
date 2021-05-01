#include <iostream>

using namespace std;

void setX20(void);  //設定全域變數的值為 20 
void setX30(void);  //設定全域變數的值為 30 
int x=10;//宣告 x 為全域變數 

int main()
{
    
    cout<<"x = "<<x<<endl;
    setX20();
    cout<<"x = "<<x<<endl;
    setX30();
    cout<<"x = "<<x<<endl;
    
    
    return 0;
}
void setX20(void)
{
    x = 20;
}

void setX30(void)
{
    x = 30;
}
