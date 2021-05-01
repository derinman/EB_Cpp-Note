#include<iostream>

using namespace std;

void kgtopound(double);//函數原型宣告 
 
int main()
{	
	double kg;
    extern double pound;
	//利用extern修飼詞,可引用宣告於函數下方的外部變數  
	cout<<"公斤轉英磅"<<endl;
	cout<<"-----------------------------------"<<endl;
    cout<<"一公斤="<<pound<<"英磅"<<endl;
    cout<<"-----------------------------------"<<endl;
	cout<<"請輸入公斤數:";
 	
    cin>>kg;;
   	kgtopound(kg);
   	
    
 	return 0;	
}//宣告在函數外的外部變數
   double pound=2.204634;
   
void kgtopound(double kg)
{
     
	cout<<kg<<"公斤"<<"="<<pound*kg<<"英磅"<<endl;
	// 此函數在外部變數pound的下方,因此可直接使用 *
}


