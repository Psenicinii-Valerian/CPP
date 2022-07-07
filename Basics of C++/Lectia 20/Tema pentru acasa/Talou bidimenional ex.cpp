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
	
	//sarcina 1
	
	for ( int temp, i=0; i<n; i++)
	{
		temp=0;	
		temp=M[i][0];
		M[i][0]=M[i][m-1];
		M[i][m-1]=temp;
	
	}
	
	for ( int i=0; i<n; i++)
	{
		for ( int j=0; j<m; j++)
		{
			cout<<setw(3)<<M[i][j];
		}		
		cout<<endl;	
	}
	
	cout<<endl;
	
	//sarcina 2
	
		for ( int max,min, i=0; i<n; i++)
	{
		max=-1;
		min=11;
		
		for ( int j=0; j<m; j++)
		{	
			if ( max < M[i][j] ) max=  M[i][j];
			if ( min > M[i][j] ) min=  M[i][j];
		}	
		
	cout<<"Maximul pe linia "<<i+1<<" este= "<<max<<endl;
	cout<<"Minimul pe linia "<<i+1<<" este= "<<min<<endl;
	
	cout<<endl;
	}
	
	cout<<endl;
	
	//interschimbul valorilor de pe primul si ultimul rand
	
		for (int temp, i=0; i<n; i++)
	{	
		temp=0;
		temp=M[0][i];	
		M[0][i]=M[n-1][i];
		M[n-1][i]=temp;	
	
	}
	
		for (int i=0; i<n; i++)
	{
		for (int j=0; j<m; j++)
		{
			cout<<setw(3)<<M[i][j];
		}
		cout<<endl;
	}	
return 0;
}
