	#include <iomanip>
	#include <iostream>		// cout si cin
	#include <cstdlib>		// <stdlib.h> rand srand exit
	#include <ctime> 		// <time.h> time
	#include <conio.h>
	#include <cstring>  	//string.h
	
	#include <windows.h>  
	
	using namespace std;
	
	// pointeri
	
	// tip_date *nume_pointer <= (conform regulei de declarare a variabilei);
	
	// 1. * - valoare
	// 2. & - extrage adresa
	
	// 1. pointer prin referinta
	int main()
	{
		 srand(time(0));
		
		 /*
		 int a=10, a2, a10 ;
		 int *p, *p2, *p10 ; 
		
		 p = &a;
		
		 cout<<"	   a = "<<a<<" &a="<<&a<<endl;
		 cout<<"	   *p = "<<*p<<" p="<<p<<endl;
	
		 a=777;
		 
		 cout<<"	   a = "<<a<<" &a="<<&a<<endl;
		 cout<<"	   *p = "<<*p<<" p="<<p<<endl;
		
		 *p=888;
		 
		 cout<<"	   a = "<<a<<" &a="<<&a<<endl;
		 cout<<"	   *p = "<<*p<<" p="<<p<<endl;
		 */
		 
		 int a,b,c;
		 
		 int *pa, *pb, *pc;
		 
		 pa = &a;
		 pb = &b;
		 pc = &c;
		 
		 *pa = rand()%10;
		 *pb = rand()%10;
		 *pc = rand()%10;
		 
		 cout<<" a="<<*pa<<" b="<<*pb<<" c="<<*pc<<"\n R="<< *pa + *pb - *pc << endl;
		
	   	return 0;		
	}

