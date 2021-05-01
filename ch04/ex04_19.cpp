#include <iostream> 
                             
using namespace std;
                 
int main()
{
	 int Num_1, Num_2, Tmp_Num;            

	 cout<<"求最大公因數(g.c.d):"<<endl;
	 cout<<"輸入兩個正整數:";
	 cin>>Num_1;
     cin>>Num_2;                  

	 if (Num_1 < Num_2)                   
	 {                                     
		 Tmp_Num=Num_1;                           
		 Num_1=Num_2;
		 Num_2=Tmp_Num;
	 }

	 while (Num_2 != 0)                
	 {                                      
	 	Tmp_Num=Num_1 % Num_2;            
		Num_1=Num_2;                              
		Num_2=Tmp_Num;
	 }	  
     cout<<"最大公因數(g.c.d):"<<Num_1<<endl; 
       
      
      return 0;                    
}
