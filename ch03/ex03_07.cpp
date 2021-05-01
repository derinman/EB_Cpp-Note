#include <iostream>

using namespace std;

int main()
{
    
    int num;
    
    cout<<"請輸入三位數以上整數:"; 
    cin>>num;
    
    num=(num/100)%10;
    cout<<"百位數的數字為"<<num<<endl; 
    
      
    return 0; 
}
