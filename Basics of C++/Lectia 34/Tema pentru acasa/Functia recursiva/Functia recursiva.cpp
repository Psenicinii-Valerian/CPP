 	#include <iomanip>
 	#include <iostream>   // cout si cin 
 	#include <cstdlib>    // <stdlib.h>   rand srand exit
 	#include <ctime>      // <time.h>  time 
 	#include <conio.h> 
 	#include <cstring>    // string.h
 	#include <windows.h>

 	using namespace std;


 	void show_element( int M[100][100], int n, int m, int i, int j ) 
 	{
   	 	if( i >= n )
  	    {	
  			return;
     	}
    
     	else if( j >= m )
   		{
 			cout<<endl;
  			show_element(M, n, m, ++i, 0);
   		}
    
      	else
     	{
     	    cout<<setw(3)<<M[i][j];
     	    show_element(M, n, m, i, ++j); 
   		}
 	}


 	void read_element(int M[100][100], int n, int m, int i, int j) 
 	{
   		if( i >= n )
     	{
         	return;
   		}
   		
 		else if( j >= m )
     	{
         	read_element(M, n, m, ++i, 0);
   		}
   		
     	else
   		{
       		M[i][j] = rand()%10;
         	read_element(M, n, m, i, ++j); 
  	  	}
 	}


 	void print_matrix(int M[100][100], int n, int m) 
 	{
 	    cout<<"\n  Matrix Elements :: "<<endl<<endl;
   		show_element(M, n, m, 0, 0);
 	}

	
 	void show_DP( int M[100][100], int n, int m, int i, int j ) 
 	{
 		if (i < n)
 		{
     	    cout<<setw(3)<<M[i][i];
     	    show_DP(M, n, m, ++i, j); 
	 	}
 	}
 	
 	
 	void print_DP(int M[100][100], int n, int m) 
 	{
 	    cout<<"\n  Diagonala Principala :: "<<endl<<endl;
   		show_DP(M, n, m, 0, 0);
 	}
	
	
 	void show_DS( int M[100][100], int n, int m, int i, int j ) 
 	{
 		if (i < n)
 		{
     	    cout<<setw(3)<<M[n-1-i][i];
     	    show_DS(M, n, m, ++i, j); 
	 	}
 	}
 	
 	
 	void print_DS(int M[100][100], int n, int m) 
 	{
 	    cout<<"\n  Diagonala Secundara :: "<<endl<<endl;
   		show_DS(M, n, m, 0, 0);
 	}
	
	
 	int main()
 	{
 		srand(time(0));
 		
	 	int n = rand()%10+3, m = n;
	 	
	 	cout<<"  n = "<<n<<endl;
	 	cout<<"  m = "<<m<<endl;
	 	
   		int M[100][100];
   		
 		read_element(M, n, m, 0, 0);
  	  	print_matrix(M, n, m);
  	  	
	 	print_DP(M, n, m);
	 	
	 	cout<<endl;
	 	
	 	print_DS(M, n, m);
		
  		return 0;
 	}
