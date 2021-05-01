#include <iostream>

using namespace std;

int main(){
    int day=0,dist=0;

    while(dist<=10){
        day++;
        dist+=2;
        if(dist>=10)
            break;
        dist-=1;
    }

    cout<<day;

    return 0;
}