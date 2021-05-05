#include<iostream>
using namespace std;

void fun(int, int);/*函數原型宣告*/

int main()
{		
    int a,b; 	
    a=10;    
    b=15;    
    //輸出主程式中的a,b值
    cout<<"主函數中:a="<<a<<" b="<<b<<endl;	
    cout<<"a的位址:"<<&a<<" b的位址:"<<&b<<endl;	
    //呼叫函數   
    fun(a,b);    
    cout<<"-----------------------------------------"<<endl; 
    //輸出呼叫函數後的a,b值
    cout<<"呼叫函數後:a="<<a<<" b="<<b<<endl;  
    cout<<"a的位址:"<<&a<<" b的位址:"<<&b<<endl;		
      
    return 0;	
}
   
void fun(int a, int b)
{ 	
    cout<<"-----------------------------------------"<<endl; 
    cout<<"fun函數內:a="<<a<<" b="<<b<<endl;  
    cout<<"a的位址:"<<&a<<" b的位址:"<<&b<<endl;   	
    a=20;	
    b=30;//重設函數內的a,b值	
    cout<<"函數內變更數值後:a="<<a<<" b="<<b<<endl; 
}
