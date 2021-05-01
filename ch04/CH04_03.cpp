#include<iostream>

using namespace std;

int main()
{
    int number;
    //判斷數字為偶數與奇數 
    cout<<"請輸入數字: ";
    cin>>number;//輸入數字
  
    //條件運算子的使用 
    (number%2==0)? cout<<"輸入數字為偶數"<<endl
                  :cout<<"輸入數字為奇數"<<endl;
   
    return 0;
}
