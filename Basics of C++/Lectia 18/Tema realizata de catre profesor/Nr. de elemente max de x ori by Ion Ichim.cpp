#include <iomanip>
#include <iostream> // cout si cin
#include <cstdlib> // <stdlib.h> rand srand exit
#include <ctime> // <time.h> time
#include <conio.h>
#include <cmath>

using namespace std;

// 1. vector

// tip_date nume_multime[Nr_maximal_valori];

// element - nume_multime[pozitia sau index sau nr.ordine];

int main()
{
	srand( time(0) );

// v[], n, sa se gaseasca x elemente maximale, unde x Enter USER

	int v[100], n=rand()%10+10, x, max;

	do
	{
	cout<<" Enter 0 < x <= "<<n<<" :: ";
	cin>>x;
	}while( x > n || x <= 0 );

	for( int i=0; i<n; i++) v[i]=rand()%30;
	cout<<"\n"<<" n="<<n<<" v : ";
	for( int i=0; i<n; i++) cout<<setw(3)<<v[i];

	cout<<endl;


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

	int k=0, poz, pozMAX[100];
	bool q;


	while( k < x )
	{

		max=INT_MIN;
		for( int i=0; i<n; i++)
		{
			if( max < v[i] )
				{
			q=true;
			for(int j=0; j<k; j++)
			{
				if( pozMAX[j] == i ){ q = false; break; }
			}

				if( q )
				{
				max = v[i] ;
				poz = i;
				}

			}
		}

	pozMAX[k] = poz;

	cout<<k<<" max="<<max<<" poz="<<poz<<endl;

	k++;

}

		cout<<"\n"<<" n="<<n<<" poz pozMAX : ";
		for( int i=0; i<x; i++) cout<<setw(3)<<pozMAX[i];

		cout<<"\n"<<" x="<<x<<" val pozMAX : ";
		for( int i=0; i<x; i++) cout<<setw(3)<<v[ pozMAX[i] ];


return 0;
}
