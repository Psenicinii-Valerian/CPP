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
		cout<<"   V"<<setw(2)<<i+1<<setw(2)<<"["<<TAB[i][0]<<"] :: ";
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
	
	//contor 
		for(int i=0, CR; i < n; i++ )
   {	
   		CR=0;
   		
     	for(int j=1; j <= TAB[i][0] ; j++)
     	{
       		if ( TAB[i][0] == TAB[i][j] )   CR++;
     	}
     	
    	TAB[n+1][i]=CR;
   }
	
	cout<<endl;
	
	cout<<"  V contor "<<"["<<n<<"] :: ";
	for ( int j=0; j < n ; j++)
	{
		cout<<setw(3)<<TAB[n+1][j];
	}	
	
	cout<<endl<<endl;
	
	//aranjam crescator vectorii
	bool k;
	
	for( int i=0, temp; i < n; i++ )
	
   {
   		k=true;
   		while(k)
		{	
			k=false;
     		for(int j=1; j <= TAB[i][0] ; j++)
     		{
       			if  ( TAB[i][j]>TAB[i][j+1])
              	 	{
               	     	temp=TAB[i][j];
               	     	TAB[i][j]=TAB[i][j+1];
                	    TAB[i][j+1]=temp;
                	    k=true;
     				}
     	
    		}
   		}
   
   }
	
	
	//show vector
	for ( int i=0; i<n; i++)
	{
		cout<<"  V"<<setw(2)<<i+1<<setw(2)<<"["<<TAB[i][0]<<"] :: ";
		for ( int j=2; j <= TAB [i][0] ; j++)
		{
			cout<<setw(4)<<TAB[i][j];
		}		
		cout<<endl;	
	}
   
    cout<<endl;
    
    
    //Tablouri multidimensionale (3D)
    
    //tip_date nume_multime [Nr_max_de_matrici] [Nr_max_linii] [Nr_max_coloane]; [z] [x] [y]
    
    //elem. - nume_multime [nr_matricei] [poz_x_linie] [poz_y_coloana];
    
  	int CUB [50] [10] [10], V[100];
  	
  	for ( int z=0; 	z<10; z++ )
  	{
  		for ( int i=0; i<10; i++ )
  		{
  			for ( int j=0; j<10; j++ )
  			{
  				CUB [z][i][j]=rand()%10;
			}
  		}
	}
    
    
    for ( int z=0; 	z<10; z++ )
  	{
  		cout<<"Matricea ["<<z+1<<"]"<<endl<<endl;
  		for ( int i=0; i<10; i++ )
  		{
  			for ( int j=0; j<10; j++ )
  			{
  				cout<<setw(3)<<CUB [z][i][j];
			}
			cout<<endl;
  		}
  		cout<<endl;
	}
	
	cout<<endl;

	//suma fiecarei matrici
		for ( int z=0, suma; z<10; z++ )
  	{
  		suma=0;
  		for ( int i=0; i<10; i++ )
  		{
  			for ( int j=0; j<10; j++ )
  			{
  				suma += CUB [z][i][j];
			}
  		}
  		cout<<" Suma matricei ["<<z+1<<"]="<<suma<<endl;
	}
    
    cout<<endl; 
    
    //valoare maxima a fiecarei matrici
    	for ( int z=0, max; z<10; z++ )
  	{
  		max = INT_MIN;
  	  //max = -1
  	  //max = CUB [z][0][0] 
  		for ( int i=0; i<10; i++ )
  		{
  			for ( int j=0; j<10; j++ )
  			{
  				if ( max < CUB [z][i][j] ) max=CUB [z][i][j];
			}
  		}
  		cout<<" Maximul matricei ["<<z+1<<"]="<<max<<endl;
	}
    
    cout<<endl; 
    
return 0;
}
