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
	
	//inset matrix	
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
	
	int sdp=0,sds=0;
	
		//0 Diagonala principala + //2 Suma celor 2 diagonale
	cout<<" Diagonala principala :: ";
		for ( int i=0; i<n; i++)
	{
		sdp+=M[i][i];
		sds+=M[n-1-i][i];
		cout<<setw(3)<<M[i][i];		
	}
	
	cout<<endl;
	
		//1 Diagonala secundara
	cout<<" Diagonala secundara :: ";
	
		for ( int i=0; i<n; i++)
	{
		 cout<<setw(3)<<M[n-1-i][i];		
	}
	cout<<endl;
	
	cout<<"Suma diagonalei principale= "<<sdp<<"\nSuma diagonalei secundare= "<<sds<<endl;
	
	
	cout<<endl;

		//3 Interschimbul diagonalei principale cu cea secundara
		for ( int temp, i=0; i<n; i++)
	{
		 temp=M[i][i];
		 M[i][i]=M[n-1-i][i];
		 M[n-1-i][i]=temp;		
	}
	
	
		for ( int i=0; i<n; i++)			
	{										//10 11 12 13 14 15
		for ( int j=0; j<m; j++)			//20 21 22 23 24 25
		{									//30 31 32 33 34 35 
			cout<<setw(3)<<M[i][j];			//40 41 42 43 44 45	
		}									//50 51 52 53 54 55
		cout<<endl;	
	}
		
		cout<<endl;
		
		//4 Afisarea triunghiului de sub diagonala principala
		cout<<"TR1 "<<endl;
		for ( int i=0; i<n; i++)
	{
		for ( int j=0; j<m; j++)
		{
			if (i >= j) cout<<setw(3)<<M[i][j];
			else cout<<setw(3)<<" ";
		}		
		cout<<endl;
	}
	
	 	cout<<endl;
	 	
	 	//4 Afisarea triunghiului de deasupra diagonala principala
		cout<<"TR2 "<<endl;
		for ( int i=0; i<n; i++)
	{
		for ( int j=0; j<m; j++)
		{
			if (j >= i) cout<<setw(3)<<M[i][j];
			else cout<<setw(3)<<" ";
		}		
		cout<<endl;
	}
	
		cout<<endl;
		
	 	//5 Sa se afiseze patratul numarul 1;
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
		
	 	//5 Sa se afiseze patratul numarul 2; !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
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
		
		//7 DP fiecare cadran si ds.
		
	//Cadranul 1 DP
	cout<<"Diagonala principala Cadranul 1 :: ";
	for( int i=0; i<n/2;i++)
	{	
		cout<<setw(3)<<M[i][i];
	}
	
	
	cout<<endl;
	//Cadranul 1 DS
	cout<<"Diagonala secundara Cadranul 1 :: ";
	for( int i=0; i<n/2;i++)
	{	
		cout<<setw(3)<<M[n/2-1-i][i];
	}
	
	cout<<endl;
	
	//Cadranul 2 DP
	cout<<"Diagonala principala Cadranul 2 :: ";
	for( int i=0; i<n/2;i++)
	{
		cout<<setw(3)<<M[i][m/2+i];
	}
	
	cout<<endl;
	
	//Cadranul 2 DS
	cout<<"Diagonala secundara Cadranul 2 :: ";
	for( int i=0; i<n/2;i++)
	{
		cout<<setw(3)<<M[n/2-1-i][m/2+i];
	}
	
	
	cout<<endl;
	
	//Cadranul 3 DP
	cout<<"Diagonala principala Cadranul 3 :: ";
	for( int i=n/2; i<n;i++)
	{
		cout<<setw(3)<<M[i][i-m/2];
	}
	
	cout<<endl;
	
	//Cadranul 3 DS
	cout<<"Diagonala secundara Cadranul 3 :: ";
	for( int i=n/2; i<n;i++)
	{
		 cout<<setw(3)<<M[(n-1)-(i-(n/2))][i-m/2];	
	}
	
	cout<<endl;
	
	//Cadranul 4 DP
	cout<<"Diagonala principala Cadranul 4 :: ";
	for( int i=n/2; i<n;i++)
	{
		cout<<setw(3)<<M[i][i];
	}
	
	cout<<endl;
	
	//Cadranul 4 DS
	cout<<"Diagonala secundara Cadranul 4 :: ";
	for( int i=n/2; i<n;i++)
	{
		cout<<setw(3)<<M[(n-1)-(i-(n/2))] [i];
	}
	
	cout<<endl;
	
	//00 01 02 03 04 05
	//10 11 12 13 14 14
	//20 21 22 23 24 25
	//30 31 32 33 34 35
	//40 41 42 43 44 45
	//50 51 52 53 54 55
	
return 0;
}
