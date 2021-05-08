#include <iostream>

using namespace std;


void hanoi(int, int, int, int);	//函數原型宣告 
int step=0;

int main(){  
    
    int j;
    cout<<"請輸入盤子數量：";
    cin>>j;		
    hanoi(j,1,2,3);
    
    cout<<"最少步數："<<step;

    return 0;
}
    
void hanoi(int n, int p1, int p2, int p3){ 
    if (n==1){
        cout<<"盤子從"<<p1<<"移到"<<p3<<endl;
        step++;
    }else{  
        hanoi(n-1, p1, p3, p2);
        cout<<"盤子從"<<p1<<"移到"<<p3<<endl;
        step++;
        hanoi(n-1, p2, p1, p3);	
   	}
}