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
		 
		 
		 int a,b,c,n,R,S;
		 
		 int *pa, *pb, *pc, *pn, *pR, *pS;
		 
		 pa = &a;
		 pb = &b;
		 pc = &c;
		 pn = &n;
		 pR = &R;
		 pS = &S;
		 
		 *pS = 0;
		 
		 cout<<" De cate ori vreti sa executati operatia a+b-c? :: ";
		 cin>>*pn;
		 cout<<endl;
		 
		 int i, *pi; 
      	 pi = &i;
      	 
      	 */
      	 //Suma rezultatelor 
		 /*
      	 for( *pi = 0 ; *pi < *pn ; *pi+=1 ) // *pi+=1 => *pi = *pi + 1      // ERROR  *pi++  =>  *pi = pi + 1 
		 {
		 
		 	*pa = rand()%10;
		 	*pb = rand()%10;
		 	*pc = rand()%10;
		 	*pR = *pa + *pb - *pc;
		 	cout<<setw(3)<<i+1<<". a="<<*pa<<" b="<<*pb<<" c="<<*pc<<"\n\t R="<< *pR <<endl<<endl;
		 	*pS += *pR;	 	
		 }
		 
		 cout<<" Suma rezultatelor = "<<*pS<<endl; 
		 */
		 
		 //R == x, x - de la tastatura
		 /*
		 int x, *px, cc, *pcc;
		 
		 px = &x;
		 pcc = &cc;
		 
		 cout<<" Dati x = ";
		 cin>>*px;
		 cout<<endl;
		 
		 *pcc = 0;
		 
		  for( *pi = 0 ; *pi < *pn ; *pi+=1 ) // *pi+=1 => *pi = *pi + 1      // ERROR  *pi++  =>  *pi = pi + 1 
		 {
		 
		 	*pa = rand()%10;
		 	*pb = rand()%10;
		 	*pc = rand()%10;
		 	*pR = *pa + *pb - *pc;
		 	
		 	 if ( *pR == *px ) *pcc+=1;
		 	
		 	cout<<setw(3)<<i+1<<". a="<<*pa<<" b="<<*pb<<" c="<<*pc<<"\n\t R="<< *pR <<endl<<endl;
		 	 	
		 }
		 
		 cout<<setw(3)<<*pcc<<" raspunsuri au fost egale cu x inserat de la utilizator"<<endl;
		 */
		 
		 //Pointeri de referinta si vectori
		 
		 int v[100], n, s; 
    	 int *pv, *pn, *ps;
    	 
    	 ps = &s;
     	 pn = &n;
     	 pv = v; //  &v[0]    
     	 
		 *ps=0;
		 
     	 cout<<" Enter n=";
     	 cin>>*pn;
     	 
     	 cout<<endl;
     	 
     	 for (int i=0; i < *pn; i++)
     	 {	
      		 *(pv+i) = rand()%10;
      		 
      	  	 cout<<setw(2)<<i+1<<" addr = "<< pv+i <<" val = "<< *(pv+i) <<" - "<< v[i] <<endl;
      	  	 
   			 *ps +=  *(pv+i);
		 }
		 
		 cout<<endl;
		 
    	 // 1. suma vectorilor
 		 cout<<" Suma = "<<*ps<<endl;
 		 
 		 cout<<endl;
 		 
   		 double vd[100], sd, max, *pvd, *psd, *pmax ;
   		 
    	 pvd = vd;
   	 	 psd = &sd;
    	 pmax = &max;
    	 
    	 *pmax=INT_MIN;
 		 *ps=0;
 		 
 		 for(int i=0; i < *pn; i++)
     	 {
      	  	 *(pvd+i) = rand()%10*1.0479;
      	  	 
      		 cout<<setw(2)<<i+1<<" addr = "<< pvd+i <<" val = "<< *(pvd+i) <<" - "<< vd[i] <<endl;
      		 
    		 *psd +=  *(pvd+i);
    		 
    		 if( *pmax < *(pvd+i) )*pmax=*(pvd+i);
 		 }
 		 
 		 cout<<endl;
 		 
 		 cout<<" Suma double = "<<*psd<<endl;
 		 
     	 // 2. max   
     	 cout<<" Max = "<<*pmax<<endl;
     	 
 		 // 3. new 2 vectori []1 - par, []2 - impar
 		 cout<<endl;
 		 
 		 int v1[100], v1n, v2[100], v2n;
 		 int *pv1, *pv1n, *pv2, *pv2n;
 		 
 		 pv1n = &v1n;
 		 pv2n = &v2n;
 		 pv1 = v1;
 		 pv2 = v2;
 		 
 		 *pv1n = 0;
 		 *pv2n = 0;
 		
 		 for ( int i=0; i<*pn; i++)
 		 {
 		 	 if ( *(pv + i) %2 == 0) { *( pv1 + *pv1n ) = *(pv+i); (*pv1n)++; }
 		 	 else { *(pv2 + *pv2n) = *(pv + i); (*pv2n)++; } 
 		 }	 
 		 
 	     for(int i=0; i < *pn; i++)
      	 { 
      		 cout<<setw(2)<<i+1<<" pv => addr = "<< pv+i <<" val = "<< *(pv+i) <<endl;
 		 }
 		 	
   		 cout<<endl;
   		
  		 for(int i=0; i < *pv1n; i++)
      	 { 
      	 	 cout<<setw(2)<<i+1<<" pv1 => addr = "<< pv1+i <<" val = "<< *(pv1+i) <<endl;
  		 }
  		 
  		 cout<<endl;
  		 
   		 for(int i=0; i < *pv2n; i++)
     	 { 
      		 cout<<setw(2)<<i+1<<" pv2 => addr = "<< pv2+i <<" val = "<< *(pv2+i) <<endl;
  		 }
			    
    return 0;
    }

