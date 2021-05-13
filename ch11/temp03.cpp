#include <iostream>
using namespace std;

class list{
    public:
        char name[10];
        int score;
        class list *next;
};

int main(){

    int i;
    list st[5];
    list *ptr = new list;

    ptr = &st[0];

    for (i=0; i<5; i++){
        cout<<"input no."<<i+1<<" student's name: ";
        cin>>st[i].name;
        cout<<"input "<<st[i].name<<"'s score: ";
        cin>>st[i].score;

        if (i != 4 ){
            st[i].next = &st[i+1];
        }else{
            st[i].next = NULL;
        }
    }

    while(ptr!=NULL){
        cout<<ptr->name<<"'s score is "<<ptr->score<<endl;
        ptr = ptr->next;
    }

    return 0;
}