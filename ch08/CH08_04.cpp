#include <iostream>

using namespace std;

int main(int argc, char *argv[])//命令列引數傳遞宣告 
{
    int i;
    if( argc == 1 )//只有程式名稱,沒有其它參數 
        cout<<"未指定參數！"<<endl;
    else
    {
        cout<<"你輸入了"<<argc-1<<"個參數"<<endl;
        cout<<"所輸入的參數為："<<endl;
        for( i = 0; i < argc; i++ )
            cout<<argv[i]<<endl;//列印 argv陣列的內容 
    }
    
    return 0;
}
