#include<iostream>

using namespace std;

int my_pow(int,int);
void show_output(int);
//宣告函數原型
int main()
{
 
    int x,r;
    cout<<"請輸入兩個數字:"<<endl;
    //輸入數字
    cout<<"x=";
    cin>>x;
    cout<<"r=";
    cin>>r;
    //在程式敘述中呼叫函數
    cout<<x<<"的"<<r<<"次方="<<my_pow(x,r)<<endl;//呼叫my_pow()函數 
  
    return 0;
}
//函數定義部分*
int my_pow(int x,int r)
{   
    int i;
	int sum=1;
	for(i=0;i<r;i++)
 	{
 		sum=sum*x;
    } //計算x^r的值 
    return sum; 
}
