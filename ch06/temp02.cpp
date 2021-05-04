#include <iostream>
using namespace std;

int main(){
    int i;

    int arr1[]={10, 20,30, 40, 50};
    double arr2[]={10.0, 20.0, 30.0, 40.0, 50.0};

    for (i=0; i<5; i++){
        cout<<(arr1+i)<<endl;
    }

    for (i=0; i<5; i++){
        cout<<arr2+i<<endl;
    }
}