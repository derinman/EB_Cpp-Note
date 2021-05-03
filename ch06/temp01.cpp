#include <iostream>>
using namespace std;

int main(){
    int n1 = 10;
    int* ptr1 = &n1;
    int* ptr2 = &n1;

    cout<< ptr1<<endl;
    cout<< ptr2;

    return 0;
}