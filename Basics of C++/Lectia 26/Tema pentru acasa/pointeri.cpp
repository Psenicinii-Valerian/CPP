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
		 
		 int a,b,c,n;
		 
		 int *pa, *pb, *pc, *pn;
		 
		 pa = &a;
		 pb = &b;
		 pc = &c;
		 pn = &n;
		 
		 cout<<" De cate ori vreti sa executati operatia a+b-c? :: ";
		 cin>>*pn;
		 cout<<endl;
		 for ( int i=0; i<*pn; i++)
		 {
		 
		 	*pa = rand()%10;
		 	*pb = rand()%10;
		 	*pc = rand()%10;
		 
		 	cout<<setw(3)<<i+1<<". a="<<*pa<<" b="<<*pb<<" c="<<*pc<<"\n\t R="<< *pa + *pb - *pc <<endl<<endl;
		 }
	   	return 0;		
	}

