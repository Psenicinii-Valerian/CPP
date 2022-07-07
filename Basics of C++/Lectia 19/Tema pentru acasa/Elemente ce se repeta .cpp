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

	for( int i=0; i<n; i++)		v[i]=rand()%20;	
	cout<<"\n"<<" n="<<n<<" v : ";
	
	for( int i=0; i<n; i++) cout<<setw(3)<<v[i];
	cout<<endl;

	int e[100], val[100], m=0;
	for( int i=0; i<n; i++) 	e[i]=0;
	bool q;	
	for (int i=0; i<n; i++)
	{	
		q=false;
		for (int k=0; k<m; k++)
		{
		 	if ( val[k] == v[i] ) q=true;
		}
		
			if (q) continue;
			val[m]=v[i];
    			for (int j=0 ; j<n; j++)
				{				
    				if ( v[i] == v[j] )		e[m]++;
				}
	m++;
    }
	
	cout<<endl;
	for (int i=0; i<m; i++) 
	
	{
		if ( e[i] > 1 )
		cout<<"i="<<setw(3)<<i<<setw(11)<<" numarul "<<setw(2)<<val[i]<<" se repeta de "<<e[i]<<" ori "<<endl;
		else
		cout<<"i="<<setw(3)<<i<<setw(11)<<" numarul "<<setw(2)<<val[i]<<" nu se repeta"<<endl;
	}
	
return 0;
}

