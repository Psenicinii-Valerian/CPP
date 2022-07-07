 	#include <iomanip>
 	#include <iostream>   // cout si cin 
 	#include <cstdlib>    // <stdlib.h>   rand srand exit
 	#include <ctime>      // <time.h>  time 
 	#include <conio.h> 
 	#include <cstring>    // string.h
 	#include <windows.h>
 	using namespace std;
    
 	// functii 
	  
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
 	
 	// functia recursiva - functia care se apeleaza singura pe dansa in propriul corp
 	
 	
 	void f()
 	{
 		cout<<" f() "<<endl;
		 
 		f();	
 	}
 	
 	
 	void show(char mess[], int n)
 	{
 		for (int i=0; i<n; i++)
 		cout<<setw(3)<<i<<mess<<endl;		
 	}
 	
 	
 	void showR(char mess[], int n, int i)
 	{
 		if (i < n)	
 		{
 			cout<<setw(3)<<i<<mess<<endl;
 			
 			showR(mess, n, ++i);
	 	}
 	}
 	
 	
 	void insertV(int v[], int n, int i)
 	{
 		if (i < n)	
 		{	
 			v[i]=rand()%10;
 			
 			insertV(v, n, ++i);
 		}
 	}
	
	
 	void showV(int v[], int n, int i)
 	{
 		if (i < n)	
 		{
 			cout<<setw(3)<<"  v["<<i<<"]="<<v[i]<<endl;
 			
 			showV(v, n, ++i);
	 	}
 	}
 		
 	
 	void showVrever(int v[], int n, int i)
 	{
 		if (i < n)	
 		{
 			cout<<setw(3)<<"  v["<<n-1-i<<"]="<<v[n-1-i]<<endl;
 			
 			showVrever(v, n, ++i);
	 	}
 	}
 	
 	
 	int main()
 	{
 		srand (time(0));
 		
 		//f();
 			
 		show(" IT STEP 2021 ", 10);
 			
 		cout<<endl;
 		
 		showR(" R IT STEP 2021 ", 10, 0);
 		
 		cout<<endl;
 		
 		int v[100], n=rand()%10+3; 		
 		
 		cout<<"  n = "<<n<<endl;
 		
 		cout<<endl;
 		
 		insertV(v, n, 0);
 		  showV(v, n, 0);
 		  
 		cout<<endl;
 		  
 		  showVrever(v, n, 0);
 		
 		return 0;
 	}
