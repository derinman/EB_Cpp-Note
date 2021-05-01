#include <iostream>

using namespace std;

int square(int);  // 函數原型宣告 
int cubic(int);  // 函數原型宣告 

int main()
{
    int (*ptr)(int); //函數指標宣告 
    int x;
    
    cout<<"請輸入整數值:偶數則計算平方值,奇數則計算立方值:"; 
    cin>>x;
    
    if(x%2==0)
     ptr=square;//偶數則指向square()函數  
    else
     ptr=cubic; //奇數則指向cubic()函數  
    
     cout<<ptr(x)<<endl;

    
    return 0;
}

int square(int a)
{
    return a*a;
}

int cubic(int a)
{
    return a*a*a;
}

