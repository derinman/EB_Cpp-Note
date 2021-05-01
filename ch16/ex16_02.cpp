#include <iostream>

using namespace std;


template <class type>//宣告樣版類別，並宣告成員變數即成員函數
class cube
{
  private:
        type length;//宣告私有成員 
        type width;
        type height;
        type volume;
  public://宣告成員函數 
        void set_length(type len)
        {
            length = len;//設定長 
        }
        void set_width(type wid)
        {
            width = wid;//設定寬 
        }
        void set_height(type hei)
        {
            height = hei;//設定高 
        }
        void calculate();
        void show_volume();
};
//---------------------------------
template <class type>
void cube<type>::calculate()//成員函數在class外部宣告
{
    volume = length*width*height;
}
//---------------------------------
template <class type>
void cube<type>::show_volume()//成員函數在class外部宣告
{
    cout<<"長 = "<<length<<"  ";
    cout<<"寬 = "<<width<<"  ";
    cout<<"高 = "<<height<<endl;
    cout<<"立方體積 = "<<volume<<endl;
}
//---------------------------------
int main()
{    
    cube<int> cubeA;
    cubeA.set_length(10);
    cubeA.set_width(20);
    cubeA.set_height(3);
    cubeA.calculate();
    cubeA.show_volume();
    
    
    return 0;
}

