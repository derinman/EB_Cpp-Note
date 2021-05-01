#include <iostream>

using namespace std;

class Student                  //宣告類別
{
private:                       //私用資料成員
	int StuID;          
	float Score_E,Score_M,Score_T,Score_A;
public:                        //公用資料成員
    Student();                  //宣告預設建構子
	Student(int id,float E,float M);  //宣告三個參數的建構子
	void show_data();	          //宣告成員函數的原型
};
Student::Student()               //建構子 設定資料成員的初始值於Student類別之外
{
	StuID = 920101;
	Score_E = 60;
    Score_M = 80;
}
Student::Student(int id,float E,float M)         //使用參數設定初始值
{
	StuID=id;              //指定StuID=參數id
	Score_E=E;             //指定Score_E=參數E
	Score_M=M;            //指定Score_M=參數M
}
void Student::show_data()          //實作show_data函數
{
	Score_T = Score_E + Score_M;
	Score_A = (Score_E + Score_M)/2;
	cout << "===================" << endl;
	cout << "學生學號：" << StuID << "" << endl; 
	cout << "總分是" << Score_T << "分,平均是" << Score_A << "分" << endl;
}
int main()
{
	Student stud;               //宣告Student類別的物件，此時會呼叫無參數的建構子
	stud.show_data();           //呼叫show_data成員函數
	Student stud1(920102,30,40);    //宣告Student類別的物件，此時會呼叫三個參數的建構子
	stud1.show_data();           //呼叫show_data成員函數
	
	
	return 0;
}
