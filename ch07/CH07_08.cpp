#include <iostream>

using namespace std;
char* Strcat(char*, char*);   //字串串接函數原型宣告 

int main( void )
{
    char str1[80];
    char str2[80];

    cout<<"請輸入一英文字串：";
    cin>>str1;
    cout<<"請輸入一串接字串：";
    cin>>str2;
    cout<<"字串串接: "<<Strcat(str1, str2);
    
    return 0;
}

//引數：str1與str2串接      
//傳回值：傳回串接結果str1   
char* Strcat(char* str1, char* str2)//傳回值為字串指標 
{
    int i = 0;
    int j = 0;

    while ( *(str1+i) != '\0' )  //尋找str1的結束字元'\0'位置 
        i++;
    while ( *(str2+j) != '\0' )
    {
        *(str1+i+j) = *(str2+j);//str1字串開史始逐字元串接 
        j++;
    }

    *(str1+i+j) = '\0';    //記得加上空字元 

    return str1;
}
