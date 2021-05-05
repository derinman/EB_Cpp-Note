#include <iostream>
using namespace std;

int main() {
    int i,j,  count;

    int temp;
    
    cout<< "input the amount of numbers:"<<endl;
    cin>> count;

    int *ptr = new int[count];

    for (i=0; i<count; i++ ){
        cout<<"input number"<<i+1<<endl;
        cin >>*(ptr+i); 
    }

    //sort
    for (i=0; i<(count-1);i++){
        for (j=i+1; j<count; j++){
            if (*(ptr+i) < *(ptr+j) ){
                temp=*(ptr+j);
                *(ptr+j) = *(ptr+i);
                *(ptr+i) = temp;
            } 
        }
    }

    for (i=0; i<count; i++){
        cout<< *(ptr+i)<< "\t";
    }

    delete [] ptr;  

    return 0;
}