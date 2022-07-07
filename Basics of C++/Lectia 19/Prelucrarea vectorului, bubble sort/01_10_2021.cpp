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

	int v[100], n=rand()%10+10;


	for( int i=0; i<n; i++) 
	{
		do
		{
			v[i]=rand()%20;
		} while ( v[i]%2!=0 );
		
	}
	cout<<"\n"<<" n="<<n<<" v : ";
	
	for( int i=0; i<n; i++) cout<<setw(3)<<v[i];
	cout<<endl;
	
	int x[50], xn=0;
	for (int i=0; i<n; i+=2, xn++)
	{
		if (n%2==0 ) x[xn] = v[i]+v[i+1];
		else 
		{
			if (i < n-1)x[xn] = v[i]+v[i+1];
			else x[xn]= v[i] + 0;
		}
				
	}
	
	cout<<"\n"<<" xn="<<xn<<" xn : ";

	for( int i=0; i<xn; i++) cout<<setw(3)<<x[i];

	cout<<endl;

	
/*	int temp=0;
	bool x=true;
	
	while(x)
	{
		x=false;
		for (int i=0; i<n-1; i++)
		{
			if (i<n/2)
			{
			
				if ( v[i] > v[i+1] )
				{
					temp=v[i];
					v[i]=v[i+1];
					v[i+1]=temp;	
				
				x=true;
				}
			}	
			
			else
			{
			
				if ( v[i] < v[i+1] )
				{
					temp=v[i];
					v[i]=v[i+1];
					v[i+1]=temp;	
				
				x=true;
				}
			}	
		
		}
		

	}
	cout<<" n="<<n<<" v : ";
	for( int i=0; i<n; i++) cout<<setw(3)<<v[i];
	cout<<endl;	*/
	
return 0;
}

