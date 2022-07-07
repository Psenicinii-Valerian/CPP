#include <iomanip>
#include <iostream> // cout si cin
#include <cstdlib> // <stdlib.h> rand srand exit
#include <ctime> // <time.h> time
#include <conio.h>
#include <cmath>

using namespace std;
int main()
{
srand( time(0) );

	
	
	int v[30], x, max[30], n, Max;
    n=rand()%15+5;
    cout<<"Vectorul are "<<n<<" elemente"<<endl;
	cout<<"\nCate elemente maximale doriti sa calculati?"<<endl;
	
    do
     {
      	cout<<"Enter x intre [0..N] = ";
      	cin>>x;
     }	while( x > n || x < 0 );

    for( int i=0; i<n; i++)
    {
    	v[i]=rand()%17+3;
	}
	cout<<"\nv : ";
	for( int i=0; i<n; i++) cout<<setw(4)<<v[i]; 
	
	cout<<endl<<endl;
	
	
	bool q;
    for (int m=0,k=0;m<x;m++)
    {
        Max=k;
        for (int  i=0; i<n; i++)
        {
            q=false;
            for( int j=0;j<m;j++)
            {
                if(max[j]==i)	q=true;
                if(Max==max[j])	{k++;Max++;}
            } 

            if(q) continue;

            if ( v[Max]<v[i] )	Max=i;
        }
        max[m]=Max;		
        cout<<"Valoarea maxima numarul "<<setw(2)<<m+1<<" este "<<setw(2)<<v[max[m]]<<" de pe pozitia v["<<max[m]<<"]"<<endl;
    }

return 0;
}
