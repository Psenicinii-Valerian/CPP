 	#include <iomanip>
 	#include <iostream>		// cout si cin
 	#include <cstdlib>		// <stdlib.h> rand srand exit
 	#include <ctime> 		// <time.h> time
 	#include <conio.h>
 	#include <cstring>  	//string.h
 	
 	#include <windows.h>  
	
 	using namespace std;
 	
 	// pointeri
	
 	// tip_date *nume_pointer <= (conform regulei de declarare a variabilei);
	
 	// 1. * - valoare
 	// 2. & - extrage adresa
   	
 	// 1. pointer prin referinta
 	
 	// ALOCAREA DINAMICA A MEMORIEI
 	
 	// new - var		 tip_date *pointer = new tip_date;					int *p = new int;
 	// new - vector 	 tip_date *pointer = new tip_date[nr_memorie];		int *p = new int[10];
 	
 	// delete - var 	 delete nume_pointer;
 	// delete - vector 	 delete[] nume_pointer;
 	
 	int main()
 	{
	 	srand(time(0));
	 	
	 	/*
	 	
	 	int *p = new int;
	 	
	 	int *a, *b, *c;
	 	
	 	a = new int;
	 	b = new int;
	 	c = new int;
	 	
	 	*a = rand()%10;
	 	*b = rand()%10;
	 	*c = rand()%10;
		
	 	cout<<" a = "<<*a<<"\n b = "<<*b<<"\n c = "<<*c<<"\n a + b - c = "<<*a + *b - *c<<endl;
		 
	 	delete a;
	 	delete b;
	 	delete c;
	 	
	 	cout<<endl;
	 	
	 	//cout<<" a = "<<*a<<"\n b = "<<*b<<"\n c= "<<*c<<"\n a + b - c = "<<*a + *b - *c<<endl;
		 
	 	a = new int;
	 	b = new int;
	 	c = new int;
	 	
	 	*a = rand()%10;
	 	*b = rand()%10;
	 	*c = rand()%10;
		
	 	cout<<" 2 a = "<<*a<<"\n 2 b = "<<*b<<"\n 2 c = "<<*c<<"\n 2 a + b - c = "<<*a + *b - *c<<endl;
		 
	 	delete a;
	 	delete b;
	 	delete c;
	 	
	 	*/
	 	
	 	/*
	 	
	 	int n=30;
	 	cout<<" Enter n =";
	 	cin>>n;
		 
	 	int v[100];
	 	
	 	*/
	 	
	 	/*
	 	
	 	int n;
	 	
	 	cout<<" Enter n = ";
	 	cin>>n;
	 	cout<<endl;
	 	
	 	int *pv = new int[n];
	 	
	 	*/
	 	
	 	int *n = new int;
	 	
	 	cout<<" Enter n = ";
	 	cin>>*n;
	 	cout<<endl;
	 	
	 	int *pv = new int[*n];
	 	
	 	for (int i=0; i < *n; i++) *(pv+i) = rand()%10;
	 	
	 	cout<<" v ::";
	 	for (int i=0; i < *n; i++) cout<<setw(3)<<*(pv+i);
	 	 
	 	delete[] pv;
	 	
	 	
	   	return 0;		
	}

