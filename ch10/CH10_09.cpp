#include <iostream>                          

using namespace std;

int main()
{
    enum Drink                                  
    {
        coffee=25,
        milk=20,
        tea=15,
        water
    }; //宣告與定義Drink 列舉型態 
    enum Drink c_drink; //定義 Drink 列舉型態變數 corp_drink 

    c_drink=coffee;     //指定變數 c_drink 值為 coffee 
    cout<<"列舉型態的 coffee 值="<<c_drink<<endl ;

    c_drink=milk;      // 指定變數 c_drink 值為 milk 
    cout<<"列舉型態的 milk 值="<<c_drink<<endl;

    c_drink=water;     //指定變數 c_drink 值為 water 
    cout<<"列舉型態的 water 值="<<c_drink<<endl;
     
     
    return 0;
}
