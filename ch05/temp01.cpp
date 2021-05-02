#include <iostream>
using namespace std;

int main(){
    int num[2][3][3]={
                        { 
                        {33,45,67},
                        {23,71,56},
                        {55,38,66}
                        },
                        {
                        {21,9,15 },
                        {38,69,18},
                        {90,101,89}
                        }
                    };
    int min;
    int i,j,k;

    for (i=0; i<2; i++){
        for (j=0; j<3; j++){
            for (k=0; k<3; k++){
                if(i==0 && j==0 && k==0){
                    min = num[i][j][k];
                    continue;
                }
                if(num[i][j][k]<min){
                    min=num[i][j][k];
                }
            }
        }
    }
    
    cout<<"min= "<<min;
    return 0;
}