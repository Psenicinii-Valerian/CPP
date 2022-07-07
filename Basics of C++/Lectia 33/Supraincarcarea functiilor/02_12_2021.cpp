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
	
				 	
 	void f(int x)
 	{
 		cout<<" f() 1"<<endl;				
 	}
	
	
 	void f(double x)
 	{
 		cout<<" f() 2"<<endl;			
 	}
	
	
 	void f(int x, int y)
 	{
 		cout<<" f() N"<<endl;
 	}
	
	
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
 	

 	int abc(int a, int b, int c)
 	{
 		return a+b-c;
 	}
	
	
 	double abc(double a, double b, double c)
 	{
 		return a+b-c;
 	}
 	
 	
 	bool abc(bool a, bool b, bool c)
 	{
 		return a+b-c;
 	}
 	
 	
 	void insertV(int v[], int n)
 	{
 		for (int i=0; i<n; i++)
 		v[i] = rand()%10;
 	}
 	
 	
 	void showV(int v[], int n)
 	{
 		for (int i=0; i<n; i++)
 		cout<<setw(3)<<v[i];
 	}
	
	
 	void insertV(double v[], int n)
 	{
 		for (int i=0; i<n; i++)
 		v[i] = rand()%10*1.357;
 	}
 	
 	
 	void showV(double v[], int n)
 	{
 		for (int i=0; i<n; i++)
 		cout<<setw(7)<<v[i];
 	}
 	
 	
 	void insertV(char v[], int n)
 	{
 		for (int i=0; i<n; i++)
 		v[i] = 'a' + rand()%26 ;
 	}
 	
 	
 	void showV(char v[], int n)
 	{
 		for (int i=0; i<n; i++)
 		cout<<setw(3)<<v[i];
 	}
 	
 	int main()
 	{
 		srand(time(0));
 		
 		/*
 		int a = INsert(" Enter int a = ", a);
 		int b = INsert(" Enter int b = ", b);
 		int c = INsert(" Enter int c = ", c);
 		
 		cout<<endl;
 		
 		show(" int a = ", a);
	 	show(" int b = ", b);
	 	show(" int c = ", c);
	 	
	 	cout<<endl;
	 	
	 	show(" a+b-c = ", abc(a,b,c));
	 	
	 	cout<<endl;
	 	
	 	double x = INsert(" Enter double x = ", x);
 		double y = INsert(" Enter double y = ", y);
 		double z = INsert(" Enter double z = ", z);
 		
 		cout<<endl;
 		
 		show(" double a = ", x);
	 	show(" double b = ", y);
	 	show(" double c = ", z);
	 	
	 	cout<<endl;
	 	
	 	show(" double x+y-z = ", abc(x,y,z));
	 	
	 	cout<<endl;
	 	
	 	bool m,n,o;
	 	
 	    m = INsert(" Enter bool m = ", m);
	 	n = INsert(" Enter bool n = ", n);
	 	o = INsert(" Enter bool o = ", o);
	 	
	 	cout<<endl;
	 	
	 	show(" bool m = ", m);
	 	show(" bool n = ", n);
	 	show(" bool o = ", o);
	 	
	 	cout<<endl;
	 	
	 	show(" bool m+n-o = ", abc(m,n,o));
	 	*/
	 	
	 	int v[100], n;
	 	n= INsert(" Enter int n = ", n);
	 	
	 	cout<<endl;
	 	
 		insertV(v, n);
	 	showV(v, n);
	 	
	 	cout<<endl<<endl;
	 	
	 	double v1[100], n1;
	 	n1= INsert(" Enter double n = ", n1);
	 	
	 	cout<<endl;
	 	
	 	insertV(v1, n1);
	 	showV(v1, n1);
	 	
	 	cout<<endl<<endl;
	 	
	 	char v2[100], n2;
	 	n2= INsert(" Enter char n = ", n2);
	 	cout<<endl;
	 	
	 	insertV(v2, n2);
	 	showV(v2, n2);
	 	
	 	cout<<endl<<endl;
	 	
	 
 		return 0;
 	}
	
