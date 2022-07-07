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
 		
	 	cout<<" Enter nr. vectori = ";
 		cin>>*linii;
 		cout<<endl;
 		
 		int **M = new int*[*linii];
 		
 		cout<<" Enter nr. max elemente = ";
	 	cin>>*coloane;
	 	cout<<endl;
		 	
		//inserare
	 	for(int i=0; i < *linii; i++)
	 	{	
	 		M[i] = new int[*coloane];

	 		do
			{
	 		cout<<" Pentru V"<<i+1<<" Enter 0 < nr. elemente < nr. max elemente = ";
    		cin>>M[i][0];
	 		} while ( M[i][0] >= *coloane || M[i][0] <= 0 );
	 		
	 		cout<<" V["<<i+1<<"] :: ";
	 			for(int j=1 ; j <= M[i][0]; j++)
	 			{	
		 			M[i][j] = rand()%10;
 					cout<<setw(2)<<M[i][j];	
	 			}
	 			
 			cout<<endl<<endl;	
	 	}
	
 		cout<<endl;
		
		// afisare
		for(int i=0; i < *linii; i++)
	 	{		
	 		for(int j=1; j <= M[i][0]; j++)
	 			{
					cout<<setw(3)<<M[i][j];
	 			}
	 		cout<<endl;
	 	}
	 	
	 	for(int i=0; i < *linii; i++)
	 	delete[] M[i];
	 	
	 	delete linii;
	 	delete coloane;
		

		 return 0;		
 	}
