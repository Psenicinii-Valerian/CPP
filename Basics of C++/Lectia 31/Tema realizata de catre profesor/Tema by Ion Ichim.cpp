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
	
	
 	void meniu(char meniu[256])
 	{
 		cout<<meniu;
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

	
 	int maxminsumV(int v[], int n, int x)
 	{  
      	int max = v[0];
     	int min = v[0];
   		int sum = v[0]; 
   		
  		for(int i=1; i < n ;  i++)
  		{
  			if( max < v[i]) max=v[i];
   			if( min > v[i]) min=v[i];
   			sum+=v[i];
 		} 
 		
     	switch(x)
     	{
 		case 0 : return max; 
 		case 1 : return min;
 		case 2 : return sum;
 		}
 		
	  	//return x==0 ? max: min ;
 	} 
	
	
 	void diag(int M[][100], int n, int m, bool x)
  	{ 
	  	for (int i=0; i < n; i++) 
 		  if(!x) cout<<setw(3)<<M[i][i]; 
       		else if(x)  cout<<setw(3)<< M[n-1-i][i]; 
		
 	}
	
	
 	int main() 
 	{   
 		srand(time(0));
 		
 		int v[100], n = insertINT(" Enter n = ") ;
 		cout<<endl;
		
 		insertVa( v , n );
 		showV( v, n );
 		
 		cout<<endl;
	  
     	int max = maxminsumV(v,n,0);
   		int min = maxminsumV(v,n,1);
   		int sum = maxminsumV(v,n,2);
   		
   		show(" Max = ", max);
   		show(" Min = ", min);
   		show(" Suma = ", sum);
   		
   		cout<<endl;
   		
     	int M[100][100], nM = insertINT(" Enter n = "), m = insertINT(" Enter m = ");
 		
 		cout<<endl;
 		
 		insertMa( M, nM, m );
 		   showM( M, nM, m );
 		   
 		cout<<endl;
 		
 		diag( M, nM, m, 0 );
 		
 		cout<<endl;
 		
 		diag( M, nM, m, 1 );
	
 	return 0;   
 	}

