#include <iostream>
using namespace std;

int main(){
    char str1[20]="great ";
    char str2[20]="again";
    char str3[80];

    int i;
    int record=0;
    //cout<<str1<<str2;
    
    for (i=0; str1[i]!='\0'; i++,record++){
        str3[record]=str1[i];
    }

    for (i=0; str2[i]!='\0'; i++,record++){
        str3[record]=str2[i];
    }
    str3[record]='\0';
    cout<<str3<<endl;
    
    return 0;
}