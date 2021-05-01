#include <iostream>

using namespace std;

template <class arrayType,int array_size>//宣告非型態參數函數樣版
void showArray(arrayType (&array)[array_size])//不需加資料型態 
{
    int i;
    cout<<"template 非型態參數:"<<endl;
    cout<<"array_size="<<array_size<<endl<<endl; 
    for(i=0;i<array_size;i++)
    {
        cout<<"array["<<i<<"]="<<array[i]<<endl;//列印陣列元素內容 
    }
    cout<<endl;
}
int main()
{   
    int a[]={20,23,56,77,88};//宣告整數陣列 
    showArray(a);//呼叫樣板版函數 
    
    
    return 0;
}

