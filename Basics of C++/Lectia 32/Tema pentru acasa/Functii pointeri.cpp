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
 		cout<<mess<<*x<<endl; 	
 	}
	

 	void insertV(int *v, int *n)
 	{
 		for(int i=0; i < *n; i++)	
 			*(v+i) = rand()%10;
	}
 	
 	
 	void showV(int *v, int *n)
 	{
 		cout<<" v  ::";
 		
 		for(int i=0; i < *n; i++)
 			cout<<setw(3)<<*(v+i);
	}
	
	
	int* sumaV(int *v, int *n)
	{
 		int *s = new int;
 		*s = 0;
 		
 		for(int i=0; i < *n; i++)
 		*s+=*(v+i);
 		
 		return s;		
	}
	
	
	int* minmaxV(int *v, int *n, bool x)
	{
 		int *max = new int;
 		int *min = new int;
 		
 		*max = *(v+0);
 		*min = *(v+0);
 		
 		for (int i=0; i < *n; i++)
 		{
 			if ( *max < *(v+i) ) *max = *(v+i);
 			if ( *min > *(v+i) ) *min = *(v+i);
		}

		return x ? max : min;
	}
 	
 	
 	void insertM(int **M, int *n, int *m)
 	{
 		for(int i=0; i < *n; i++)
	 	{
	 		M[i] = new int[*m];
 
	 		for(int j=0; j < *m; j++)
	 		{	
				M[i][j] = rand()%10;
	 		}
	 	}
 	}
	
	
	void showM(int **M, int *n, int *m)
 	{
 		cout<<"  MATRIX ::"<<endl;
 		
 		for(int i=0; i < *n; i++)
	 	{
	 		for(int j=0; j < *m; j++)
	 		{
	 			cout<<setw(3)<<M[i][j];
	 		}
	 		
	 		cout<<endl;
	 	}
 	}
 	
	int main()
 	{
 		srand (time(0));
 		
 		int *n = new int;
 		
 		*n = insertINT(" Enter n = ");
 		
 		int *v = new int[*n];
 		
 		insertV(v,n);
 		  showV(v,n);
 		
 		cout<<endl<<endl;
 		
 		int *s = sumaV(v,n);
 		show(" Suma elementelor vectorului = ", s);
 		
 		cout<<endl;
 		
 		int *min = minmaxV(v,n, 0);
 		int *max = minmaxV(v,n, 1);
 		
 		show(" Numar minim al vectorului = ", min);
 		show(" Numar maxim al vectorului = ", max);
 		
 		delete n;
 		delete s;
 		delete min;
 		delete max;
 		delete[] v;
 				
 		int *N = new int;
 		int *M = new int;
 		
 		cout<<endl;
 		
 		*N = insertINT(" Enter nr linii = ");
 		*M = insertINT(" Enter nr coloane = ");
 		
 		cout<<endl;
 		
 		int **matrix = new int*[*N];
 		
 		insertM(matrix,N,M);
 		  showM(matrix,N,M);
 		  
 		delete N;
 		delete M;
 		for(int i=0; i < *N; i++)
	 	delete[] matrix[i];
 		  
 		
 		return 0;
	 }
	 
	 
