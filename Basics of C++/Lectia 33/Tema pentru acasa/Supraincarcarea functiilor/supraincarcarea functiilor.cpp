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
 	
 	
 	void show(char *mess, char x)
 	{
 		cout<<mess<<x<<endl;	
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
 	
 	int meniu()
 	{
 		int x; 				
 		
 		do
	 	{
 			cout<<"\n Daca doriti sa aflati minimul tastati 0, iar daca doriti sa aflati maximul tastati 1!"
 				<<"\n Enter x = ";
 			
	 		cin>>x;
	 		
 		}	while (x<0 || x>1);
		
 		cout<<endl;
		
 		if (x) cout<<" Maximul = ";
 		else cout<<" Minimul = ";
 		
 		return x;
 	}
	
 	int minmax( int v[], int n)
 	{
 	 	bool x = meniu();
 		
 		int max = INT_MIN;
 		
	 	for ( int i=0; i<n; i++ )
	 	{
	 		if ( max < v[i] ) 
	 		max = v[i];
	 	}
	 	
	 	int min = INT_MAX;
	 	
	 	for ( int i=0; i<n; i++ )
	 	{
	 		if ( min > v[i] ) 
	 		min = v[i];
	 	}
		
 		return x ? max : min;	
 	}
 	
 	
 	double minmax( double v1[], int n)
 	{
 	 	bool x = meniu();
 		
 		double max = v1[0];
 		
	 	for ( int i=0; i<n; i++ )
	 	{
	 		if ( max < v1[i] ) 
	 		max = v1[i];
	 	}
	 	
	 	double min = v1[0];
	 	
	 	for ( int i=0; i<n; i++ )
	 	{
	 		if ( min > v1[i] ) 
	 		min = v1[i];
	 	}
		
 		return x ? max : min;	
 	}
 	
 	
 	char minmax( char v2[], int n)
 	{	 
 	 	bool x = meniu();
 		
 		char max = v2[0];
 		 
	 	for ( int i=0; i<n; i++ )
	 	{
	 		if ( max < v2[i] ) 
	 		max = v2[i];
	 	}
	
	 	char min = v2[0];
	 		
	 	for ( int i=0; i<n; i++ )
	 	{
	 		if ( min > v2[i] ) 
	 		min = v2[i];
	 	}

	 	return x ? max : min;	
 	}
		
	
 	int choose()
 	{
  		int y;
  		
	 	do
	 	{
 			cout<<"\n Daca doriti sa sortati descrescator tastati 0, iar daca doriti sa sortati crescator tastati 1!"
 				<<"\n Enter y = ";
 			
	 		cin>>y;
	 		
 		}	while (y<0 || y>1);	
 		
 		cout<<endl;
 		
 		if (y) cout<<" Sortarea crescator = ";
 		else cout<<" Sortarea descrescator = ";
 				
 		return y;
 	}
 	
 	
 	void sort(int v[], int n)
 	{
	 	bool z = true;
 		int temp;
	 	bool y = choose();
		
 		if (y)
 		{		
 			while(z)
 			{
	 			z=false;
	 			for (int i=0; i<n-1; i++)
	 			{
	 				if ( v[i] > v[i+1] )
		 			{
			 			temp=v[i];
			 			v[i]=v[i+1];
			 			v[i+1]=temp;	
					
		 				z=true;
		 			}
	 			}	 	
 			}		
 		
 			for( int i=0; i<n; i++) cout<<setw(3)<<v[i];
	 	}		
 		
 		else if (!y)
 		{
	 		z = true;
 	 		while(z)
 			{
 				z=false;
	 			for (int i=n-1; i>=0; i--)
	 			{
		 			if ( v[i] < v[i+1] )
		 			{
				 		temp=v[i];
				 		v[i]=v[i+1];
				 		v[i+1]=temp;	
				
		 				z=true;
		 			}
	 			}	 	
 			}
 			
 			for( int i=0; i<n; i++) cout<<setw(3)<<v[i];
		}	
 	}
 	
 	
 	void sort(double v1[], int n1)
 	{
	 	bool z = true;
 		double temp;
	 	bool y = choose();
		
 		if (y)
 		{		
 			while(z)
 			{
	 			z=false;
	 			for (int i=0; i<n1-1; i++)
	 			{
	 				if ( v1[i] > v1[i+1] )
		 			{
			 			temp=v1[i];
			 			v1[i]=v1[i+1];
			 			v1[i+1]=temp;	
					
		 				z=true;
		 			}
	 			}	 	
 			}		
 		
 			for( int i=0; i<n1; i++) cout<<setw(7)<<v1[i];
	 	}		
 		
 		else if (!y)
 		{
			z = true;
 	 		while(z)
 			{
 				z=false;
	 			for (int i=n1-1; i>=0; i--)
	 			{
		 			if ( v1[i] < v1[i+1] )
		 			{
				 		temp=v1[i];
				 		v1[i]=v1[i+1];
				 		v1[i+1]=temp;	
				
		 				z=true;
		 			}
	 			}	 	
 			}
 			
 			for( int i=0; i<n1; i++) cout<<setw(7)<<v1[i];
		}	
 	}
 	
 	
 	void sort(char v2[], int n2)
 	{
	 	bool z = true;
 		char temp;
	 	bool y = choose();
		
 		if (y)
 		{		
 			while(z)
 			{
	 			z=false;
	 			for (int i=0; i<n2-1; i++)
	 			{
	 				if ( v2[i] > v2[i+1] )
		 			{
			 			temp=v2[i];
			 			v2[i]=v2[i+1];
			 			v2[i+1]=temp;	
					
		 				z=true;
		 			}
	 			}	 	
 			}		
 		
 			for( int i=0; i<n2; i++) cout<<setw(5)<<v2[i];
	 	}		
 		
 		else if (!y)
 		{
			z = true;
 	 		while(z)
 			{
 				z=false;
	 			for (int i=n2-1; i>=0; i--)
	 			{
		 			if ( v2[i] < v2[i+1] )
		 			{
				 		temp=v2[i];
				 		v2[i]=v2[i+1];
				 		v2[i+1]=temp;	
				
		 				z=true;
		 			}
	 			}	 	
 			}
 			
 			for( int i=0; i<n2; i++) cout<<setw(5)<<v2[i];
		}	
 	}
 	
 	
 	void insertM( int M[][100], int n, int m )
 	{
 		for(int i=0; i < n; i++)
 		for(int j=0; j < m; j++)
 		M[i][j] = rand()%10;
 	}
 	
 	
 	void insertM( double M[][100], int n, int m )
 	{
 		for(int i=0; i < n; i++)
 		for(int j=0; j < m; j++)
 		M[i][j] = rand()%10*1.317;
 	}
 	
 	void insertM( char M[][100], int n, int m )
 	{
 		for(int i=0; i < n; i++)
 		for(int j=0; j < m; j++)
 		M[i][j] = 'a' + rand()%26;
 	}
 	
 	
 	void showM( int M[][100], int n, int m )
 	{
 		for(int i=0; i < n; i++)
 		{
 			for(int j=0; j < m; j++)
 			cout<<setw(3)<<M[i][j];
 			cout<<endl;
 		}
 	}
 	
 	
 	void showM( double M1[][100], int n1, int m1 )
 	{
 		for(int i=0; i < n1; i++)
 		{
 			for(int j=0; j < m1; j++)
 			cout<<setw(7)<<M1[i][j];
 			cout<<endl;
 		}
 	}
 	
 	
 	void showM( char M2[][100], int n2, int m2 )
 	{
 		for(int i=0; i < n2; i++)
 		{
 			for(int j=0; j < m2; j++)
 			cout<<setw(3)<<M2[i][j];
 			cout<<endl;
 		}
 	}
 	
 	
 	int alege()
 	{
  		int y;
  		
	 	do
	 	{
 			cout<<"\n Daca doriti sa aflati suma DS tastati 0, iar daca doriti sa aflati suma DP tastati 1!"
 				<<"\n Enter y = ";
 			
	 		cin>>y;
	 		
 		}	while (y<0 || y>1);	
 		
 		cout<<endl;
 		
 		if (y) cout<<" Suma DP = ";
 		else cout<<" Suma DS = ";
 				
 		return y;
 	}
 	
 	
 	int sumaD(int M[][100], int n, int m)
 	{
 		bool x = alege();
 		int sDP = 0;
 		int sDS = 0;
 		
 		for ( int i=0; i<n; i++)
	 	{
			sDP+=M[i][i];
			sDS+=M[n-1-i][i];	
 		}
 		
 		return x ? sDP : sDS;
 	}
 	
 	
 	double sumaD(double M1[][100], int n1, int m1)
 	{
 		bool x = alege();
 		double sDP = 0;
 		double sDS = 0;
 		
 		for ( int i=0; i<n1; i++)
	 	{
			sDP+=M1[i][i];
			sDS+=M1[n1-1-i][i];	
 		}
 		
 		return x ? sDP : sDS;
 	}
 	
 	
 	char sumaD(char M2[][100], int n2, int m2)
 	{
 		bool x = alege();
 		char sDP;
 		char sDS;
 		
 		for ( int i=0; i<n2; i++)
	 	{
			sDP+=M2[i][i];
			sDS+=M2[n2-1-i][i];	
 		}
 		
 		return x ? sDP : sDS;
 	}
 	
 	
 	int alege1()
 	{
  		int y;
  		
	 	do
	 	{
 			cout<<"\n Daca doriti sa aflati suma C1 tastati 1, daca doriti sa aflati suma C2 tastati 2"
 				<<", daca doriti sa aflati suma C3 tastati 3, daca doriti sa aflati suma C4 tastati 4"
 				<<"\n Enter y = ";
 			
	 		cin>>y;
	 		
 		}	while (y<1 || y>4);	
 		
 		cout<<endl;
 		
 		     if (y == 1) cout<<" Suma C1 = ";
 		else if (y == 2) cout<<" Suma C2 = ";
 		else if (y == 3) cout<<" Suma C3 = ";
 		else if (y == 4) cout<<" Suma C4 = ";
		 		
 		return y;
 	}
 	
 	int sumaC(int M[][100], int n, int m )
 	{
 		int x;
 		x = alege1();
 		int s=0;
 		
 		if ( x == 1)
 		{
 			for( int i=0; i<n/2;i++)
	 			for( int j=0; j<m/2;j++)
			 	s+=M[i][j];
			 	
		 	return s;
 		}
 		
 		if( x == 2)
 		{
 			for( int i=0; i<n/2;i++)
			 	for( int j=m/2; j<m;j++)
		 		s+=M[i][j];
			
 			return s;
	 	}
		
 		if( x == 3)
 		{
			for( int i=n/2; i<n;i++)
	 			for( int j=0; j<m/2;j++)
	 			s+=M[i][j];
	
 			return s;
 		}
		
	 	if( x == 4)
	 	{
		 
	 		for( int i=n/2; i<n;i++)
	 			for( int j=m/2; j<m;j++)
	 			s+=M[i][j];
		
	 		return s;
		 	}
 	}
 	
 	
 	double sumaC(double M[][100], int n, int m )
 	{
 		int x;
 		x = alege1();
 		double s=0;
 		
 		if ( x == 1)
 		{
 			for( int i=0; i<n/2;i++)
	 			for( int j=0; j<m/2;j++)
			 	s+=M[i][j];
			 	
		 	return s;
 		}
 		
 		if( x == 2)
 		{
 			for( int i=0; i<n/2;i++)
			 	for( int j=m/2; j<m;j++)
		 		s+=M[i][j];
			
 			return s;
 		}
		
 		if( x == 3)
	 	{
			for( int i=n/2; i<n;i++)
	 			for( int j=0; j<m/2;j++)
	 			s+=M[i][j];
	
 			return s;
 		}
		
	 	if( x == 4)
	 	{
		 
	 		for( int i=n/2; i<n;i++)
	 			for( int j=m/2; j<m;j++)
	 			s+=M[i][j];
		
	 		return s;
		 	}
 	}
 	
 	
 	char sumaC(char M[][100], int n, int m )
 	{
 		int x;
 		x = alege1();
 		char s;
 		
 		if ( x == 1)
 		{
 			for( int i=0; i<n/2;i++)
	 			for( int j=0; j<m/2;j++)
			 	s+=M[i][j];
			 	
		 	return s;
 		}
 		
 		if( x == 2)
 		{
 			for( int i=0; i<n/2;i++)
			 	for( int j=m/2; j<m;j++)
		 		s+=M[i][j];
			
 			return s;
		}
		
 		if( x == 3)
 		{
	 		for( int i=n/2; i<n;i++)
	 			for( int j=0; j<m/2;j++)
	 			s+=M[i][j];
	
 			return s;
	 	}
		
	 	if( x == 4)
	 	{
		 
	 		for( int i=n/2; i<n;i++)
	 			for( int j=m/2; j<m;j++)
	 			s+=M[i][j];
		
	 		return s;
		 	}
 	}
 	
 	
 	int alege2()
 	{
  		int y;
  		
	 	do
	 	{
 			cout<<"\n Daca doriti sa aflati max si min C1 tastati 1, daca doriti sa aflati max si min C2 tastati 2"
 				<<", daca doriti sa aflati max si min C3 tastati 3, daca doriti sa aflati max si min C4 tastati 4"
 				<<"\n Enter y = ";
 			
	 		cin>>y;
	 		
 		}	while (y<1 || y>4);	
 		
 		cout<<endl;
 		
 		return y;
 	}
 	
 	
 	void maxminC(int M[][100], int n, int m )
 	{
 		int x;
 		x = alege2();
 		
 		int max;
 		int min;
 		
 		if ( x == 1)
 		{
 			max = M[0][0];
 			min = M[0][0];
 			
 			for( int i=0; i<n/2;i++)
	 			for( int j=0; j<m/2;j++)
	 			{
	 				if (max < M[i][j]) max = M[i][j];
	 				if (min > M[i][j]) min = M[i][j];
		 		}
	 		 	
			 	cout<< " Max cadranul 1 = "<<max<<endl;
			 	cout<< " Min cadranul 1 = "<<min<<endl;
 		}
 		
 		if( x == 2)
 		{
 			max = M[0][m/2];
 			min = M[0][m/2];
 			
 			for( int i=0; i<n/2;i++)
			 	for( int j=m/2; j<m;j++)
		 		{
	 				if (max < M[i][j]) max = M[i][j];
	 				if (min > M[i][j]) min = M[i][j];
		 		}
	 		 	
			 	cout<< " Max cadranul 2 = "<<max<<endl;
			 	cout<< " Min cadranul 2 = "<<min<<endl;
 		}
	
		
 		if( x == 3)
 		{
 			max = M[n/2][0];
 			min = M[n/2][0];
 			
			for( int i=n/2; i<n;i++)
	 			for( int j=0; j<m/2;j++)
	 			{
	 				if (max < M[i][j]) max = M[i][j];
	 				if (min > M[i][j]) min = M[i][j];
		 		}
	 		 	
			 	cout<< " Max cadranul 3 = "<<max<<endl;
			 	cout<< " Min cadranul 3 = "<<min<<endl;
 		
 		}
		
	 	if( x == 4)
	 	{
		 	max = M[n/2][m/2];
		 	min = M[n/2][m/2];
		 	
	 		for( int i=n/2; i<n;i++)
	 			for( int j=m/2; j<m;j++)
	 			{
	 				if (max < M[i][j]) max = M[i][j];
	 				if (min > M[i][j]) min = M[i][j];
		 		}
	 		 	
			 	cout<< " Max cadranul 4 = "<<max<<endl;
			 	cout<< " Min cadranul 4 = "<<min<<endl;
 		}
 	}
 	
 	
 	void maxminC(double M[][100], int n, int m )
 	{
 		int x;
 		x = alege2();
 		
 		double max;
 		double min;
 		
 		if ( x == 1)
 		{
 			max = M[0][0];
 			min = M[0][0];
 			
 			for( int i=0; i<n/2;i++)
	 			for( int j=0; j<m/2;j++)
	 			{
	 				if (max < M[i][j]) max = M[i][j];
	 				if (min > M[i][j]) min = M[i][j];
		 		}
	 		 	
			 	cout<< " Max cadranul 1 = "<<max<<endl;
			 	cout<< " Min cadranul 1 = "<<min<<endl;
 		}
 		
 		if( x == 2)
 		{
 			max = M[0][m/2];
 			min = M[0][m/2];
 			
 			for( int i=0; i<n/2;i++)
			 	for( int j=m/2; j<m;j++)
		 		{
	 				if (max < M[i][j]) max = M[i][j];
	 				if (min > M[i][j]) min = M[i][j];
		 		}
	 		 	
			 	cout<< " Max cadranul 2 = "<<max<<endl;
			 	cout<< " Min cadranul 2 = "<<min<<endl;
 		}
	
		
 		if( x == 3)
 		{
 			max = M[n/2][0];
 			min = M[n/2][0];
 			
			for( int i=n/2; i<n;i++)
	 			for( int j=0; j<m/2;j++)
	 			{
	 				if (max < M[i][j]) max = M[i][j];
	 				if (min > M[i][j]) min = M[i][j];
		 		}
	 		 	
			 	cout<< " Max cadranul 3 = "<<max<<endl;
			 	cout<< " Min cadranul 3 = "<<min<<endl;
 		
 		}
		
	 	if( x == 4)
	 	{
		 	max = M[n/2][m/2];
		 	min = M[n/2][m/2];
		 	
	 		for( int i=n/2; i<n;i++)
	 			for( int j=m/2; j<m;j++)
	 			{
	 				if (max < M[i][j]) max = M[i][j];
	 				if (min > M[i][j]) min = M[i][j];
		 		}
	 		 	
			 	cout<< " Max cadranul 4 = "<<max<<endl;
			 	cout<< " Min cadranul 4 = "<<min<<endl;
 		}
 	}
 	
 	
 	void maxminC(char M[][100], int n, int m )
 	{
 		int x;
 		x = alege2();
 		
 		char max;
 		char min;
 		
 		if ( x == 1)
 		{
 			max = M[0][0];
 			min = M[0][0];
 			
 			for( int i=0; i<n/2;i++)
	 			for( int j=0; j<m/2;j++)
	 			{
	 				if (max < M[i][j]) max = M[i][j];
	 				if (min > M[i][j]) min = M[i][j];
		 		}
	 		 	
			 	cout<< " Max cadranul 1 = "<<max<<endl;
			 	cout<< " Min cadranul 1 = "<<min<<endl;
 		}
 		
 		if( x == 2)
 		{
 			max = M[0][m/2];
 			min = M[0][m/2];
 			
 			for( int i=0; i<n/2;i++)
			 	for( int j=m/2; j<m;j++)
		 		{
	 				if (max < M[i][j]) max = M[i][j];
	 				if (min > M[i][j]) min = M[i][j];
		 		}
	 		 	
			 	cout<< " Max cadranul 2 = "<<max<<endl;
			 	cout<< " Min cadranul 2 = "<<min<<endl;
 		}
	
		
 		if( x == 3)
 		{
 			max = M[n/2][0];
 			min = M[n/2][0];
 			
			for( int i=n/2; i<n;i++)
	 			for( int j=0; j<m/2;j++)
	 			{
	 				if (max < M[i][j]) max = M[i][j];
	 				if (min > M[i][j]) min = M[i][j];
		 		}
	 		 	
			 	cout<< " Max cadranul 3 = "<<max<<endl;
			 	cout<< " Min cadranul 3 = "<<min<<endl;
 		
 		}
		
	 	if( x == 4)
	 	{
		 	max = M[n/2][m/2];
		 	min = M[n/2][m/2];
		 	
	 		for( int i=n/2; i<n;i++)
	 			for( int j=m/2; j<m;j++)
	 			{
	 				if (max < M[i][j]) max = M[i][j];
	 				if (min > M[i][j]) min = M[i][j];
		 		}
	 		 	
			 	cout<< " Max cadranul 4 = "<<max<<endl;
			 	cout<< " Min cadranul 4 = "<<min<<endl;
 		}
 	}
 	
 	
 	int main()
 	{
 		srand(time(0));
	 	
	 	
	 	//int
	 	int v[100], n;
	 	n = INsert(" Enter int n = ", n);
	 	
	 	cout<<endl;
	 	
 		insertV(v, n);
	 	showV(v, n);
	 	
	 	cout<<endl<<endl;
	 	
	 	for (int i=0; i<2; i++)	
	 	{
		 	show(" ", minmax( v, n ));
 			cout<<endl;	
	 	}
	 	
	 	for ( int i=0; i<2; i++)
	 	{
	 		sort(v, n);
	 		cout<<endl<<endl;
	 	}
	 	
	 	system("pause");
	 	system("cls");
	 	
	 	
	 	//double
	 	double v1[100], n1;
	 	n1 = INsert(" Enter double n = ", n1);
	 	
	 	cout<<endl;
	 	
	 	insertV(v1, n1);
	 	showV(v1, n1);
	 	
	 	cout<<endl<<endl;
	 	
	 	for (int i=0; i<2; i++)	
	 	{
		 	show(" ", minmax( v1, n1 ));
 			cout<<endl<<endl;	
	 	}
	 	
	 	for ( int i=0; i<2; i++)
	 	{
	 		sort(v1, n1);
	 		cout<<endl<<endl;
	 	}
	 	
	 	system("pause");
	 	system("cls");


	 	//char
	 	char v2[100], n2;
	 	n2 = INsert(" Enter char n = ", n2);
	 	cout<<endl;
	 	
	 	insertV(v2, n2);
	 	showV(v2, n2);
	 	
	 	cout<<endl<<endl;
	 	
	  	for (int i=0; i<2; i++)	
	 	{
 			show(" ", minmax( v2, n2 ));
 			cout<<endl<<endl;	
	 	}
	 	
	 	for ( int i=0; i<2; i++)
	 	{
	 		sort( v2, n2 );
	 		cout<<endl<<endl;
	 	}
	 	
	 	system("pause");
	 	system("cls");
	 	
	 	
	 	//Matrix
	 	
	 	//int
	 	int M[100][100],  nM , mM;
	 	
	 	do
	 	{
		 	nM = INsert("\n Enter int n par = ", nM);
	 		mM = INsert(" Enter int m = n = ", mM);
	 	} while ( nM % 2 != 0 || nM!=mM );
	 	
	 	cout<<endl;
	 	
	 	insertM( M, nM, mM );
 		  showM( M, nM, mM );
 		   
 		cout<<endl;
	 	
	 	for (int i=0; i<2; i++)
	 	{	
	 		show (" ", sumaD( M, nM, mM));
	 		cout<<endl<<endl;
	 	}
	 	
	 	for (int i=0; i<4; i++)
	 	{	
	 		show (" ", sumaC( M, nM, mM));
	 		cout<<endl<<endl;
	 	}
	 	
	 	for (int i=0; i<4; i++)
	 	{	
	 		maxminC( M, nM, mM);
	 		cout<<endl<<endl;
	 	}
	 	
 		system("pause");
	 	system("cls");
		
 		//double
 		double M1[100][100];
 		int nM1 , mM1;
	 	
		 do
	 	{
		 	nM1 = INsert("\n Enter double n par = ", nM1);
	 		mM1 = INsert(" Enter double m = n = ", mM1);
	 	} while ( nM1 % 2 != 0 || nM1!=mM1 );
	 	
	 	cout<<endl;
	 	
	 	insertM( M1, nM1, mM1 );
 		  showM( M1, nM1, mM1 );
 		   
 		cout<<endl;
	 	
	 	for (int i=0; i<2; i++)
	 	{	
	 		show (" ", sumaD( M1, nM1, mM1));
	 		cout<<endl<<endl;
	 	}
	 	
	 	for (int i=0; i<4; i++)
	 	{	
	 		show (" ", sumaC( M1, nM1, mM1));
	 		cout<<endl<<endl;
	 	}
	 	
	 	for (int i=0; i<4; i++)
	 	{	
	 		maxminC( M1, nM1, mM1);
	 		cout<<endl<<endl;
	 	}
	 	
	 	system("pause");
	 	system("cls");
	 	
	 	//char
 		char M2[100][100];
	 	int  nM2 , mM2;
	 	
	 	do
	 	{
		 	nM2 = INsert("\n Enter char n par = ", nM2);
	 		mM2 = INsert(" Enter char m = n = ", mM2);
	 	} while ( nM2 % 2 != 0 || nM2!=mM2 );
	 	
	 	cout<<endl;
	 	
	 	insertM( M2, nM2, mM2 );
 		  showM( M2, nM2, mM2 );
 		   
 		cout<<endl;
	 	
	 	for (int i=0; i<2; i++)
	 	{	
	 		show (" ", sumaD( M2, nM2, mM2));
	 		cout<<endl<<endl;
	 	}
	 	
	 	for (int i=0; i<4; i++)
	 	{	
	 		show (" ", sumaC( M2, nM2, mM2));
	 		cout<<endl<<endl;
	 	}
	 	
	 	for (int i=0; i<4; i++)
	 	{	
	 		maxminC( M2, nM2, mM2);
	 		cout<<endl<<endl;
	 	}
	 	
	 	system("pause");
	 	system("cls");
	 
 		return 0;
 	}
	
