#include <iostream>                                            
 
using namespace std;

template <class T1, class T2>                                    // 宣告樣版形式參數 T1, T2 
void Cal_Num(T1 a, T2 b)                                         // 宣告樣版函數 Cal_Num() 
{
	 /* 進行參數 a 與 b 的四則運算，並透過強制型態轉換顯示結果。 */
     cout << a << " + " << b << " = " << (double) a+b << endl;
	 cout << a << " - " << b << " = " << (double) a-b << endl;
	 cout << a << " * " << b << " = " << (double) a*b << endl;
	 cout << a << " / " << b << " = " << (double) a/b << endl;
}

int main()
{
     int x=4;                                // 定義整數變數 x
	 float y=2.5;                          // 定義浮點數變數 y
	 double z=8.442;                   // 定義倍精度變數 z

	 Cal_Num(x, y);            // 呼叫函數 Cal_Num()
	 Cal_Num(y, z);
     cout << endl;
     
     
     return 0;
}
