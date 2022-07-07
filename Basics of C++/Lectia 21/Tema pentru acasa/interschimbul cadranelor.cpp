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
	
	//[][], nxm
	int M[100][100], n, m;
	
	cout<<"Enter linii n=";
	cin>>n;
	
	cout<<"Enter coloane m=";
	cin>>m;
	
	//insert matrix	
	for ( int i=0; i<n; i++)
	{
		for ( int j=0; j<m; j++)
		{
			M[i][j]=rand()%10;
		}		
	}

	cout<<endl;

	//show matrix
	for ( int i=0; i<n; i++)
	{
		for ( int j=0; j<m; j++)
		{
			cout<<setw(3)<<M[i][j];
		}		
		cout<<endl;	
	}
	
	cout<<endl;

	 	//5 Sa se afiseze patratul numarul 1
	 	cout<<"Patratul 1 :: "<<endl;
		for ( int i=0; i<n; i++)
	{
		for ( int j=0; j<m; j++)
		{
			if (i==0 || i==n-1 || j==0 || j==m-1 ) cout<<setw(3)<<M[i][j];
			else cout<<setw(3)<<" ";	
		}		
		cout<<endl;
	}
		
		cout<<endl; 
		
	 	//5 Sa se afiseze patratul numarul 2 
	 	cout<<"Patratul 2 :: "<<endl;
		for ( int i=1; i<n-1; i++)
	{
		for ( int j=1; j<m-1; j++)
		{
			if (i==1|| i==n-2 || j==1 || j==m-2 )  cout<<setw(3)<<M[i][j];
			else cout<<setw(3)<<" ";	
		}		
		cout<<endl;
	}
	
		//6 Sa se afiseze cadranele matricei;
	
	cout<<endl;
	
	//Cadranul 1
	cout<<"Cadranul 1 :: "<<endl;
	for( int i=0; i<n/2;i++)
	{
		for( int j=0; j<m/2;j++)
		{
			cout<<setw(3)<<M[i][j];
		}
	cout<<endl;
	}
	
	cout<<endl;
	
	//Cadranul 2
	cout<<"Cadranul 2 :: "<<endl;
	for( int i=0; i<n/2;i++)
	{
		for( int j=m/2; j<m;j++)
		{
			cout<<setw(3)<<M[i][j];
		}
	cout<<endl;
	}
	
	cout<<endl;
	
	//Cadranul 3
	cout<<"Cadranul 3 :: "<<endl;
	for( int i=n/2; i<n;i++)
	{
		for( int j=0; j<m/2;j++)
		{
			cout<<setw(3)<<M[i][j];
		}
	cout<<endl;
	}
	
	cout<<endl;
	
	//Cadranul 4
	cout<<"Cadranul 4 :: "<<endl;
	for( int i=n/2; i<n;i++)
	{
		for( int j=m/2; j<m;j++)
		{
			cout<<setw(3)<<M[i][j];
		}
	cout<<endl;
	}
	
	cout<<endl;
		
		
	//00 01 02 03 04 05
	//10 11 12 13 14 14
	//20 21 22 23 24 25
	//30 31 32 33 34 35
	//40 41 42 43 44 45
	//50 51 52 53 54 55
	
	
	//Interschimbul cadranelor
	
    //1 cu 2
    cout<<"Interschimbul valorilor cadranelor 1 cu 2 :: "<<endl<<endl;
	for( int i=0; i<n/2;i++)
	{
		for( int temp, j=0; j<m/2; j++ )
		{
				temp=M[i][j];
				M[i][j]=M[i][m/2+j];
				M[i][m/2+j]=temp;
		}
	}
	
	//show matrix
	for ( int i=0; i<n; i++)
	{
		for ( int j=0; j<m; j++)
		{
			cout<<setw(3)<<M[i][j];
		}		
		cout<<endl;	
	}
	
	cout<<endl;
	
	
	//1 cu 3
	cout<<"Interschimbul valorilor cadranelor 1 cu 3 :: "<<endl<<endl;
	for( int i=0; i<n/2; i++)
	{
		for( int temp, j=0; j<m/2; j++ )
		{
			temp=M[i][j];
			M[i][j]=M[n/2+i][j];
			M[n/2+i][j]=temp;
		}	
		
	}
	
	//show matrix
	for ( int i=0; i<n; i++)
	{
		for ( int j=0; j<m; j++)
		{
			cout<<setw(3)<<M[i][j];
		}		
		cout<<endl;	
	}
	
	cout<<endl;
	
	
	//1 cu 4
	cout<<"Interschimbul valorilor cadranelor 1 cu 4 :: "<<endl<<endl;
	for( int i=0; i<n/2; i++)
	{
	
		for( int temp, j=0; j<m/2; j++ )
		{
			temp=M[i][j];
			M[i][j]=M[n/2+i][m/2+j];
			M[n/2+i][m/2+j]=temp;
		}	
		
	}
	
	//show matrix
	for ( int i=0; i<n; i++)
	{
		for ( int j=0; j<m; j++)
		{
			cout<<setw(3)<<M[i][j];
		}		
		cout<<endl;	
	}
	
	cout<<endl;
	
	
	
	//2 cu 1
	cout<<"Interschimbul valorilor cadranelor 2 cu 1 :: "<<endl<<endl;
	for( int i=0; i<n/2;i++)
	{
		for( int temp, j=m/2; j<m; j++)
		{
				temp=M[i][j];
				M[i][j]=M[i][j-m/2];
				M[i][j-m/2]=temp;
		}
	}
	
	//show matrix
	for ( int i=0; i<n; i++)
	{
		for ( int j=0; j<m; j++)
		{
			cout<<setw(3)<<M[i][j];
		}		
		cout<<endl;	
	}
	
	cout<<endl;
	
	
	//2 cu 3
	cout<<"Interschimbul valorilor cadranelor 2 cu 3 :: "<<endl<<endl;
	for( int i=0; i<n/2;i++)
	{
		for( int temp, j=m/2; j<m; j++)
		{
				temp=M[i][j];
				M[i][j]=M[n/2+i][j-m/2];
				M[n/2+i][j-m/2]=temp;
		}
	}
	
	//show matrix
	for ( int i=0; i<n; i++)
	{
		for ( int j=0; j<m; j++)
		{
			cout<<setw(3)<<M[i][j];
		}		
		cout<<endl;	
	}
	
	cout<<endl;
	
	cout<<"Interschimbul valorilor cadranelor 2 cu 4 :: "<<endl<<endl;
	for( int i=0; i<n/2;i++)
	{
		for( int temp, j=m/2; j<m; j++)
		{
				temp=M[i][j];
				M[i][j]=M[n/2+i][j];
				M[n/2+i][j]=temp;
		}
	}
	
	//show matrix
	for ( int i=0; i<n; i++)
	{
		for ( int j=0; j<m; j++)
		{
			cout<<setw(3)<<M[i][j];
		}		
		cout<<endl;	
	}
	
	cout<<endl;
	
	
	
	//3 cu 1
	cout<<"Interschimbul valorilor cadranelor 3 cu 1 :: "<<endl<<endl;
	for( int i=n/2; i<n;i++)
	{
		for( int temp, j=0; j<m/2;j++)
		{
			temp=M[i][j];
			M[i][j]=M[i-n/2][j];
			M[i-n/2][j]=temp;
		}
	}
	
	//show matrix
	for ( int i=0; i<n; i++)
	{
		for ( int j=0; j<m; j++)
		{
			cout<<setw(3)<<M[i][j];
		}		
		cout<<endl;	
	}
	
	cout<<endl;
	
	
	//3 cu 2
	cout<<"Interschimbul valorilor cadranelor 3 cu 2 :: "<<endl<<endl;
	for( int i=n/2; i<n;i++)
	{
		for( int temp, j=0; j<m/2;j++)
		{
			temp=M[i][j];
			M[i][j]=M[i-n/2][m/2+j];
			M[i-n/2][m/2+j]=temp;
		}
	}
	
	//show matrix
	for ( int i=0; i<n; i++)
	{
		for ( int j=0; j<m; j++)
		{
			cout<<setw(3)<<M[i][j];
		}		
		cout<<endl;	
	}
	
	cout<<endl;
	
	//3 cu 4
	cout<<"Interschimbul valorilor cadranelor 3 cu 4 :: "<<endl<<endl;
	for( int i=n/2; i<n;i++)
	{
		for( int temp, j=0; j<m/2;j++)
		{
			temp=M[i][j];
			M[i][j]=M[i][m/2+j];
			M[i][m/2+j]=temp;
		}
	}
	
	//show matrix
	for ( int i=0; i<n; i++)
	{
		for ( int j=0; j<m; j++)
		{
			cout<<setw(3)<<M[i][j];
		}		
		cout<<endl;	
	}
	
	cout<<endl;
	
	
	//4 cu 1
	cout<<"Interschimbul valorilor cadranelor 4 cu 1 :: "<<endl<<endl;
	for( int i=n/2; i<n;i++)
	{
		for( int temp, j=m/2; j<m;j++)
		{
			temp=M[i][j];
			M[i][j]=M[i-n/2][j-m/2];
			M[i-n/2][j-m/2]=temp;
		}
	}
	
	//show matrix
	for ( int i=0; i<n; i++)
	{
		for ( int j=0; j<m; j++)
		{
			cout<<setw(3)<<M[i][j];
		}		
		cout<<endl;	
	}
	
	cout<<endl;
	
	
	//4 cu 2
	cout<<"Interschimbul valorilor cadranelor 4 cu 2 :: "<<endl<<endl;
	for( int i=n/2; i<n;i++)
	{
		for( int temp, j=m/2; j<m;j++)
		{
			temp=M[i][j];
			M[i][j]=M[i-n/2][j];
			M[i-n/2][j]=temp;
		}
	}
	
	//show matrix
	for ( int i=0; i<n; i++)
	{
		for ( int j=0; j<m; j++)
		{
			cout<<setw(3)<<M[i][j];
		}		
		cout<<endl;	
	}
	
	cout<<endl;
	
	//4 cu 1
	cout<<"Interschimbul valorilor cadranelor 4 cu 3:: "<<endl<<endl;
	for( int i=n/2; i<n;i++)
	{
		for( int temp, j=m/2; j<m;j++)
		{
			temp=M[i][j];
			M[i][j]=M[i][j-m/2];
			M[i][j-m/2]=temp;
		}
	}
	
	//show matrix
	for ( int i=0; i<n; i++)
	{
		for ( int j=0; j<m; j++)
		{
			cout<<setw(3)<<M[i][j];
		}		
		cout<<endl;	
	}
	
	cout<<endl;
	
return 0;
}
