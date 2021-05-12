#include <iostream>
using namespace std;


struct student {
    char name[10];
    int eng;
    int math;
};

double calAvg(int a, int b);

int main(){

    struct student std[3];
    int i;

    for (i=0;i<3;i++){
        cout<<"please input the name of student: ";
        cin>>std[i].name;
        cout<<"please input the english score of "<<std[i].name<<" : ";
        cin>>std[i].eng;
        cout<<"please input the math score of "<<std[i].name<<" : ";
        cin>>std[i].math;
    }
      

    for (i=0;i<3;i++){
        cout<<std[i].name<<"'s average score is ";
        cout<<calAvg(std[i].eng, std[i].math)<<endl;
    }

    return 0;
}

double calAvg(int a, int b){
    return ((double)a + (double)b)/2;
}