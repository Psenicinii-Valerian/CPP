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

// v[], n, sa se gaseasca x elemente maximale, unde x Enter USER

	int v[100], n, x, max;
	int *pv, *pn, *px, *pmax;
	
	pv = v;
	pn = &n;
	px = &x;
	pmax = &max;
	
	cout<<" Dati numarul de elemente a vectorului n = ";
	cin>>*pn;
	
	cout<<endl;

	do
	{
	cout<<" Enter 0 < x <= "<<*pn<<" :: ";
	cin>>*px;
	}while( *px > *pn || *px <= 0 );

	for( int i=0; i < *pn; i++) *(pv+i) = rand()%20;
	cout<<"\n"<<" n="<<*pn<<" v :: ";
	for( int i=0; i<*pn; i++) cout<<setw(3)<<*(pv+i);

	cout<<endl<<endl;


// x = 3

// i 0 1 2 3 4 5 0 1 2 3 4 5
// v 3 9 6 9 9 8 9 9 9 9 9 9

// max1 = 9 poz = 1
// max2 = 9 poz = 3
// max3 = 9 poz = 4


// pas. 1. alg. Maximum
// pas. 2. repetam alg. max. de x ori
// pas. 3. depistam si pozitia elm. max
// pas. 4. salvam poz. elem. max
// pas. 5. verificam poz. elementului max gasit
// pas. 6. excludem setarea valorii maximale

	int k, poz, pozMAX[100];
	bool q;
	
	int *pk, *ppoz, *ppozMAX;
	bool *pq;
	
	pk = &k;
	ppoz = &poz;
	ppozMAX = pozMAX;
	pq = &q;
	
	*pk=0;
	
	while( *pk < *px )
	{

		*pmax = -1;
		for( int i=0; i<*pn; i++)
		{
			if( *pmax < *(pv+i) )
			
			{
			*pq=true;
			for(int j=0; j < *pk; j++)
			{
				if( *(ppozMAX+j) == i ){ *pq = false; break; }
			}

				if( *pq )
				{
				*pmax = *(pv+i) ;
				 *ppoz = i;
				}

			}
		}

	*(ppozMAX + *pk) = *ppoz;

	cout<<' '<<*pk+1<<" max="<<*pmax<<" poz="<<*ppoz<<endl;

	(*pk)++;

    }

		cout<<"\n"<<" n="<<*pn<<" poz pozMAX : ";
		for( int i=0; i<*px; i++) cout<<setw(3)<<*(ppozMAX+i);
		
		
		cout<<"\n"<<" x="<<*px<<" val pozMAX : ";
		for( int i=0; i<*px; i++) cout<<setw(3)<<*(pv+*(ppozMAX+ i));

	 cout<<endl<<endl;
		
	int temp, a[100], na;
	bool xxx;
	
	int *ptemp, *pa, *pna;
	bool *pxxx;
	
	pna = &na;
	pa = a;
	ptemp = &temp;
	pxxx = &xxx;
	
	*ptemp = 0;
	*pxxx = true;
		
	cout<<" Cate elemente doriti sa fie in vectorul a? \n na = ";
	cin>>*pna;
	
	for (int i=0; i<*pna; i++) *(pa + i) = rand()%15;
	cout<<"\n"<<" na = "<<*pna<<" a :: ";
	for( int i=0; i<*pna; i++) cout<<setw(3)<<*(pa+i);
	cout<<endl<<endl;
	
	while(*pxxx)
	{
		*pxxx=false;
		for (int i=0; i<*pna-1; i++)
	 	{
			if ( *(pa+i) > *(pa+i+1) )
		 	{
			 	*ptemp=*(pa+i);
			 	*(pa+i)=*(pa+i+1);
			 	*(pa+i+1)=*ptemp;	
				
		 	*pxxx=true;
		 	}
	 	}	 	
 	}
	cout<<" Bubble sort crescator ::\n na = "<<*pna<<" a :: ";
	for( int i=0; i<*pna; i++) cout<<setw(3)<<*(pa+i);
	cout<<endl<<endl;	
	
	bool qq;
	bool *pqq;
	pqq = &qq;
	
	*pqq = true;
	
	while(*pqq)
	{
		*pqq=false;
		for (int i=*pna-1; i>=0; i--)
	 	{
			if ( *(pa+i) < *(pa+i+1) )
		 	{
			 	*ptemp=*(pa+i);
			 	*(pa+i)=*(pa+i+1);
			 	*(pa+i+1)=*ptemp;	
				
		 	*pqq=true;
		 	}
	 	}	 	
 	}
	cout<<" Bubble sort descrescator ::\n na = "<<*pna<<" a :: ";
	for( int i=0; i<*pna; i++) cout<<setw(3)<<*(pa+i);
	cout<<endl;	

return 0;
}
