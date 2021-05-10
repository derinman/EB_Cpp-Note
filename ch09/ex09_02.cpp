#include <iostream>

using namespace std;
#define TRUE 1

int main()
{
    #ifdef TRUE //假如 TRUE未定義     
    cout<<"TRUE已定義了，常數值為1"<<endl;
    #endif
    
    #ifndef FALSE//假如 FALSE未定義     
    cout<<"FALSE未定義，定義其等於常數0"<<endl;    
    #define FALSE 0 
    #endif    
    cout<<"TRUE ="<<TRUE<<"  FALSE ="<<FALSE<<endl;    
     
    return 0;
}
