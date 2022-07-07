#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
  srand(time(0));
  int a,b,c;
 
  int CONTOR=0, CA=0, CB=0, CC=0, CP=0, CN=0, CIA=0, CIB=0, CIC=0; 
  //CA- Contor a impar, CB- Contor b impar, CC- Contor c impar, CP- contor nr. pozitive, CN- Contor nr. negative; 
  //CIA- contor intervale a, CIB- contor intervale b, CIC- contor intervale c
  int n;
  cout<<"Enter n= ";
  cin>>n;
  	
  W: 	
  CONTOR++;
  
  XA:
  a=rand()%200-100;
  if (a%2!=0) { CA++; goto XA; }
  if (a<0) CP++; else CN++;
  if (a>=0 && a<20) CIA++;
  
  XB:
  b=rand()%200-100; 
  if (b%2!=0) { CB++; goto XB; }
  if (b<0) CP++; else CN++;
  if (b>=20 && b<50) CIB++;
  
  XC:
  c=rand()%200-100; 
  if (c%2!=0) { CC++; goto XC; }
  if (c<0) CP++; else CN++;
  if (c>=50 && c<100) CIB++;
  
  cout<<"CONTOR="<<CONTOR<<" CA="<<CA<<" CB="<<CB<<" CC="<<CC<<" CP="<<CP<<" CN="<<CN<<
  " CIA="<<CIA<<" CIB="<<CIB<<" CIC="<<CIC<<" a="<<a<<" b="<<b<<" c="<<c<<" a+b-c="<<a+b-c<<endl;
  if (CONTOR<n) goto W;
  int R=a+b-c;
  if (R>=-10 && R<10)
  {
   a++;
   b++;
   c++;
   cout<<"R apartine intervalului -10..10 deci,";
  }
  else if (R%2==0 && R>=20 && R<50)
  {
   a--;
   b--;
   c--;
   cout<<"R apartine intervalului 20..50 si este par deci,";
  }
  cout<<"R="<<a+b-c;
  
  return 0;

}
