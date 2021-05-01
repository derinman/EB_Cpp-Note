#include <iostream>

using namespace std;

void print_word1(const char*);  //函數原型宣告 
void print_word2(const char*);  //函數原型宣告 

int main()
{
    void (*ptr)(const char*); //函數指標宣告 

    ptr = print_word1;  // 將print_word1的記憶體位址指定給ptr 函數指標
    ptr("hello");       //使用ptr()執行print_word1 ()的功能 
    cout<<"------------------------------------"<<endl;
    ptr = print_word2;  // 將print_word2的記憶體位址指定給ptr 函數指標
    ptr("Good bye!");       //使用ptr()執行print_word2()的功能 

    
    return 0;
}

void print_word1 (const char* str)
{
    cout<<"這是print_word1函數"<<endl; 
    cout<<str<<endl;
}

void print_word2(const char *str)
{
    cout<<"這是print_word2函數"<<endl;
    cout<<str<<endl;
}

