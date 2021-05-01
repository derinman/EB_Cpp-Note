#include <iostream>                                  // 含括標頭檔 <iostream.h>

using namespace std;

void Int_swap(int *, int *);                           // Int_swap() 函數宣告 

int main()                                        // 程式由此開始
{
     int Num_1=10, Num_2=20;                           // 定義整數變數 Num_1、Num_2

     cout << "呼叫 Int_swap 函數前: "                  // 顯示訊息
		  << "Num_1= " << Num_1 << " Num_2= " << Num_2;
	 cout << endl;
     
	 Int_swap(&Num_1, &Num_2);                         // 傳址呼叫函數 Int_swap()

     cout << "呼叫 Int_swap 函數後: "                  // 顯示訊息
		  << "Num_1= " << Num_1 << " Num_2= " << Num_2;
	 cout << endl;
	 
	 
	 return 0;
}

void Int_swap(int *pN_1, int *pN_2)                    // 定義 Int_swap 函數
{
	int N_tmp;                                         // 定義整數變數 N_tmp

	N_tmp=*pN_2;
	*pN_2=*pN_1;
	*pN_1=N_tmp;

    cout << "   Int_swap() 函數內: "                   // 顯示訊息
		 << "*pN_1= " << *pN_1 << " *pN_2= " << *pN_2;
	cout << endl;
}
