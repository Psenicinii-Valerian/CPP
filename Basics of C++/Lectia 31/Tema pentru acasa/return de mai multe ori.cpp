#include <iomanip>
    #include <iostream>   //  cout si cin 
    #include <cstdlib>  // <stdlib.h>   rand srand exit
    #include <ctime>    // <time.h>  time 
    #include <conio.h> 
    #include <cstring>  // string.h
    #include <windows.h>
    using namespace std;
    
 	//  functii 
	  
 	/*
 	returnare_tip_date   nume_functie(param1, param2, ... , paramN)
 	{
 		COD_FUNCTIE
 		return returnare_nume_variabila;
 	}
 	*/
 	
  	// ierahia de functii
  	// prototipul functiei - func. fara corp
 	// returnare_tip_date   nume_functie(param1, param2, ... , paramN);
  	
 	int insertINT(char mess[256])
 	{
	 	cout<<mess;
	 	int x;  
 		cin>>x;
 		return x; 
 	}
  
  
 	int insertINTrand(int X)
 	{
 		return rand()%X; 
 	}
  
  
 	void show(char mess[256], int x)
 	{
 		cout<<mess<<x<<endl; 
 	}
  
  
 	int suma(int s, int R)
 	{
 		return s+R;
 	}
 	
 	int dif(int s, int R)
  	{
 		return s-R;
 	}
  
 	int maximum(int max, int R)
 	{
 		return max < R ? R : max;
 	}
 	
 	int minimum(int min, int R)
 	{
 		return min > R ? R : min;
 	}
  
  
  	//insertVa- insert vector automat
  	// !!! putem scrie si v[] in loc de v[100] !!!
 	void insertVa(int v[], int n)	 
 	{
 		for (int i=0; i < n; i++)
		 v[i] = insertINTrand(10); 	
    	
 	}
  
 	//insertVm- insert vector manual
 	/*
  	void insertVm(int v[], int n)	 
 	{
 		for (int i=0; i < n; i++)
		 v[i] = insertINT(" Insert element = "); 	
    	
 	}
 	*/
  
 	//show vector; 
 	//!!! putem scrie si v[] in loc de v[100] !!!
  	void showV(int v[], int n)		
 	{
 		for (int i=0; i < n; i++)
 		//cout<<setw(3)<<v[i];	
 		show(" ", v[i]);
 	}
  	
   
  	int sumaV(int v[], int n)
  	{	
  		int s = 0;
 		for ( int i=0; i < n; i = suma(i,1) ) s+=v[i]; // s = suma(s,v[i]);
 		
 		return s;
 	
	}
  	//Functia va primi tabloul ca adresa primului element
  	
  	
  	int maxV(int v[], int n)
  	{	
  		int s = v[0];
 		for ( int i=1; i < n; i = suma(i,1) ) s = maximum(s,v[i]); // s = suma(s,v[i]);
 		
 		return s;
  	}
	
	
 	void meniu(char meniu[256])
 	{
 		cout<<meniu;
 	}
 	
 	
 	Max_or_Min(int v[], int n)
 	{
 		int s = v[0];
 		
 		switch( _getch() )
 		{
 			case 49 : cout<<"\n\a Max = "; for ( int i=1; i < n; i = suma(i,1) ) s = maximum(s,v[i]); break;
		 	case 50 : cout<<"\n\a Min = "; for ( int i=1; i < n; i = suma(i,1) ) s = minimum(s,v[i]); break;	
	 	}
	 	
	 	return s;
	 }
 	
 	
 	//void insertMa( int X[100][100], int n, int m )
 	void insertMa( int X[][100], int n, int m )
 	{
 		for(int i=0; i < n; i++)
 		for(int j=0; j < m; j++)
 		X[i][j] = insertINTrand(10);
 	}
 	
 	
 	void showM( int X[][100], int n, int m )
 	{
 		for(int i=0; i < n; i++)
 		{
 			for(int j=0; j < m; j++)
 			cout<<setw(3)<<X[i][j];
 			cout<<endl;
 		}
 	}
 	
 	
 	int diag(int M[][100], int n, int m, int i, int a)
 	{		
		 	if ( a == 1 )	for ( i; i < n; ) return M[i][i]; 
 
 			else if ( a == 2)	for ( i ; i < n; ) return M[n-1-i][i]; 			
	}
	
 	int main() 
 	{   
 		srand(time(0));
 		
 		int v[100], n = insertINT(" Enter n = ") ;
 		cout<<endl;
		
 		insertVa( v , n );
 		showV( v, n );
 		
 		cout<<endl;
	  
	  	for ( int i=0; i < 2; i = suma(i,1) )
	  	{ 
	  		meniu(" Alegeti ca doriti sa aflati: \n 1. Maximul \n 2. Minimul\n");	
	 		show(" ", Max_or_Min( v, n ) );
	 		cout<<endl;
	  	}
     	
     	
     	int M[100][100], nM = insertINT(" Enter n = "), m = insertINT(" Enter m = ");
 		
 		cout<<endl;
 		
 		insertMa( M, nM, m );
 		   showM( M, nM, m );
 		   
 		cout<<endl;
 		
 		int l=0;
 		int a;
 		
 		for ( int i=0, a=1 ; i < 2; i = suma(i,1), a = suma(a,1) )
 		{
 			meniu("\n Alegeti care diagonala doriti sa o aflati: \n 1. Principala \n 2. Secundara\n\n ");	
 			cin>>a;
 			cout<<endl;	
 			
 				for (int j=0, l=0 ; j < nM; j = suma(j,1), l=suma(l,1))	
 				show(" ", diag( M, nM, m, l, a ) );
	
 			l=0;		
 		}
 		
 	return 0;   
 	}

