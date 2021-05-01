#include <iostream>
using namespace std;

int main(){
    int i;
    for (i=1; i<=70; i++){
        if (i%5==0||i%7==0){
            if (!(i%5==0 && i%7==0)){
                cout<<i<<endl;
            }
        }
    }

    return 0;
}