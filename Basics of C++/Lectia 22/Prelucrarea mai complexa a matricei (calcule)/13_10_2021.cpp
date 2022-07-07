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
	
	//valoarea maxima pe coloana
	for ( int i=0, max=-1; i<m; i++)
	{
		for ( int j=0; j<n; j++)
		{
			if ( max < M[j][i] ) max=M[j][i];
		}	
		cout<<"MAX pe coloana "<<i+1<<" este ="<<max<<endl<<endl;	
		max=-1;
	}
	
	
	//aranjarea crescatoare a valorilor pe coloane pare
	bool k=true;
	while(k)	
{
	for ( int i=0, temp; i<m; i+=2)
	{	
		k=false;
		for ( int j=0; j<n-1; j++)
		{
			if (M[j][i] > M [j+1][i])
			{
				temp=M[j][i];
    			M[j][i]=M[j+1][i];
    			M[j+1][i]=temp;
    			k=true;
			}
		}		
	}
}	


	//aranjarea descrescatoare a valorilor pe coloane impare
	bool q=true;
	while(q)	
{
	for ( int i=1, temp; i<m; i+=2)
	{	
		q=false;
		for ( int j=0; j<n-1; j++)
		{
			if (M[j][i] < M [j+1][i])
			{
				temp=M[j][i];
    			M[j][i]=M[j+1][i];
    			M[j+1][i]=temp;
    			q=true;
			}
		}		
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

	//schimbarea cu locurile a coloanelor pare cu cele impare
	for ( int i=0, temp; i < m-1; i+=2)
	{	
		for ( int j=0; j < n; j++)
		{
			temp=M[j][i];
    		M[j][i]=M[j][i+1];
    		M[j][i+1]=temp;
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
	
	
	//schimbarea cu locurile a primului element cu ultimul per coloana (prima linie cu ultima)
	for ( int j=0, temp; j < m ; j++)
	{	
		temp=M[0][j];
    	M[0][j]=M[n-1][j];
    	M[n-1][j]=temp;
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
	
	//sa se schimbe cu locurile linia x cu linia y (x si y se introduce de utilzator)
	int x,y;
	do
	{
		cout<<"  Nr. linii existente este ["<<n<<"] Enter linia x=";
		cin>>x;	
		x--;
	}while ( x<0 || x >= n  );

	
	do
	{
		cout<<"  Nr. linii existente este ["<<n<<"] Enter linia y=";
		cin>>y;
		y--;
	}while ( y<0 || y >= n || x==y );
	
	
	cout<<endl;
	
	for ( int temp, j=0; j<m; j++)
	{
		temp=M[x][j];
    	M[x][j]=M[y][j];
    	M[y][j]=temp;
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
	
	//resetarea valorii matricei
	int w;
	cout<<"  Enter w=";
	cin>>w;
	for ( int i=0; i<n; i++)
	{
		for ( int j=0; j<m; j++)
		{
			if ( M[i][j] == w ) M[i][j]=-1;
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
	
	int v[1000];
	int nv=0;
	
	for ( int i=0; i<n; i++)
	{
		for ( int j=0; j<m; j++)
		{
			v[nv]=M[i][j];
			nv++;
		}		
	}
	
	cout<<"  v["<<nv<<"]= :: ";
	for (int i=0; i<nv; i++) cout<<setw(3)<<v[i];
	
return 0;
}
