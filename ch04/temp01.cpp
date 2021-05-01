#include <iostream>
using namespace std;

int main(){
    int phrs;
    
    cout<<"input your parking hrs:";
    cin >> phrs;
    if (phrs<=1){
        cout<<"free!";
    }else{
        cout<<"payment is "<<phrs*50<<" dollars";
    }

    return 0;
}