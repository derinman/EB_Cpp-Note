#include<iostream>

using namespace std;

#define F(no)(no%2==0)?printf("輸入數字為偶數\n"):printf("輸入數字為奇數\n");

int main()
{
  int number;
  
  cout<<"請輸入數字: ";
  cin>>number;//輸入數字
  F(number);
  
  
  return 0;
}
