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
	
	int SET [24][10][10][10];
	int qn, zn, n, m;
	
	cout<<" Enter nr. cuburi = ";
	cin>>qn;
	cout<<" Enter nr. matrici = ";
	cin>>zn;
	cout<<" Enter nr. linii = ";
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
	
	
	int x,y,q;
	cout<<"  Dati x=";
	cin>>x;
	cout<<endl;
	cout<<"  Dati y=";
	cin>>y;
	
	x--;
	y--;
	cout<<endl;
	
	 	cout<<" Ati ales prin x CUBUL "<<x+1<<endl;
   		for ( int z=0; z < zn ; z++ )
  		{
  			cout<<" Matricea ["<<z+1<<"]"<<endl<<endl;
  			for ( int i=0; i<n; i++ )
  			{
  				for ( int j=0; j<m; j++ )
  				{
  					cout<<setw(3)<< SET [x][z][i][j];
				}
				cout<<endl;
  			}
  			cout<<endl;
		}
		
		cout<<" Ati ales prin y CUBUL "<<y+1<<endl;
   		for ( int z=0; z < zn ; z++ )
  		{
  			cout<<" Matricea ["<<z+1<<"]"<<endl<<endl;
  			for ( int i=0; i<n; i++ )
  			{
  				for ( int j=0; j<m; j++ )
  				{
  					cout<<setw(3)<< SET [y][z][i][j];
				}
				cout<<endl;
  			}
  			cout<<endl;
		}
    
      cout<<endl;
      
      
      for ( int z=0; z < zn ; z++ )
  		{
  			for ( int i=0; i<n; i++ )
  			{
  				for ( int j=0, temp; j < m; j++ )
  				{
  					q = SET [x][z][i][j];
  					SET [x][z][i][j] = SET [y][z][i][j];
  					SET [y][z][i][j] = q;
				}
  			}
		}
      
      
      
   	//show cub
   	cout<<" DUPA INTERSCHIMB ::"<<endl<<endl;
   	cout<<" CUBUL x="<<x+1<<endl;
   		for ( int z=0; z < zn ; z++ )
  		{
  			cout<<" Matricea ["<<z+1<<"]"<<endl<<endl;
  			for ( int i=0; i<n; i++ )
  			{
  				for ( int j=0; j<m; j++ )
  				{
  					cout<<setw(3)<< SET [x][z][i][j];
				}
				cout<<endl;
  			}
  			cout<<endl;
		}
	
	cout<<" CUBUL y="<<y+1<<endl;
   		for ( int z=0; z < zn ; z++ )
  		{
  			cout<<" Matricea ["<<z+1<<"]"<<endl<<endl;
  			for ( int i=0; i<n; i++ )
  			{
  				for ( int j=0; j<m; j++ )
  				{
  					cout<<setw(3)<< SET [y][z][i][j];
				}
				cout<<endl;
  			}
  			cout<<endl;
		}	
   	
	return 0;
}
