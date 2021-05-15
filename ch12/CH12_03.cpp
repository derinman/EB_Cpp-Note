#include <iostream>  
 
using namespace std;

class Share;  

class Friend  
{  
public:  
    void Access(Share* s);//在類別Friend中宣告Access成員函數       
};  

class Share  
{  
    friend void Friend::Access(Share* s); 
    //宣告成員函數Access為朋友函數 
private:  
    int a;    void printA(){ cout<<"使用Share的private方法"<<endl; }  
protected:  
    int b;    void printB(){ cout<<"使用Share的protected方法"<<endl; }  
public:  
    int c;  
    Share()  {  a = 1;  b = 2;  c = 3; 	}  
    void printC(){ cout<<"使用Share的public方法"<<endl; } 
};  

void Friend::Access(Share* s)
{  
    s->a = s->b = s->c = 5;  
    cout<<"a="<<s->a<<" b="<<s->b<<" c="<<s->c<<endl;  
    cout<<"--------------------------------------"<<endl;
    s->printA();  
    s->printB();  
    s->printC();  
} //定義類別Friend成員函數Access的內容         

int  main()  
{  
    Share sh;  
    Friend fr;  
    fr.Access(&sh); //因為參數是Share型態的物件指標，所以必須傳入&sh 
       	
    return 0;
}
