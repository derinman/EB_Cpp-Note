#include <iostream>

using namespace std;

int add(int,int);//函數宣告 
int sub(int,int);//函數宣告
int mul(int,int);//函數宣告
int (*pfunc[])(int,int)={add,sub,mul};// 函數指標陣列宣告時也可同時指派初值 

int main()
{
    char c[]={'+','-','*'};
    int x,y,i;
    cout<<"x=";
    cin>>x;
    cout<<"y=";
    cin>>y;
    cout<<"--------------------------------------------"<<endl; 
    for(i=0;i<3;i++)
    {
        cout<<x<<c[i]<<y<<"="<<pfunc[i](x,y)<<endl;
        //透過for迴圈方式執行函數指標所指向的函數位址
    }  
    cout<<endl;                   
    cout<<"--------------------------------------------"<<endl;                   
    
    return 0;
}
int add(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
int mul(int a,int b)
{
    return a*b;
}
