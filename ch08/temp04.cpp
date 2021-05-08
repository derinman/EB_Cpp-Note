#include <iostream>
#include <stdlib.h>
using namespace std;



int main(int argc,char *argv[]){
    
    int i;
    int scores[5];


    if(argc ==1){
        cout<<"please input 6 scores."<<endl;
    }else if(argc<7){
        cout<<"please input 6 scores, your input is less than 6.";
    }else{
        cout<<"the scores you input is below:"<<endl;
        for(i=0; i<argc; i++){
            cout<<argv[i]<<"\t";
        }
    }
    cout<<endl;

    if(argc==7){
        for(i=0;i<6;i++){
            scores[i]=atoi(argv[i]);
        }

        for(i=1;i<6;i++){
            cout<<scores[i]<<"\t";
        }
    }

    return 0;
}