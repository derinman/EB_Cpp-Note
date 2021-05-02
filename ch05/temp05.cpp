#include <iostream>
using namespace std;

int main(){
    char str[20];
    char revStr[20];
    int count=0;
    int i;

    cout<<"input a string:"<<endl;
    cin>>str;
    
    for (i=0; str[i]!='\0'; i++){
        count++;
    } 

    for (i=0; i<count; i++){

    }

    cout<<"reverse string: "<<count<<endl;

    return 0;
}