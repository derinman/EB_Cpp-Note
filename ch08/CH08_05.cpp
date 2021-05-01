#include<iostream>

using namespace std;

int sum(int);
int sum1(int);// 函數原型宣告 
int main()
{	
	int n;
	
	cout<<"第一次呼叫"<<endl; 
 	cout<<"一般變數函數:"<<sum(5)<<endl;
  	cout<<"靜態變數函數:"<<sum1(5)<<endl;
	cout<<"第二次呼叫"<<endl; 
    cout<<"一般變數函數:"<<sum(10)<<endl;
  	cout<<"靜態變數函數:"<<sum1(10)<<endl;
  	cout<<"第三次呼叫"<<endl; 
 	cout<<"一般變數函數:"<<sum(15)<<endl;
  	cout<<"靜態變數函數:"<<sum1(15)<<endl;
    
    
    return 0;	
}
//一般的變數函數
int sum(int n)
{ 
	int sum=0;//初始值設定為0
	sum+=n;
	return sum;
}
//靜態變數的函數
int sum1(int n)
{
	//宣告靜態變數sum
	static int sum;
	
	sum+=n;
 	return sum;
}
