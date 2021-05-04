#include <iostream>
using namespace std;

int main(){

    int i;

    int matrix1[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int matrix2[3][3]={{0,0,0},{1,1,1},{2,2,2}};
    int matrix3[3][3];

    int *ptr1;
    int *ptr2;
    int *ptr3;

    ptr1 = *matrix1;
    ptr2 = *matrix2;
    ptr3 = *matrix3;

    for (i=0; i<9; i++){
        //cout<< *(ptr1+i) + *(ptr2+i);
        *(ptr3+i) = *(ptr1+i) + *(ptr2+i);
    }
    
    
    for (i=0; i<9; i++){
        cout<< *(ptr3+i)<<endl;
    }
    
    return 0;
}