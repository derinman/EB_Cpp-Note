#include <iostream>
using namespace std;

struct employee {
    char name[10];
    int  salary;
};

void whoIsManager(struct employee  &, struct employee &);

int main(){

    struct employee em[2];
    int i;

    for (i=0; i<2; i++){
        cout<<"Input the name of employee: ";
        cin>>em[i].name;
        cout<<"Input the salary of "<<em[i].name<<" : ";
        cin>>em[i].salary;
    }

    whoIsManager(em[0],em[1]);


    return 0;
}


void whoIsManager(struct employee &ref1, struct employee &ref2){

    if(ref1.salary>ref2.salary){
        cout<<ref1.name<<" is manager. ";
    }else{
        cout<<ref2.name<<" is manager. ";
    }

}
