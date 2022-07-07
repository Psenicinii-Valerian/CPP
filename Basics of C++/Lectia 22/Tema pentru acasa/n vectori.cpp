#include <iomanip>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <conio.h>
#include <cmath>

using namespace std;

int main()
{
   srand(time(0));
	
   int TAB[500][1000],n;
   cout<<"Enter nr. vectori = ";
   cin>>n;
   
   	
//	//valoarea automata a acestui cod
//
//	 for ( int i=0; i<n; i++)
//   {
//   		TAB[i][0] = rand()%10+10;
//		for ( int j=1; j <= TAB [i][0] ; j++)
//		{
//   			TAB[i][j] = rand()%10;	
//		}
//   }
//	
//	cout<<endl;
//	
//	//show matrix
//	for ( int i=0; i<n; i++)
//	{
//		cout<<"   V"<<setw(2)<<i+1<<setw(2)<<"["<<TAB[i][0]<<"] :: ";
//		for ( int j=1; j <= TAB [i][0] ; j++)
//		{
//			cout<<setw(3)<<TAB[i][j];
//		}		
//		cout<<endl;	
//	}
		
		
   for( int i=0; i < n; i++ )
   {
     cout<<" Pentru V"<<i+1<<" Enter nr. elemente = ";
     cin>>TAB[i][0];
     
    	 for(int j=1; j <= TAB[i][0] ; j++)
     	{
      		cout<<" Enter valoarea V"<<setw(2)<<i+1<<setw(2)<<"["<<j<<"]= ";
        	cin>>TAB[i][j];
        
     	}
   }
   
 	cout<<endl;
 	
 	for(int i=0; i < n; i++ )
   {
		cout<<"  V"<<setw(2)<<i+1<<setw(2)<<"["<<TAB[i][0]<<"] :: ";
     	for(int j=1; j <= TAB[i][0] ; j++)
     {
        cout<<setw(3)<<TAB[i][j];
     }
      	cout<<endl;
   }
	

return 0;
}
