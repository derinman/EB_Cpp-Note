#include<iostream>

using namespace std;
//引用時間函數的表頭檔
#include<ctime>

int mul(int,int);

int main(){	
	register int r_i,r_j;
    int i,j;  
	double sum=0;
	time_t r_start_time, r_end_time, start_time, end_time;//長整數時間資料型態 

  	cout<<"暫存迴圈開始"<<endl;
    start_time=time(NULL); 
    
    for(r_i=1; r_i<=10000;r_i++){
        for(r_j=1;r_j<100000;r_j++){
	        sum=sum+mul(r_i,r_j);//迴圈計算過程 
	    }
    }
    
    end_time=time(NULL);//time函數會回應前目前的時間到秒數 
 	
    cout<<"暫存迴圈結束,sum="<<sum<<endl;
	cout<<"暫存迴圈的執行時間為"<<difftime(end_time,start_time)<<endl;
    
    sum=0;
    
    cout<<"迴圈開始"<<endl;
    start_time=time(NULL); 
    
    for(i=1; i<=10000;i++){
        for(j=1;j<100000;j++){
	        sum=sum+mul(i,j);//迴圈計算過程 
	    }
    }
    
    end_time=time(NULL);//time函數會回應前目前的時間到秒數 
 	
    cout<<"迴圈結束,sum="<<sum<<endl;
	cout<<"迴圈的執行時間為"<<difftime(end_time,start_time)<<endl;

    return 0;
}

int mul(int a,int b)
{
    return a*b;
}
