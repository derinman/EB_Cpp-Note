#include <iostream>

using namespace std;

int main()
{
	int x=1, sum=1000;
	while(sum>0) //while迴圈 
    {
	  sum-=x;
	  x++;
	}
	cout<<x-1<<endl;
	
	
	return 0;	
}
