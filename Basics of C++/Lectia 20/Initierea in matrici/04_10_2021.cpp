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
	
	//suma
	
	int suma=0;
	
		for ( int i=0; i<n; i++)
	{
		for ( int j=0; j<m; j++)
		{
			suma+=M[i][j];
		}		
	}
	cout<<"Suma elementelor matricei= "<<suma<<endl;
	
	cout<<endl;
	
	//suma pe fiecare linie
	
		for ( int sum, i=0; i<n; i++)
	{
		sum=0;	
		
			for ( int j=0; j<m; j++)
			{
				sum+=M[i][j];
			}	
			
		cout<<"Suma linia "<<i+1<<" este = "<<sum<<endl;	
	}
	
	cout<<endl; 
	
	//elem pare si impare
	
	int CI=0, CP=0;
	
			for ( int sum, i=0; i<n; i++)
	{
			for ( int j=0; j<m; j++)
			{
				if ( M[i][j]%2 == 0 ) CP++;
				else CI++;
			}		
	}

	cout<<"Elemente pare= "<<CP<<endl;
	cout<<"Elemente impare= "<<CI<<endl;	
	
	cout<<endl;
	
	//contor x si y
	
	int CX=0, CY=0, x, y;
	
	cout<<"Enter x= ";
	cin>>x;
	cout<<"Enter y= ";
	cin>>y;
	
		for ( int  i=0; i<n; i++)
	{
		if ( i%2==0 )
		{
	
			for ( int j=0; j<m; j++)
			{
				if ( M[i][j] == x) CX++;
			}
		}	
		else
		{
	
			for ( int j=0; j<m; j++)
			{
				if ( M[i][j] == y) CY++;
			}
		}	
			
	}
	
	cout<<"Valori x pe linii pare= "<<CX<<endl;
	cout<<"Valori y pe linii impare= "<<CY<<endl;
	
	cout<<endl;

	//suma pe coloana (+ daca nu este un tablou bidimensional patratic)

	for ( int  s, i=0; i<m; i++)
	{	
		s=0;
		
		for ( int j=0; j<n; j++)
		{		
			s+=M[j][i];
		}	
			
	cout<<"Suma pe coloana "<<i+1<<" este ="<<s<<endl;
	}
	
return 0;
}

