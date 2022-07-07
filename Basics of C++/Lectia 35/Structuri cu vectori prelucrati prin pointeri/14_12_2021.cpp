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
 	
 	
 	struct oper
 	{
 		int suma = 0;
 		int max = INT_MIN;
 		int min = INT_MAX;
 		int n = rand()%10+3;
 	}QQ[10];
 	
 	
 	/* 
 	// prelucrare in functie
 	oper f(abc X[])
 	{
 		oper W;
 		
     	for(int i=0; i < W.n; i++)
  		{
     		X[i].a = rand()%10;
     		X[i].b = rand()%10;
     		X[i].c = rand()%10;
     		X[i].R = X[i].a + X[i].b - X[i].c;
   			cout<<" a="<<X[i].a<<" b="<<X[i].b<<" c="<<X[i].c
         		<<" R=a+b-c="<<X[i].R<<endl;
    	 	W.suma += X[i].R;
    	 	if( W.max < X[i].R ) W.max=X[i].R; 
   		 	if( W.min > X[i].R ) W.min=X[i].R; 
   		}
   		
 		return W; 
  	}
 	*/
 	
 	
 	oper f(abc *X)
 	{
 		oper W;
 		
     	for(int i=0; i< W.n; i++)
  		{
     		X[i].a = rand()%10;
     		X[i].b = rand()%10;
     		X[i].c = rand()%10;
     		X[i].R = X[i].a + X[i].b - X[i].c;
   			cout<<" a="<<X[i].a<<" b="<<X[i].b<<" c="<<X[i].c
         		<<" R=a+b-c="<<X[i].R<<endl;
    	 	W.suma += X[i].R;
    	 	if( W.max < X[i].R ) W.max=X[i].R; 
   		 	if( W.min > X[i].R ) W.min=X[i].R; 
   		}
   		
 		return W; 
  	}
 	
	
 	int main()
 	{
 		srand (time(0));
		
 		cout<<"\n sizeof(int) = "<<sizeof(int)<<endl;
 		cout<<" sizeof(double) = "<<sizeof(double)<<endl;
 		cout<<" sizeof(abc) = "<<sizeof(abc)<<endl<<endl;

	 	system("pause");
		
 		cout<<endl;
		
	 	oper *A = new oper;
   		A->max=777;
     	cout<<" max = " << A->max <<endl;
     	delete A;
		
	 	cout<<endl;
		
	 	int  xxx = 100;
   		abc *X = new abc[xxx];
		
	 	oper W = f(X);
	 	
	 	cout<<endl;
	 	
	 	cout<<" Suma raspunsurilor = "<<W.suma<<endl;
	 	cout<<" Raspunsul maxim = "<<W.max<<endl;
	 	cout<<" Raspunsul minim = "<<W.min<<endl;
	 	
 		cout<<endl;
		
 		cout<<" n = "<<W.n<<endl<<endl;
 		
 		// prelucrare obisnuita
 		for (int i = 0; i < W.n; i++)
	 	cout<<" R = "<<X[i].a<<" + "<<X[i].b<<" - "<<X[i].c<<" = "<<X[i].R<<endl;
	 	
	 	cout<<endl;
 		
 		// cu pointeri manual (aritmetica matematica)
 		for(int i=0; i< W.n; i++)
     	cout<<" a="<< (X+i)->a <<" b="<< (X+i)->b<<" c="<< (X+i)->c <<" R=a+b-c="<< (X+i)->R<<endl;
     	
 		cout<<endl;
 		
 		// cu pointeri automat
   		for(int i=0; i< W.n; i++)
     	cout<<" a="<< X[i].a <<" b="<< X[i].b <<" c="<< X[i].c <<" R=a+b-c="<< X[i].R <<endl;
	 	
	 	
	 	
		 		
 		return 0;
 	}
