 	#include <iomanip>
 	#include <iostream>		// cout si cin
 	#include <cstdlib>		// <stdlib.h> rand srand exit
 	#include <ctime> 		// <time.h> time
 	#include <conio.h>
 	#include <cstring>  	//string.h
 	
 	#include <windows.h>  
 	
 	// crearea unei matrici cu pointeri
 	// declararea si afisarea unei matrici cu pointeri
 	// stergerea memoriei unei matrici cu pointeri
	
 	using namespace std;
 	int main()
 	{
 		srand(time(0));
 		
 		int *linii = new int;
 		int *coloane = new int;
 		
 		cout<<" Enter nr.linii = ";
 		cin>>*linii;
 		
 		cout<<" Enter nr. coloane = ";
		cin>>*coloane;
 		
 		int **M = new int*[*linii];


	 	for(int i=0; i < *linii; i++)
	 	{
			
	 		M[i] = new int[*coloane];
 
	 		for(int j=0; j < *coloane; j++)
	 		{
		 		M[i][j] = rand()%10;
	 		}
	 	
	 	}

		 cout<<endl;

	 	for(int i=0; i< *linii; i++)
	 	{
			
	 		for(int j=0; j < *coloane; j++)
	 		{
	 			cout<<setw(3)<<M[i][j];
	 		}
	 	
	 		cout<<endl;
	 	}
	 	
	 	for(int i=0; i < *linii; i++)
	 	delete[] M[i];
		

		 return 0;		
 	}
