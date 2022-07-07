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
 	
 	
 	/*
 	
 	void f(int *a)
 	{
 		cout<<" f() adr a = "<<a<<endl;
 	}
 	
 	
 	int abc(int *a,int *b,int *c)
 	{
 		cout<<" abc() adr a = "<<a<<endl;
 		
 		f(a);
 		
 		return *a+*b-*c;
	}
 	
 
 	int main()
 	{
 		srand (time(0));
 		
 		int a,b,c;
 		
 		abc(&a,&b,&c);
 		
 		cout<<" main() adr a = "<<&a<<endl;
 		
 		return 0;
	 }
	 
 	*/ 
	
	
 	void show(char *mess,int *x)
 	{
 		cout<<mess<<*x<<"  adr a = "<<x<<endl; 	
 	}
	
	
 	int insertINT(char *mess)
 	{
 		int *x = new int;
 		
 		cout<<mess;
 		cin>>*x;
 		
 		return *x;	
 	}
	
	
 	int* abc(int *a,int *b,int *c)
 	{
 		
 		int *p = new int[100];
 		
 		*(p+0) = *a+*b-*c;
 		
 		cout<<" abc() adr p = "<<(p+0)<<endl;
 		
 		return (p+0);
 	}
 	
 
	int main()
 	{
 		srand (time(0));
 		
 		int *a = new int;
 		int *b = new int;
 		int *c = new int;
 		
 		*a = insertINT(" Enter a = ");
 		*b = insertINT(" Enter b = ");
 		*c = insertINT(" Enter c = ");
 		
 		cout<<endl;
 		
	 	show(" a = ",a);
	 	show(" b = ",b);
	 	show(" c = ",c);
	 	
	 	cout<<endl;
 	
	 	int *R = abc(a,b,c);	//nu folosim int *R = new int, dar int *R = alt pointer (int* abc)
      	show(" 1 R= ", R  );
      	cout<<endl;
		  	    
     	int *R1 = abc(a,b,c);
     	show(" 2 R= ", R1  );
     	cout<<endl;
     	
     	int *R2 = abc(a,b,c);
  		show(" 3 R= ", R2  );
 		cout<<endl;
 		
 		return 0;
	 }
	 
	 
