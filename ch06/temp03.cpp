#include <iostream>
using namespace std;

int main(){
    
    int arr1[2][3]={{10,20,30},{1,2,3}};
    
    int i, j;
    int *ptr=*arr1;

    for (i=0; i<2;i++){
        for(j=0; j<3;j++){
            cout<<arr1[i][j]<<endl;
        }
    }
    
    for (i=0; i<6;i++){
        cout<<*(ptr+i)<<endl;
    }

    return 0;
}