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
	
 	int *n, *v, *x, *max;
	n = new int;
 	cout<<" Enter n = ";
 	cin>>*n; 
	
 	v = new int[*n];
 	x = new int;
 	max = new int;
	
 	do
 	{
 	cout<<" Enter 0 < x <= "<<*n<<" :: ";
 	cin>>*x;
 	}while( *x > *n || *x <= 0 );
 
 	for( int i=0; i<*n; i++) *(v+i)=rand()%30;
 	cout<<"\n"<<" n="<<*n<<" v : ";
 	for( int i=0; i<*n; i++) cout<<setw(3)<<*(v+i);
 	
 	cout<<endl<<endl;
	
 	int *k, *poz, *pozMAX;
 	bool *q;
	
 	k = new int;
 	poz = new int;
 	pozMAX = new int[*n];

 	q = new bool;

 	*k = 0;

 	while( *k < *x )
 	{

	 	*max=INT_MIN;
	 	for( int i=0; i<*n; i++)
	 	{
			if( *max < *(v+i) )
				{
		 	*q=true;
		 	for(int j=0; j<*k; j++)
		 	{
				if( *(pozMAX+j) == i ){ *q = false; break; }
		 	}

				if( *q )
				{
				*max = *(v+i) ;
				*poz = i;
				}
 
		 	}
	 	}

 	*(pozMAX + *k) = *poz;

 	cout<<setw(2)<<*k+1<<" max="<<*max<<" poz="<<*poz<<endl;

 	(*k)++;

 	}

	 	cout<<"\n"<<" n="<<*n<<" poz pozMAX : ";
	 	for( int i=0; i<*x; i++) cout<<setw(3)<<*(pozMAX+i);
 
	 	cout<<"\n"<<" x="<<*x<<" val pozMAX : ";
	 	for( int i=0; i<*x; i++) cout<<setw(3)<<*(v+*(pozMAX + i));
		
	 	cout<<endl<<endl;
	 	
		system("pause");
	 	system("cls");
	 	
	 	delete n;
	 	delete x;
	 	delete max;
	 	delete k;
	 	delete q;
	 	delete k;
		
	 	delete[] v;
	 	delete[] pozMAX;
	 	
	 	
	 	
 	// Bubble sort	
 	n = new int;
 	cout<<" Enter n = ";
 	cin>>*n; 
 	
 	int *temp;
 	bool *xxx;
 	
 	temp = new int;
 	v = new int[*n];
 	xxx = new bool;
		
 	*temp = 0;
 	*xxx = true;
	
 	for (int i=0; i<*n; i++) *(v + i) = rand()%15;
 	cout<<"\n"<<" n = "<<*n<<" v :: ";
 	for( int i=0; i<*n; i++) cout<<setw(3)<<*(v+i);
 	cout<<endl<<endl;
	
 	while(*xxx)
 	{
	 	*xxx=false;
	 	for (int i=0; i<*n-1; i++)
	 	{
			if ( *(v+i) > *(v+i+1) )
		 	{
			 	*temp=*(v+i);
			 	*(v+i)=*(v+i+1);
			 	*(v+i+1)=*temp;	
				
		 	*xxx=true;
		 	}
	 	}	 	
 	}
 	cout<<" Bubble sort crescator ::\n n = "<<*n<<" v :: ";
 	for( int i=0; i<*n; i++) cout<<setw(3)<<*(v+i);
 	cout<<endl<<endl;	
	
 	*temp = 0;
 	*xxx = true;
   	
 	while(*xxx)
 	{
		*xxx=false;
		for (int i=*n-1; i>=0; i--)
	 	{
			if ( *(v+i) < *(v+i+1) )
		 	{
			 	*temp=*(v+i);
			 	*(v+i)=*(v+i+1);
			 	*(v+i+1)=*temp;	
				
		 	*xxx=true;
		 	}
	 	}	 	
 	}
 	cout<<" Bubble sort descrescator ::\n n = "<<*n<<" v :: ";
 	for( int i=0; i<*n; i++) cout<<setw(3)<<*(v+i);
  	cout<<endl;	


 	delete temp;
 	delete n;
 	delete xxx;
 	
 	delete[] v;
     	
  	
return 0;
}
