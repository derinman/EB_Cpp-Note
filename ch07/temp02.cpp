#include <iostream>
using namespace std;

void sort(int*,int);

int main(){

    int i;
    int count;

    cout<<"please input the amount of grades:"<<endl;
    cin>>count;

    int *grades=new int[count];

    for (i=0; i<count;i++){
        cout<<"please input no."<<i+1<<" grade: ";
        cin>>*(grades+i);
    }
    
    
    //sort grades
    sort(grades,count);

    for (i=0; i<count;i++){
        cout<<"no."<<i+1<<" grade is: "<<*(grades+i)<<endl;
    }
    return 0;
}

void sort(int* arr, int count){
    int i, j, temp;

    for(i=0; i<count-1; i++){
        for (j=i+1;j<count; j++){
            if(*(arr+i)<*(arr+j)){
                temp = *(arr+j);
                *(arr+j)=*(arr+i);
                *(arr+i)=temp;
            }
        }
    }
}  