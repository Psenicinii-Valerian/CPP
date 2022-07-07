 	#include <iomanip>
 	#include <iostream>		// cout si cin
 	#include <cstdlib>		// <stdlib.h> rand srand exit
 	#include <ctime> 		// <time.h> time
 	#include <conio.h>
 	#include <cstring>  	//string.h
 	#include <windows.h>  
 	
 	using namespace std;
	
 	int insertINT(char mess[256])
 	{
 	 	cout<<mess;
 	 	int x;
 	 	cin>>x;
 		
 		return x;
 	}
 	
 	void show(char mess[256], int x)
 	{
 		cout<<mess<<x<<endl;	
 	}
 	
 	int random(int x, int y)
 	{
	 	int q;
 		do
 		{
		 q=rand()%200-100;	
		} while (q>=x || q<y);
 		
 		return q;
 	}
 	
 	void showRAND(char mess[256], int q)
 	{
 		cout<<mess<<q<<endl;	
 	}
      
 	int abc(int a, int b, int c)
 	{
 		int Rsp=a+b-c;
 		return Rsp;		
 	}
 	
 	int suma(int v[100], int n)
 	{
 		int suma=0;
 		for (int i=0; i<n; i++)
 	  	suma+=v[i];
 	  	
 	  	return suma;
 	}
 	
 	int max(int v[100], int n)
 	{
 		int max=INT_MIN;
 		for (int i=0; i<n; i++)	 	if ( max < v[i] ) max=v[i];
 		
 		return max;
	 }
            	
 	int main()
 	{	
 		srand(time(0));
 			
 		int v[100];
	 	int y1, x1, a, y2, x2, b, y3, x3, c;
 		
 		int n = insertINT(" Enter de cate ori se va repeta a+b-c = ");
 		show(" n = ",n);
 		cout<<endl;
 		
 		
 		for (int i=0; i<n; i++)
 		{
 			y1 = insertINT(" Enter limita de jos a intervalului de maxim de 2 cifre pentru a = ");
 		    x1 = insertINT(" Enter limita de sus a intervalului de maxim de 2 cifre pentru a = ");
 			a = random(x1, y1);
	 		showRAND(" a = ",a);
	 		cout<<endl;
		
 			y2 = insertINT(" Enter limita de jos a intervalului de maxim de 2 cifre pentru a = ");
 			x2 = insertINT(" Enter limita de sus a intervalului de maxim de 2 cifre pentru a = ");
 			b = random(x2, y2);
 			showRAND(" b = ",b);
 			cout<<endl;
 		
 			y3 = insertINT(" Enter limita de jos a intervalului de maxim de 2 cifre pentru a = ");
 			x3 = insertINT(" Enter limita de sus a intervalului de maxim de 2 cifre pentru a = ");
 			c = random(x3, y3);
 			showRAND(" c = ",c);
 			cout<<endl;

 	  		v[i]=abc(a,b,c);
 			show(" R = a+b-c = ",v[i]);
 			cout<<endl;
 		
 			system("pause");
 			system("cls");
 		} 
 		
	 	cout<<" v :: ";
	 	for (int i=0; i<n; i++) cout<<setw(3)<<v[i];
	 	cout<<endl;
		
 		int s;
	 	s=suma(v,n);
 		show(" Suma = ", s);
 		
 		int maxim;
 		maxim=max(v, n);
 		show(" Numarul maxim = ", maxim);
 				
	 	return 0;		
 	}    
 		
