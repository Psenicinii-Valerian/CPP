	#include <iomanip>
 	#include <iostream>   // cout si cin 
 	#include <cstdlib>    // <stdlib.h>   rand srand exit
 	#include <ctime>      // <time.h>  time 
 	#include <conio.h> 
 	#include <cstring>    // string.h
 	#include <windows.h>
 	using namespace std;
 	
 	
 	/*
 	
 	Structuri de date - o structura de date ne permite sa grupam (unificam) mai 
 	multe variabile (valori) intr-o singura variabila;
 	
 	struct - intructiune ce ne permite sa declaram un tip de date utilizator care 
 	va 	putea declara variabile cu un numar nelimitat de valori;
 	
 	Fiecare variabila din corpul structurii se numeste element;
 	
 	Accesul inspre elementul structurii se realizeazacu ajutorul operatorului punct.
 	
 	*/
 	
 	// Structurile de date se mai numesc tip de date utilizator (al programatorului)
 	
 	// int a = 777 = 888 (asa ceva nu poate fi) ;
 	// student [10]=> numa, grupa, ani, media .......... N info
 	

 	struct abc
 	{
 		int a;
	 	int b; 
	 	int c;	
	 	int R;
 	};
 	
 	
 	struct raspuns
 	{
 		int suma;
 		int max;
 		int min;
 		int n;
 	};
 	
	
 	int main()
 	{
 		srand (time(0));

 		abc X;
 		raspuns Rs;
 		
 		Rs.max = INT_MIN;
 		Rs.min = INT_MAX;
 		Rs.suma = 0;
 		Rs.n = rand()%10+3;
 		
 		cout<<" n = "<<Rs.n<<endl<<endl;
 		
 		for (int i = 0; i < Rs.n; i++)
 		{
 			X.a = rand()%10;
 			X.b = rand()%10;
 			X.c = rand()%10;
 		
 			X.R = X.a + X.b - X.c;
 		
 			cout<<" R = "<<X.a<<" + "<<X.b<<" - "<<X.c<<" = "<<X.R<<endl;
		 		
	  		Rs.suma += X.R;
		 	if ( Rs.max < X.R )	Rs.max = X.R;
		 	if ( Rs.min > X.R )	Rs.min = X.R;
 		}
 		
 		cout<<endl;
 		
 		cout<<" Suma raspunsurilor = "<<Rs.suma<<endl;
	 	cout<<" Raspunsul maxim = "<<Rs.max<<endl;
	 	cout<<" Raspunsul minim = "<<Rs.min<<endl;
		 		
 		return 0;
 	}
