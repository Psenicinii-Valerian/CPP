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
   
	//valoarea automata a acestui cod

	 for ( int i=0; i<n; i++)
   {
   		TAB[i][0] = rand()%10+10;
		for ( int j=1; j <= TAB [i][0] ; j++)
		{
   			TAB[i][j] = rand()%15+3;	
		}
   }
	
	cout<<endl;
	
	//show matrix
	for ( int i=0; i<n; i++)
	{
		cout<<"  V"<<setw(2)<<i+1<<setw(2)<<"["<<TAB[i][0]<<"] :: ";
		for ( int j=1; j <= TAB [i][0] ; j++)
		{
			cout<<setw(4)<<TAB[i][j];
		}		
		cout<<endl;	
	}
   
    cout<<endl;
    
    //suma per vector
 	for(int i=0, suma; i < n; i++ )
   {	
   		suma=0;	
     	for(int j=1; j <= TAB[i][0] ; j++)
     	{
       		suma += TAB[i][j];
     	}
    TAB[n][i]=suma;
   }
	
	cout<<"  V suma "<<"["<<n<<"] :: ";
	for ( int j=0; j < n ; j++)
	{
		cout<<setw(4)<<TAB[n][j];
	}	
		
	cout<<endl;	
	cout<<endl;
	
	int x,y;
	cout<<"  Dati x=";
	cin>>x;
	cout<<endl;
	cout<<"  Dati y=";
	cin>>y;
	
	x--;
	y--;
	
	int q,c;
	
    if ( TAB[x][0] >= TAB[y][0] ) c=x;
	else c=y; 
	
    for ( int i=1, temp; i <= TAB[c][0]; i++)
    
    	{
    		temp= TAB[x][i];
    		TAB[x][i]=TAB[y][i];
    		TAB[y][i]=temp;
        }
        	q = TAB[x][0];
        	TAB[x][0] = TAB[y][0];
        	TAB[y][0] = q;
			   
   	cout<<endl;
    
	
	//show matrix
	for ( int i=0; i<n; i++)
	{
		cout<<"  V"<<setw(2)<<i+1<<setw(2)<<"["<<TAB[i][0]<<"] :: ";
		for ( int j=1; j <= TAB [i][0] ; j++ )
		{
			cout<<setw(4)<<TAB[i][j];
		}		
		cout<<endl;	
	}
	
return 0;
}
