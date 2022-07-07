#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>

using namespace std;
int main()
{
srand(time(0));


/*int v[100];
int n=rand()%25+5;

for (int i=0,a,b,c; i<n; i++)
{
	a=rand()%20+5;
	b=rand()%20+5;
	c=rand()%20+5;
	v[i]=a+b-c;
	cout<<setw(3)<<i<<" din "<<n<<" a= "<<a<<" b= "<<b<<" c= "<<c<<" R="<<v[i]<<endl;
}


   cout<<endl;
  
  
   for( int i=0; i<n; i++)
   {
   	
   	 cout<<"v["<<i<<"]="<<v[i]<<endl;
   	 
   }
   
   int sp=0,si=0,C=0;
   
  

   for( int i=0; i<n; i++)
   { 
     if (v[i]%2==0)
   	 sp+=v[i];
   	 else si+=v[i];
   }
    cout<<"\nSuma elementelor pare este= "<<sp<<endl;
    cout<<"Suma elementelor impare este= "<<si<<endl<<endl;
    
    cout<<"Elemente intre 10 si 30 sunt:"<<endl;
    for( int i=0; i<n; i++)
   { 
     if (v[i]<30 && v[i]>=10)
     {
     	cout<<"v["<<C<<"]="<<v[i]<<endl;
	 	C++;	 
	 }
   }
   
   int spi=0, sip=0;
      for( int i=0; i<n; i++)
   { 
     if (v[i]%2==0 && i%2!=0)
   	 spi+=v[i];
   	 if (v[i]%2!=0 && i%2==0)
   	 sip+=v[i];
   }
   
   cout<<"\nSuma elementelor pare de pe poz impare este= "<<spi<<endl;
   cout<<"Suma elementelor impare de pe poz pare este= "<<sip<<endl<<endl;
   
   int CU=0;
   
   for( int i=0; i<n; i++)
   { 
     if (v[n-1]==v[i])
   	 CU++;
   }
   
cout<<"Val ultimului element se repeta de "<<CU<<" ori"<<endl;

    int CE=0;
    for( int i=0; i<n; i++)
   	{ 
     	if (i==v[i])
     	{
   	 	CE++;
   	 	cout<<"v["<<i<<"]= "<<v[i]<<endl;
   	 	}
  	}

cout<<"Valoarea elementului concide de "<<CE<<" ori cu valoarea elementului"<<endl;

 int sj1=0,sj2=0;
 for( int i=0; i<n; i++)
 {
 	
 if (i<n/2) sj1+=v[i];
 else sj2+=v[i];

 }

cout<<"Suma primei jumatati= "<<sj1<<endl;
cout<<"Suma celei de-a doua jumatati= "<<sj2<<endl; */


int v[100];
int n=rand()%10+5;
cout<<"n="<<n<<endl<<endl;

 
    for( int i=0; i<n; i++)
   	{
   	 	v[i]=rand()%20;
   	}

	for( int i=1; i<n; i++)
   	{
   	 	cout<<"v["<<i<<"]="<<v[i]<<endl;
   	}

    //Algoritmul gasirii elementului maximal din tablou:


	//Forma 1:
/*    int MAX=v[0]; //MAX primeste valoarea primul element si ulterior o compara cu valoarea celorlalte elemente
 
 	for( int i=1; i<n; i++) //i=1 deoarece nu are sens sa verificam daca MAX (v[i]) < v[i] - FALSE
   	{
   	 	if (MAX < v[i]) MAX=v[i];	
   	}
   	
   	 	cout<<"Valoarea maximala din vector este "<<MAX<<endl; 
   
   
   //Forma 2:
   int MAX=INT_MIN; //MAX primeste valoarea minima posibila
    
 	for( int i=0; i<n; i++)
   	{
   	 	if (MAX < v[i]) MAX=v[i];	
   	}
   	
   	 	cout<<"Valoarea maximala din vector este "<<MAX<<endl; */


	//Forma 3:
	int MAX=-1; //MAX primeste (valoarea minima posibila prin calcul) -1 
	           //(rand()%10 a lui v[i] de mai sus are valoarea minima= 0 si -1 va fi -1)
    
 	for( int i=0; i<n; i++)
   	{
   	 	if (MAX < v[i]) MAX=v[i];	
   	}
   	
   	 	cout<<"Valoarea maximala din vector este "<<MAX<<endl; 





return 0;
}
