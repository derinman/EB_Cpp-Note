#include<iostream>

using namespace std;
//宣告函數原型
int sum(int,int);//函數原型宣告

int main()
{
    
  int x,y;
  cout<<"請輸入兩科成績: ";
  cin>>x>>y;
  cout<<"兩科成積總和="<<sum(x,y)<<endl;//呼叫並輸出函數結果 
  
  
  return 0;
}
//函數定義部分
int sum(int score1,int score2)
{   
    int total;
    total=score1+score2;
    
    return total; 
}
