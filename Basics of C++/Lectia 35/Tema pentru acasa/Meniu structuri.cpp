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
 		char grupa[256];
 		double media;
 	}S[100];
 	
 	
 	stud insert(int n)
 	{
	 	cout<<" INSERT :: "<<endl<<endl;
	 	
 		for(int i=0; i<n; i++)
 		{	 
		 	cout<<" v["<<i+1<<"] :: "<<endl<<endl;	
		 	
	 		cout<<" Enter nume = ";
	 		cin>>S[i].nume; 	
			 	
 			cout<<" Enter varsta = ";
 			cin>>S[i].ani;
 			
 			cout<<" Enter grupa = ";
	 		cin>>S[i].grupa;
	 		
	 		cout<<" Enter media = ";
	 		cin>>S[i].media;

	 		cout<<endl;
	 	}
	 	
	 	
 	}
 	
 	
 	stud show(int n)
 	{ 	
	 	cout<<" SHOW :: "<<endl<<endl;
		 	
 		for(int i=0; i<n; i++)
 		{	 
 			cout<<" v["<<i+1<<"] :: "<<endl<<endl;
 			
		 	cout<<" Student :: ";			
 			cout<<setw(3)<<S[i].nume;
 			cout<<endl;
 			
		 	cout<<" Varsta :: ";			
 			cout<<setw(3)<<S[i].ani;
		 	cout<<endl;
			
		 	cout<<" Grupa :: ";			
 			cout<<setw(3)<<S[i].grupa;
		 	cout<<endl;
		 	
		 	cout<<" Media :: ";			
 			cout<<setw(3)<<S[i].media;
 			cout<<endl;
 			
 			cout<<endl;			 	 	
	 	}
 	}
 	
 	
	
 	int main()
 	{
 		srand (time(0));
 		
 		int n;
 		cout<<" Cate structuri student doriti sa creati?"<<endl;
 		cout<<" n = ";
 		cin>>n;
 		cout<<endl;
 		
 		cout<<" MENIU :: "<<endl<<endl;
 		cout<<" 1. Insert structura"<<endl;
 		cout<<" 2. Show structura"<<endl;
 		cout<<" ESC. Leave program"<<endl<<endl;
 		
 		for(int i=0; i<3; i++)
 		{	
		 	cout<<" Varianta aleasa = ";
 			switch( _getch() )
     		{	
      			case 49 : { cout<<"1"<<endl<<endl; stud Ins = insert(n); }  break;
    		 	case 50 : { cout<<"2"<<endl<<endl; stud Shw =   show(n); }  break;
     			case 27 : { cout<<"ESCAPE"; exit(0); }				   		break;
 			}
 		}
 		
 		
 		

 		return 0;
 	}
