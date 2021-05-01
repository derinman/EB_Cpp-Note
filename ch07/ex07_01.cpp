#include<iostream>

using namespace std;
//函數原型宣告
int area(int,int);
void draw_rect(int,int);

int main()
{	
	int w, h,rect_area;
    //函式數呼叫
	//設定輸入寬與長的數字
	cout<<"請輸入寬:";
	cin>>w;
	cout<<"請輸入長:";
	cin>>h;
	rect_area=area(w,h);//需要傳回值的函數呼叫 
	//函數呼叫
	cout<<"長方形的面績="<<rect_area<<endl; 
    draw_rect(w,h);//不需要傳回值的函數呼叫
    
    
	return 0;
}
int area(int a,int b)
{
 return a*b;
}//計算長方形面績的函數  
void draw_rect(int x,int y)
{   
	int i,j;
	//設定數字不得為小於等於零
	if(x<=0 || y<=0)
	{ 
		printf("數字不可小於等於零\n");
		return ;
	}
	//設定輸出的格式
	for(i=0; i<y; i++)
	{
		for(j=0; j<x; j++)
		{
		printf("*");
		}
		printf("\n");
	}
} // 畫出長方形圖形的函數 
