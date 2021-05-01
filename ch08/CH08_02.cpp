#include <iostream>

using namespace std;

int add(int,int);
int sub(int,int);
int Math(int,int,int (*pfunc)(int,int));//具有參數函數指標的函數原型宣告 

int main()
{
    int x,y;
    
    cout<<"x=";
    cin>>x;
    cout<<"y=";
    cin>>y;
    
    cout<<"-----------------------------------"<<endl; 
    cout<<x<<"+"<<y<<"="<<Math(x,y,add)<<endl;//呼叫 add(),並印出其值 
    cout<<x<<"-"<<y<<"="<<Math(x,y,sub)<<endl;//呼叫 sub(),並印出其值                                                         
        
    
    return 0;
}
//具有參數函數指標的函數定義 
int Math(int a,int b,int (*pfunc)(int,int))
{
    return (*pfunc)(a,b);
}
int add(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}

