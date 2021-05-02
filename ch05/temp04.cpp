#include <iostream>
using namespace std;

int main(){

    int grades[10];
    int sum=0, failCount=0;
    double avg=0.0;
    int i;
    
    cout<<"input 10 grades:";
    for (i=0; i<10; i++){
        cin>>grades[i];
    }    
    for (i=0; i<10; i++){
        sum += grades[i];
        if (grades[i]<60){
            failCount++;
        }
    }

    avg=(double)sum/10;

    cout<<"sum: "<<sum<<endl;
    cout<<"avg: "<<avg<<endl;
    cout<<"fail: "<<failCount<<endl;
    return 0;
}