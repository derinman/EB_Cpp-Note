#include <iostream>

using namespace std;

int main(){

    int i;
    const int AMOUT=5;


    struct student {
        char name[10];
        int gender;
        struct student *next;
    };
    
    struct student *ptr;
    struct student myS[AMOUT];

    //setting student's data
    for (i=0; i<AMOUT; i++){
        cout<<"input the name of student no."<<i+1<<": "<<endl;
        cin>>myS[i].name;
        cout<<"input the gender of student no."<<i+1<<":(1 means male, 0 means female)"<<endl;
        cin>>myS[i].gender;
        
        //set next
        if (i != AMOUT-1){
            myS[i].next = &myS[i+1];
        }else{
            myS[i].next=NULL;
        };
    }

    cout<<endl;

    ptr = &myS[0];
    i = 0;
    while (ptr != NULL){
        cout<< ptr->name<<" is "<<ptr->gender<<endl;
        ptr = ptr->next;
    }

    ptr = &myS[0];
    while (ptr != NULL){
        cout<< (*ptr).name<<" is "<<(*ptr).gender<<endl;
        ptr = (*ptr).next;
    }
    return 0;
}
