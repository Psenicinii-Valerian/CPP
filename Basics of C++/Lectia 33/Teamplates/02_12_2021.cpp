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
 	
 	// functii sablon (template) ne permit sa ne refuzam de multiplicarea functiilor supraincarcate
 	
 	/*
 	
 	   template <typename T1, typename T2, ... , typename TN>
 	   functie cu utilizarea tip_date_template()
 	   {
 	      ...
 	   }
 	
 	   Oricare functie poate fi transformata in functie sablon cu adaugarea operatorului template
 	   si in parantezele triunghiulare (<...>) se vor declara variabilele (T1, T2, TN) tipul de date
 	   a carora vor fi cunoscute in momentul apelarii functiei. Variabilele vor contine ca valoare 
 	   tip de date. Functia template trebuie sa contina minim o variabila declarata (typename T1)
 	   
 	*/
	
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
	 	
 	void show(char *mess, bool x)
 	{
 		cout<<mess<<x<<endl;	
 	}
 	
 	
 	void show(char *mess, int x)
 	{
 		cout<<mess<<x<<endl;	
 	}
	
	
 	void show(char *mess, double x)
 	{
 		cout<<mess<<x<<endl;	
 	}
 	
 	*/
 		
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
 	
 	
 	/*
 	
 	void showV(int v[], int n)
 	{
 		for (int i=0; i<n; i++)
 		cout<<setw(3)<<v[i];
 	}
	

 	void showV(double v[], int n)
 	{
 		for (int i=0; i<n; i++)
 		cout<<setw(7)<<v[i];
 	}
	 
	 
	void showV(char v[], int n)
 	{
 		for (int i=0; i<n; i++)
 		cout<<setw(3)<<v[i];
 	}
 	
 	*/
 	
 
 	template <typename T1, typename T2>
 	void showV( T1 v[], T2 n )
 	{
 		for (int i=0; i<n; i++) cout<<setw(7)<<v[i];
 	}
 	
 	
 	template <typename T1>
 	void show(char *mess, T1 x)
 	{
 		cout<<mess<<x<<endl;	
 	}
 	
 	template <typename T1>
 	T1 suma( T1 v[], int n)
 	{
 		T1 s=0;
 		for (int i=0; i<n; i++)
 			s+=v[i];
 			
 		return s;
 	}
 	
 	
 	// Template insertV manual
 	template <typename T1>
 	void insertV(T1 v[], int n, char *mess)
 	{
 		for (int i=0; i<n; i++)
 		{
 			cout<<mess<<" Enter v["<<i<<"] = ";
 			cin>>v[i];
	 	}
 	}
 	
 	
 	int main()
 	{
 		srand(time(0));
 		
	 	int n = 3;
	 	
   		int v1[100];
   		double v2[100];
  		char v3[100];
  		
  		insertV(v1,n," int ");
  		
  		cout<<endl;
  		
   		insertV(v2,n," double ");
   		
   		cout<<endl;
   		
   		insertV(v3,n," char ");
   		
   		cout<<endl;
   		
   		showV(v1,n);
   		
   		cout<<endl<<endl;
   		
   		showV(v2,n);
   		
   		cout<<endl<<endl;
   		
   		showV(v3,n);
	 
	 	cout<<endl<<endl;
	 	
	 	show(" v1 suma = ", suma(v1,n) );
	 	
	 	cout<<endl;
	 	
	 	show(" v2 suma = ", suma(v2,n) );
	 	
	 	cout<<endl;
	 	
	 	show(" v3 suma = ", suma(v3,n) );

 		return 0;
 	}
	
