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
  
  
 	int abc(int a , int b , int c )
 	{
 		return a+b-c;
 	}
  
  
 	int suma(int s, int R)
 	{
 		return s+R;
 	}
  
  
 	int maximum(int max, int R)
 	{
 		return max < R ? R : max;
 	}
  
  
  	//insertVa- insert vector automat
  	// !!! putem scrie si v[] in loc de v[100] !!!
 	void insertVa(int v[], int n)	 
 	{
 		for (int i=0; i < n; i++)
		 v[i] = insertINTrand(10); 	
    	
 	}
  
 	//insertVm- insert vector manual
  	void insertVm(int v[], int n)	 
 	{
 		for (int i=0; i < n; i++)
		 v[i] = insertINT(" Insert element = "); 	
    	
 	}
 	
  
 	//show vector; 
 	//!!! putem scrie si v[] in loc de v[100] !!!
  	void showV(int v[], int n)		
 	{
 		for (int i=0; i < n; i++)
 		//cout<<setw(3)<<v[i];	
 		show(" ", v[i]);
 	}
  	
  	
  	void algV(int v[], int rez[], int n)
  	{
   		for ( int i=0; i < n; i++ )
 		{
 			show(" ",v[i]);
 			
 			rez[0]=maximum(rez[0],v[i]);
		}  			
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
	
	
 	bool ex_log(int x,int y)
 	{
 		return x < y ? true : false;		
 	}
	
	
 	bool ex_log_x(int x,int y)
 	{
 		return x == y ? true : false;
 	}
  	
  	
 	int main() 
 	{   
 		srand(time(0));
 		
 		int v[100], rez[10], n = insertINT(" Enter n = ") ;
 		cout<<endl;
		
 		insertVa( v , n );
 		showV( v, n );
 		
 		cout<<endl;
	  
     	int v1[100],  n1 = insertINT(" Enter n = ") ;
     	cout<<endl;

 		insertVm( v1 , n1 );
 		
 		cout<<endl;
 		
 		showV( v1 , n1 );
 		
 		cout<<endl;
 		
 		//algV( v1, rez, n1 );
 		//show(" max = ", rez[0]);
 		
 		cout<<endl;
 		
 		show( " v suma = ", sumaV(v,n) );
 		show( " v1 suma = ", sumaV(v1,n1) );
 		
 		cout<<endl;
 		
 		int c=0, max=maxV(v,n);
 		
 		show(" max = ", max);
 		
 		for( int i=0; ex_log(i,n) ; i=suma(i,1) )
 		{
 			if ( ex_log_x(max,v[i]) ) c = suma(c,1);
 		}
 		
 		show(" max c = ", c);
 		
 		
 		int c1=0, max1=maxV(v1,n1);
 		
 		show(" max1 = ", max1);
 		
 		for( int i=0; ex_log(i,n1) ; i=suma(i,1) )
 		{
 			if ( ex_log_x(max1,v1[i]) ) c1 = suma(c1,1);
 		}
 		
 		show(" max c1 = ", c1);
 		
 		
 	return 0;   
 	}

