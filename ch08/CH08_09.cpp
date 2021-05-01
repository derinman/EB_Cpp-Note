#include<iostream>

using namespace std;

//行內函數定義 
inline int fun1(int a, int b,int c)
{
	return a+b+c;
}

int main()
{
	int a,b,c;
	cout<<"請輸入三個數字:";
	cin>>a>>b>>c;

 
 	if(fun1(a,b,c)%2==0)	//呼叫行內函數 
  		cout<<a<<"+"<<b<<"+"<<c<<"="<<a+b+c<<"為偶數"<<endl; 
 	else
  		cout<<a<<"+"<<b<<"+"<<c<<"="<<a+b+c<<"為奇數"<<endl; 
    
    
    return 0;
}
