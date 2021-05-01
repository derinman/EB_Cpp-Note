#include <iostream>
#include <cstdlib>
using namespace std;
	 
class Student           //宣告類別
{
    private:                //私用資料成員
        int StuID;          
	public:
		void input_data();    //宣告成員函數的原型
		void show_data();	
};
void Student::input_data()  //實作input_data函數
{
    cout << "請輸入您的成績：" ;
    cin >> StuID;
}
void Student::show_data()   //實作show_data函數
{
    cout << "成績是：" << StuID << endl; 
}
int main()
{
    Student stu1;
    stu1.input_data();
    stu1.show_data();
	   
    return 0;
}
