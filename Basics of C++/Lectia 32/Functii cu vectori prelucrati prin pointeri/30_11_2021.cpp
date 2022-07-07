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
 	
 	// vectorii se transmit functiilor doar prin numele lor (fie vectorii de tip pointer sau variabila simpla)
 	// daca transmitem o variabila simpla la un pointer functie o facem prin adresa &N
 	
	int insertINT(char *mess)
 	{
 		int *x = new int;
 		
 		cout<<mess;
 		cin>>*x;
 		
 		return *x;	
 	}
	
	
 	void show(char *mess,int *x)
 	{
 		cout<<mess<<*x<<"  adr a = "<<x<<endl; 	
 	}
	

 	void insertV(int *v, int *n)
 	{
 		for(int i=0; i < *n; i++)
 		{
 			*(v+i) = rand()%10;
		}
	}
 	
 	
 	void showV(int *v, int *n )
 	{
 		cout<<" v :: ";
 		
 		for(int i=0; i < *n; i++)
 			cout<<setw(3)<<*(v+i);
	}
 	
 	
	int main()
 	{
 		srand (time(0));
 		
 		int *n = new int;
 		
 		*n = insertINT(" Enter n = ");
 		
 		int *v = new int[*n];
 		
 		insertV(v,n);
 		  showV(v,n);
 		
 		cout<<endl;
 		
 		int V[100], N=rand()%20+5;
 		insertV(V,&N); 
 		showV(V,&N);

 		return 0;
	 }
	 
	 
