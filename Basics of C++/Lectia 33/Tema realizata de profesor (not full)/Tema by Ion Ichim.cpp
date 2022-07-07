 	#include <iomanip>
 	#include <iostream>   // cout si cin 
 	#include <cstdlib>    // <stdlib.h>   rand srand exit
 	#include <ctime>      // <time.h>  time 
 	#include <conio.h> 
 	#include <cstring>    // string.h
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
 	
 	// vectorii se transmit functiilor doar prin numele lor (fie vectorii de tip pointer sau variabila simpla)
 	// daca transmitem o variabila simpla la un pointer functie o facem prin adresa &N
 	
 	// supraincarcarea functiilor - ne permite sa utilizam numele functiei pentru mai multe functii,
 	// reiesind din urmatoarele reguli:
 	// 1) numarul de parametri trebuie sa fie diferiti
 	// 2) tipurile de date a parametrilor trebuie sa fie diferite 
	
	
 	int INsert(char *mess, int x)
 	{
 	 	cout<<mess;
 	 
 	 	cin>>x;
 		
 		return x;
 	}
 	
 	
 	bool INsert(char *mess, bool x)
 	{
 	 	cout<<mess;
 	 
 	 	cin>>x;
 		
 		return x;
 	}
	
	
 	double INsert(char *mess, double x)
 	{
 	 	cout<<mess;
 	 	cin>>x;
 		
 		return x;
 	}
	
	
 	/*
 	void show(double x, char *mess)
 	{
 		cout<<mess<<x<<endl;	
 	}
 	*/
 	
 	
 	template <typename T1>
 	void show(char *mess, T1 x)
 	{
 		cout<<mess<<x<<endl;	
 	}
 	
 		
 	void insertV(int v[], int n)
 	{
 		for (int i=0; i<n; i++)
 		v[i] = rand()%10;
 	}
 	
	
 	void insertV(double v[], int n)
 	{
 		for (int i=0; i<n; i++)
 		v[i] = rand()%10*1.357;
 	}
 	
 	
 	void insertV(char v[], int n)
 	{
 		for (int i=0; i<n; i++)
 		v[i] = 'a' + rand()%26 ;
 	}
 	
 	
 	template <typename T1>
 	void showV(T1 v[], int n)
 	{
 		for (int i=0; i<n; i++)
 		cout<<setw(7)<<v[i];
 	}
 	
 	
 	// [] n , int , double, char
 	// supraincarcare -  tempalte
   	// 1. max, min
	    
 	int minmax( int v[], int n, bool x)
 	{
 		if( x )
	 	{ 
 			int max = v[0];
 			for(int i=1; i<n;i++) 
 			if( max < v[i] ) max = v[i];
 			return max;
 		}   
 		
 		else
	 	{
	 		int min = v[0];
 			for(int i=1; i<n;i++) 
 			if( min > v[i] ) min = v[i];
  			return min;
 		} 
 		
 		return 0;  
   }
   
   
 	double minmax( double v[], int n, bool x)
 	{
 		if( x )
 		{ 
 			double max = v[0];
 			for(int i=1; i<n;i++) 
 			if( max < v[i] ) max = v[i];
 			return max;
 		}   
 		
 		else
 		{
 			double min = v[0];
 			for(int i=1; i<n;i++) 
 			if( min > v[i] ) min = v[i];
 			return min;
  		} 
  		
 		return 0;  
 	}
 	
 	
 	template <typename T>
 	T minmax( T v[], int n, bool x)
 	{
 		if( x )
 		{ 
 			T max = v[0];
  			for(int i=1; i<n;i++) 
 	        if( max < v[i] ) max = v[i];
     		return max;
 		}   
 		
 		else
     	{
    	 	T min = v[0];
   			for(int i=1; i<n;i++) 
     		if( min > v[i] ) min = v[i];
     		return min;
 		}
		  
 		return 0;  
 	}
 	
 	
 	// 2. sort crescator si descrescator
 	// [][] n , int , double, char
 	// supraincarcare -  tempalte
 	// 1. suma DP si DS 
	  
 	int sumaDPDS(int M[][100], int n, int m, bool x)
 	{
 		int s=0;
 		
 		if( x ) 
 		{
 			for( int i=0; i<n; i++) s+=M[i][i];
 		}
 		
  		else
 		{
 			for( int i=0; i<n; i++ ) s+=M[n-1-i][i];
		}
		
  		return s;
 	}
 	
 	
 	double sumaDPDS(double M[][100], int n, int m, bool x)
 	{
 		double s=0;
 		if( x ) 
 		{
 			for( int i=0; i<n; i++) s+=M[i][i];
  		}
  		
 		else
 		{
 			for( int i=0; i<n; i++ ) s+=M[n-1-i][i];
 		}
 		
  		return s;
 	}
 	
 	
 	template <typename T>
 	T sumaDPDS(T M[][100], int n, int m, bool x)
 	{
 	    T s=0;
 	    
 	    if( x ) 
  	    {
 	        for( int i=0; i<n; i++) s+=M[i][i];
	  	}
	  	
	  	else
	  	{
	   		for( int i=0; i<n; i++ ) s+=M[n-1-i][i];
	 	}
	 	
	  	return s;
 	}
 	
 	
 	// 2. suma, max, min, pentru fiecare cadran 
 	int smm(int M[][100], int n, int m, int K, int ALG )
 	{
 		switch(K)
 		{
 			case 1: 
 			{
 				switch(ALG)
 				{
          			case 1: { } break;
   					case 2: { } break;
   					case 3: { } break;
     			}
     		}
 			break;
 			
 			case 2: {}
 			break;
 			
  			case 3: {}
 			break;
 			
  			case 4: {}
 			break;   
  		}
  	}
 	
