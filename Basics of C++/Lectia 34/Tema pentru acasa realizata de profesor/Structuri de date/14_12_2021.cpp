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
 	}X[100];
 	
 	
 	struct raspuns
 	{
 		int suma = 0;
 		int max = INT_MIN;
 		int min = INT_MAX;
 		int n = rand()%10+3;
 	}Rs;
 	
	
 	int main()
 	{
 		srand (time(0));

 		cout<<" n = "<<Rs.n<<endl<<endl;
 		
 		for (int i = 0; i < Rs.n; i++)
 		{
 			X[i].a = rand()%10;
 			X[i].b = rand()%10;
 			X[i].c = rand()%10;
 		
 			X[i].R = X[i].a + X[i].b - X[i].c;
 		
 			cout<<" R = "<<X[i].a<<" + "<<X[i].b<<" - "<<X[i].c<<" = "<<X[i].R<<endl;
		 		
	  		Rs.suma += X[i].R;
		 	if ( Rs.max < X[i].R )	Rs.max = X[i].R;
		 	if ( Rs.min > X[i].R )	Rs.min = X[i].R;
 		}
 		
 		cout<<endl;
 		
 		cout<<" Suma raspunsurilor = "<<Rs.suma<<endl;
	 	cout<<" Raspunsul maxim = "<<Rs.max<<endl;
	 	cout<<" Raspunsul minim = "<<Rs.min<<endl;
		 		
 		return 0;
 	}
