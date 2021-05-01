#include<iostream>
	
using namespace std;
	
int main()
{
    int num;  // 宣告整數變數num
    cout<<"輸入num的值：";
    cin>>num; // 輸入變數num的值
    try
    {
        // 假如變數num值大於10而小於20時，就丟出一個整數型別的例外
        if ((num > 10) && (num < 20))  
        {
            throw 1;
        }
        // 假如變數num值小於10時，就丟出一個字元型別的例外
        if (num < 10)
        {
            throw '*';
        }
    }

    catch(...) // 捕捉所有的例外
    {
        cout<<"目前是由catch(...)捕捉到例外"<<endl;
    }
		
		
    return 0;
}
