#include  <iostream>
using namespace std;

int main(){
    int y;
    
    cout<<"input the year:";
    cin>>y;

    if (y%400==0){
        cout<<"y";
    }else if (y%100==0){
        cout<<"n";
    }else if (y%4==0){
        cout<<"y";
    }else{
        cout<<"n";
    }

    return 0;
}