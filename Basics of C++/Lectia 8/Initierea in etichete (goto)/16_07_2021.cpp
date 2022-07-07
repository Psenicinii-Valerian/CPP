#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
  srand(time(0));
/*------------------------------------------------------------
  a=rand()%50-25;
  b=rand()%100-50;
  c=rand()%57;
  cout<<"a="<<a<<" b="<<b<<" c="<<c<<endl;
  
  if (a%2==0) 
  {
  	a=a+1;
  	cout<<"A este par =>: a se transforma in "<<a<<endl;
  }
  else
  {
  	cout<<"A este impar, deci nu sufera modificari"<<endl;;
  }
  if (b%2!=0)
  {
  	b=b+1;
  	cout<<"B este impar =>: b se transforma in "<<b<<endl;
  }
   else
  {
  	cout<<"B este par, deci nu sufera modificari"<<endl;;
  }
  cout<<"a+b-c="<<a+b-c<<endl;
  ------------------------------------------------------------
  a=0;
  cout<<"1 a= "<<++a<<endl;
  cout<<"2 a= "<<a++<<endl;
  cout<<"3 a= "<<++a<<endl;
  cout<<"4 a= "<<a++<<endl;
  cout<<"5 a= "<<a<<endl;
  ------------------------------------------------------------
  int a=0, b=0, c=0;
  a++;
  c++;
  b++;
  1) cout<<"a="<<a<<" b="<<b<<" c="<<c<<" a+b-c="<<a+b-c<<endl;
  int R=++a+ ++b- ++c;
  2) cout<<"a="<<a<<" b="<<b<<" c="<<c<<" a+b-c="<<R<<endl;
  ------------------------------------------------------------
  int a,b,c;
  int C=0;
  
  Eticheta:
  	
  C++;
  a=rand()%10;
  b=rand()%20;
  c=rand()%30; 
  cout<<"a="<<a<<" b= "<<b<<" c= "<<c<<" a+b-c="<<a+b-c<<endl;
  if (C<10) goto Eticheta;
  ------------------------------------------------------------
  int a,b,c;
  int CONTOR=0;
  int n;
  cout<<"Enter n= ";
  cin>>n;
  	
  W: 
  	
  CONTOR++;
  a=rand()%100;
  b=rand()%100;
  c=rand()%100; 
  if (a%2!=0) a++;
  if (b%2!=0) b++;
  if (c%2!=0) c++;
  cout<<"CONTOR= "<<CONTOR<<" a="<<a<<" b= "<<b<<" c= "<<c<<" a+b-c="<<a+b-c<<endl;
  if (CONTOR<n) goto W;
  ------------------------------------------------------------*/
  int a,b,c;
 
  int CONTOR=0, CA=0, CB=0, CC=0;
  int n;
  cout<<"Enter n= ";
  cin>>n;
  	
  W: 	
  CONTOR++;
  
  XA:
  a=rand()%100;
  if (a%2!=0) { CA++; goto XA; }
  
  XB:
  b=rand()%100; 
  if (b%2!=0) { CB++; goto XB; }
  
  XC:
  c=rand()%100; 
  if (c%2!=0) { CC++; goto XC; }
  
  cout<<"CONTOR= "<<CONTOR<<" CA="<<CA<<" CB="<<CB<<" CC="<<CC<<" a="<<a<<" b= "<<b<<" c= "<<c<<" a+b-c="<<a+b-c<<endl;
  if (CONTOR<n) goto W;
  
  return 0;
}



