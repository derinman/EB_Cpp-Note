#include <iostream>
using namespace std;

int main(){
    char string1[10]="happy";
    char string2[10];
    int i;
    
    for (i=0; i<10; i++){
        string2[i] = string1[i];
    }

    for (i=0; i<10; i++){
        cout<<string2[i];
    }

    return 0;
}