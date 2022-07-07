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
	
/*	 int CUB [50] [10] [10], V[100];
  	
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
    */
    
    int SET [24][10][10][10];
    
/*    for ( int q=0; q<24; q++)
    {
    	for ( int z=0; 	z<10; z++ )
 		{
  			for ( int i=0; i<2; i++ )
  			{
  				for ( int j=0; j<2; j++ )
  				{
  					SET [q][z][i][j]=rand()%10;
				}	
  			}
     	}
    }
    
    
    for ( int q=0; q<24; q++)
    {
    	cout<<" CUB ["<<q+1<<"]"<<endl<<endl;
   		for ( int z=0; 	z<10; z++ )
  		{
  			cout<<" Matricea ["<<z+1<<"]"<<endl<<endl;
  			for ( int i=0; i<2; i++ )
  			{
  				for ( int j=0; j<2; j++ )
  				{
  					cout<<setw(3)<<SET [q][z][i][j];
				}
				cout<<endl;
  			}
 				cout<<endl;
		}
	}	

	*/
	
	//valoarea manuala inserare SET
	
	
	int qn, zn, n, m;
	
	cout<<" Enter nr. cuburi = ";
	cin>>qn;
	cout<<" Enter nr. matrici = ";
	cin>>zn;
	cout<<" Enter nr. lnii = ";
	cin>>n;
	cout<<" Enter nr. coloane = ";
	cin>>m;
	cout<<endl;
	
	    for ( int q=0; q<qn; q++)
    {
    	for ( int z=0; 	z<zn; z++ )
  		{
  			for ( int i=0; i<n; i++ )
  			{
  				for ( int j=0; j<m; j++ )
  				{
  					SET [q][z][i][j]=rand()%10;
				}	
  			}
     	 }
    }
    
    
    for ( int q=0; q<qn; q++)
    {
    	cout<<" CUB ["<<q+1<<"]"<<endl<<endl;
   		for ( int z=0; 	z<zn; z++ )
  		{
  			cout<<" Matricea ["<<z+1<<"]"<<endl<<endl;
  			for ( int i=0; i<n; i++ )
  			{
  				for ( int j=0; j<m; j++ )
  				{
  					cout<<setw(3)<<SET [q][z][i][j];
				}
				cout<<endl;
  			}
  			cout<<endl;
		}
	}	
	
	


	// 1. x (enter user) max, in fiecare 1 vector din 1 cub SET[0][0][0][j]
	
	// pas 1. algortim max
	// pas 2. de x ori
	// pas 3. depistam pozitia maximului
	// pas 4. salvarea in vector a pozitiei elementului maxim
	// pas 5. verificam daca pozitia elementului maximal nu a fost depistat
	// pas 6. excluderea elementului maximal	
		
		for ( int j=0; j<m; j++ ) 
	{
		cout<<setw(3)<<SET[0][0][0][j];
	}
	
	cout<<endl<<endl;
	
	int x, max, k=0, poz;
	int vpoz[10];
	bool verificare;
	
	cout<<" Enter nr. maximuri = ";
	cin>>x;	
	
	cout<<endl;
	
	while ( k < x )
	{
		
		max=INT_MIN;
		
		for ( int j=0; j < m; j++ ) 
		{
			if ( max < SET[0][0][0][j] ) 
			
				{
					verificare=true;
			
					for ( int i=0; i<k; i++ )
					{
						if( vpoz[i] == j )  { verificare = false; break; }
					}	
					
					if ( verificare )
					{		
						max = SET[0][0][0][j];	
						poz = j;
					}
				}
			
		}
	
		cout<<setw(2)<<k<<" max = "<<max<<" pozitia = "<<poz<<endl;
		
		vpoz[k] = poz;
		
		k++;
	}
return 0;
}
