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
/*
int v[100], n = rand()%10+5;

cout<<" n= "<<n<<endl;

for( int i=0; i<n; i++)
{
v[i]=rand()%10;
}

for( int i=0; i<n; i++)
{
cout<<" v["<<i<<"]="<<v[i]<<endl;
}

// 1. pare => X[], impare => Y[]

// 0 1 2 3 4 5
// 1 5 3 4 1 2

int X[100], xn=0, Y[100], yn=0;

for( int i=0; i<n; i++)
{
if( v[i]%2==0 )
{
X[xn] = v[i] ;
xn++;
}
else
{
Y[yn] = v[i] ;
yn++;
}
}

cout<<"\n X : ";
for( int i=0; i<xn; i++)
{
cout<<setw(3)<<X[i];
}

cout<<"\n Y : ";
for( int i=0; i<yn; i++)
{
cout<<setw(3)<<Y[i];
}

// 2. v[x]==x => z[]

int Z[100], zn=0;

for( int i=0; i<n; i++)
{
if( v[i] == i )
{
Z[zn]= v[i];
zn++;
}
}

cout<<"\n Z : ";
for( int i=0; i<zn; i++)
{
cout<<setw(3)<<Z[i];
}
*/

// 3. +, -, *, / intre 2 vectori A si B de n elemnete

/* int A[100], B[100], n=rand()%5+2;
for( int i=0; i<n; i++)
{
A[i]=rand()%10;
B[i]=rand()%10;
}

cout<<"\n A : ";
for( int i=0; i<n; i++) cout<<setw(9)<<A[i];
cout<<"\n B : ";
for( int i=0; i<n; i++) cout<<setw(9)<<B[i];

int W1[100], W2[100], W3[100];
double W4[100];

for( int i=0; i<n; i++)
{
W1[i] = A[i] + B[i] ;
W2[i] = A[i] - B[i] ;
W3[i] = A[i] * B[i] ;
W4[i] = (double)A[i] / B[i] ;
}

cout<<"\nW1 : ";
for( int i=0; i<n; i++) cout<<setw(9)<<W1[i];

cout<<"\nW2 : ";
for( int i=0; i<n; i++) cout<<setw(9)<<W2[i];

cout<<"\nW3 : ";
for( int i=0; i<n; i++) cout<<setw(9)<<W3[i];

cout<<"\nW4 : ";
for( int i=0; i<n; i++) cout<<setw(9)<<W4[i]; */

/* int v[100], n = rand()%10+5;

	cout<<" n= "<<n<<endl;

    for( int i=0; i<n; i++)
    {
    	v[i]=rand()%15+5;
	}
	
	cout<<"\nv : ";
	for( int i=0; i<n; i++) cout<<setw(4)<<v[i]; 

	cout<<endl;

		temp=v[0];
		v[0]=v[n-1];
		v[n-1]=temp;
		
	cout<<"\nv : ";
	for( int i=0; i<n; i++) cout<<setw(4)<<v[i];  
   
     for( int i=0, temp; i<n-1; i+=2)
    {
    	temp=v[i];
    	v[i]=v[i+1];
    	v[i+1]=temp;
	}

    cout<<endl;
	cout<<"\nv : ";
	for( int i=0; i<n; i++) cout<<setw(4)<<v[i]; */
	
	
	
	
	int v[10], A[5], B[5], an=0, bn=0;


    for( int i=0; i<10; i++)
    {
    	v[i]=rand()%15+5;
	}
	cout<<"\nv : ";
	for( int i=0; i<10; i++) cout<<setw(4)<<v[i]; 
	
	 for( int i=0; i<10; i++)
    {
    	if (i%2==0)
    	{
		A[an]=v[i];
		an++;
		}
    	else
    	{
		B[bn]=v[i];
		bn++;
		}
	}
	    cout<<endl;
		cout<<"\nA : ";
	for( int i=0; i<an; i++) cout<<setw(4)<<A[i]; 
	cout<<"\nB : ";
	for( int i=0; i<bn; i++) cout<<setw(4)<<B[i]; 
	
	
	   for( int i=0, temp; i<5; i++)
    {
    	temp=A[i];
    	A[i]=B[i];
    	B[i]=temp;
	}

		
		cout<<"\n\nA : ";
	for( int i=0; i<an; i++) cout<<setw(4)<<A[i]; 
	cout<<"\nB : ";
	for( int i=0; i<bn; i++) cout<<setw(4)<<B[i]; 
	
	
	
	
	
	
	
	
	


return 0;
}
