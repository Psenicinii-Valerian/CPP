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
 	
 	
 	struct stud
 	{
 		char nume[256];
 		int ani;
 		double media;
 	};
 	
 	
 	struct abc
 	{
 		int a;
	 	int b; 
	 	int c;	
	 	int R;
 	};
 	
 	
 	void f()
 	{
 		stud x,y,z;
 	}
	
	
 	int main()
 	{
 		srand (time(0));
 		
 		/*
 		
 		stud A,B,C,Z;
 		
 		A.ani = 123;
 		A.media = rand()%10*1.357;
 			
 		cout<<" A.ani = "<<A.ani<<endl;
 		cout<<" A.media = "<<A.media<<endl;
 		
 		cout<<" \n Enter nume = ";
 		cin>>B.nume;
 		
 		cout<<" Enter ani = ";
 		cin>>B.ani;
 		
 		cout<<" Enter media = ";
 		cin>>B.media;
 		
 		cout<<" \n B.nume = "<<B.nume<<endl;
 		cout<<" B.ani = "<<B.ani<<endl;
 		cout<<" B.media = "<<B.media<<endl;
 		
 		*/
 		
 		abc X;
 		
 		X.a = rand()%10;
 		X.b = rand()%10;
 		X.c = rand()%10;
 		
 		X.R = X.a + X.b - X.c;
 		
 		cout<<setw(3)<<X.a<<" + "<<X.b<<" - "<<X.c
		 	<<"   R = a + b - c = "<<X.R<<endl;
 		
 		

		 		
 		return 0;
 	}
