#include <iostream>   

using namespace std;

int Common_Divisor(); //函數原型宣告 

int main()  
{  
    int Min;  
    Min=Common_Divisor(); //函數呼叫 
    cout << "的最大公因數為：" << Min << endl;  
    
    
    return 0;
 }  
int Common_Divisor()  
 {  
   int Num1,Num2,Temp;  
   cout << "請輸入兩個數值" << endl;  
   cout << "數值 1：";  
   cin >> Num1; 
   cout << "數值 2：";  
   cin >> Num2;  
   cout << Num1 << " 及 " << Num2;  
   while (Num2 != 0)  //利用輾轉相除法計算最大公因數
   	{  
     Temp=Num1 % Num2;  
   	 Num1 = Num2;  
	 Num2 = Temp;  
   	}  
    
    return (Num1); 
  }
