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
 	
 	
 	template <typename T1>
 	void show(char *mess, T1 x)
 	{
 		cout<<mess<<x<<endl;	
 	}
 	
 		
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
 	
 	
 	template <typename T1>
 	void showV(T1 v[], int n)
 	{
 		for (int i=0; i<n; i++)
 		cout<<setw(7)<<v[i];
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
	
	
 	template <typename T1>
 	T1 minmax( T1 v[], int n)
 	{
 	 	bool x = meniu();
 		
 		T1 max =  v[0];
 		
	 	for ( int i=0; i<n; i++ )
	 	{
	 		if ( max < v[i] ) 
	 		max = v[i];
	 	}
	 	
	 	T1 min = v[0];
	 	
	 	for ( int i=0; i<n; i++ )
	 	{
	 		if ( min > v[i] ) 
	 		min = v[i];
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
 	
 	
 	template <typename T1>
 	void sort(T1 v[], int n)
 	{
	 	bool z = true;
 		T1 temp;
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
 		
 			for( int i=0; i<n; i++) cout<<setw(7)<<v[i];
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
 			
 			for( int i=0; i<n; i++) cout<<setw(7)<<v[i];
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
 	
 	
 	template <typename T1>
 	void showM( T1 M[][100], int n, int m )
 	{
 		for(int i=0; i < n; i++)
 		{
 			for(int j=0; j < m; j++)
 			cout<<setw(7)<<M[i][j];
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
 	
 	
 	template <typename T1>
 	T1 sumaD(T1 M[][100], int n, int m)
 	{
 		bool x = alege();
 		T1 sDP = 0;
 		T1 sDS = 0;
 		
 		for ( int i=0; i<n; i++)
	 	{
			sDP+=M[i][i];
			sDS+=M[n-1-i][i];	
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
 	
 	
 	template <typename T1>
 	T1 sumaC( T1 M[][100], int n, int m )
 	{
 		int x;
 		x = alege1();
 		T1 s;
 		
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
 	
 	
 	template <typename T1>
 	void maxminC(T1 M[][100], int n, int m )
 	{
 		int x;
 		x = alege2();
 		
 		T1 max;
 		T1 min;
 		
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
	 		show (" ", sumaD( M, nM, mM ));
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
	 		cout<<endl<<endl;;
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
	
