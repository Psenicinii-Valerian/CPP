 	#include <iostream>
 	#include <iomanip>
 	#include <cstdlib> // <stdlib.h>
 	#include <ctime>   // <time.h>
 	#include <cmath>   // <math.h>
 	#include <conio.h>
 	#include <windows.h>

 	using namespace std;


 	void insertM(int **M, int *n, int *i, int *j);

 	void showM(int **M, int *n, int *i, int *j);

 	void showDPandDS(int **M, int *n, int *i, bool *D);

 	struct Calc
 	{
 		int a, b, c, n, R, sum, max, min;
 	};
 	
 	
 	int main() 
 	{
 		srand(time(0));
 		
 		int *n = new int;
 		int *i = new int;
 		int *j = new int;
 		
 		bool *D = new bool;
 		int **M = new int*[*n];
 		
 		*D = true;
 		*n = 4;
 		*i = 0;
 		*j = 0;
 		
 		insertM(M, n, i, j);
 		
 		*i = 0;
 		*j = 0;
 		
 		cout<<"\n  MATRIX :: "<<endl<<endl;
 		showM(M, n, i, j);
 		
 		*i = 0;
 		*j = 0;
 		
 		showDPandDS(M, n, i, D);
 		
 		for(int i=0; i<*n; i++) 
	 	{
 			delete[] M[i];
 		}
 		
 		delete n;
 		delete i;
 		delete j;
 		delete D;
 		
 		
//********** STRUCTURI DE DATE TEMA N=2 **********

 		Calc X;
 		
 		X.n = rand()%10+1;
 		X.sum = 0;
 		X.max = INT_MIN;
	 	X.min = INT_MAX;
	 	
	 	cout<<endl<<endl;
	 	
	 	for(int i=0; i<X.n; i++)
	 	{
	 		X.a = rand()%10;
		 	X.b = rand()%10;
		 	X.c = rand()%10;
		 	
		 	X.R = X.a + X.b - X.c;
		 	
		 	X.sum += X.R;
		 	
		 	if(X.max < X.R) X.max = X.R;
		 	if(X.min > X.R) X.min = X.R;
		 	
		 	cout<<"  a= "<<X.a<<" b= "<<X.b<<" c= "<<X.c<<" "<<" R= "<<X.R<<endl;
 		}
 		
 		cout<<endl;
 		
 		cout<<"  Sum Raspunsuri : "<<X.sum<<endl;
 		cout<<"  Raspunsul Maxim : "<<X.max<<endl;
 		cout<<"  Raspunsul Minim : "<<X.min<<endl;
 		
 		return 0;
	}
	
	
//********** INSERAREA MATRICEI PATRATICE **********

 	void insertM(int **M, int *n, int *i, int *j)
 	{
 		if(*i < *n) 
	 	{
 			if(*j == 0) 
		 	{
 				M[*i] = new int[*n];
 			}
 			
 			if(*j < *n)
	 		{
 				M[*i][*j] = rand()%10;
 				++*j;
 				
 				if(*j == *n) 
			 	{
 					++*i;
 					*j = 0;
 				}
 				
		 	insertM(M, n, i, j);
 			}
 		} 
 	}
 	
 	
//********** AFISAREA MATRICEI PATRATICE **********

 	void showM(int **M, int *n, int *i, int *j)
 	{ 
 		if(*i < *n) 
	 	{
 			if(*j < *n)
		 	{
	  			cout<<setw(3)<<M[*i][*j];
	 			++*j;
	 			
		 		if(*j == *n)
			 	{
		 			++*i;
		 			*j = 0;
	 				cout<<endl;
			 	}
			 	
			 	showM(M, n, i, j);
			}
		}
	}
	
	
//********** AFISAREA DP SI DS A UNEI MATRICE PATRATICE **********

 	void showDPandDS(int **M, int *n, int *i, bool *D)
 	{
 		if(*D)
	 	{
 			if(*i < *n)
	 		{
 				cout<<setw(3)<<M[*i][*i];
 				++*i;
 				showDPandDS(M, n, i, D);
 			}
 		}
		 
	 	else
	 	{
 			if(*i < *n)
	 		{
 				cout<<setw(3)<<M[*n-1-*i][*i];
 				++*i;
 				showDPandDS(M, n, i, D);
 			}
 		}
 	}
