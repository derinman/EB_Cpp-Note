#include <iostream>  

using namespace std;
                     
int main()
{
     cout<<"列出數值1~70間5的倍數與7的倍數，但不包含5與7的公倍數:"<<endl;

	 for (int count=1; count <= 70; count++)			  
	 {
		 if ( ((count % 5) == 0) && ((count % 7) == 0))    
			 continue;  //若是5與7的公倍數,則繼續下一層                                  
		 else if ( (count % 5) == 0 )                       
			 cout<<count<<' ';  //5的倍數                        
		 else if ( (count % 7) == 0)                   
			 cout<<count<<' '; //7的倍數                   
	 }
	cout<<endl;
	
	
    return 0;                                      
}
