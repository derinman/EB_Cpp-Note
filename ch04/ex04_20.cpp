#include <iostream>

using namespace std;

int main()
{
   int i,a,n,sum=1;
   cout<<"輸入a="; 
   cin>>a;
   cout<<"輸入n="; 
   cin>>n;
   for(i=1;i<=n;i++)
   sum*=a;
   cout<< sum;
    
   
   return 0;
   }

