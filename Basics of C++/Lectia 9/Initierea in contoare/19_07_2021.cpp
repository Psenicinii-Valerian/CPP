#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;
int main()
{ srand(time(0));

int a,b,c,R;
int C=0, CIA=0, SVIA=0, SVIB=0, CIB=0, CP=0, CI=0, VI=0;

//int max= INT_MIN;  //prin constanta
int max= -10;        //prin calculul a valorilor minime a-0, b-0,c-9 (deoarece e negativ) =>: 0+0-9-1=10
//int min= INT_MAX   //prin constanta
int min=128;         //prin calcul a valorilor maxime a-98 (deoarece a=> 0..100 par), b=29 (deoarece b=> 20..30 impar), c=0
                     //=>: 98+29+1=128
int max_a=-1;
int max_b=20;
int max_c=-1;
int n= rand()%15+6;
cout<<"n="<<n<<endl;

Eticheta:
XA:
a= rand()%100;
if (a%2!=0) {SVIA+=a; CIA++; goto XA;};
if (max_a<a) max_a=a;

XB:
b= rand()%100;

if (b%2==0 || b<20 || b>=30) 
{
VI++;
if (b%2==0) CP++;
else CI++;
SVIB+=b; goto XB;
}
if (max_b<b) max_b=b;

c= rand()%10;
if (max_c<c) max_c=c;

C++;
R=a+b-c;

cout<<"Contor="<<setw(2)<<C<<" a="<<setw(2)<<a<<" b="<<b<<setw(3)<<" c="<<c<<setw(3)<<" a+b-c="<<setw(3)<<a+b-c<<endl;

if (max<R) max=R;
if (min>R)  min=R;

if (C<n) goto Eticheta;

cout<<"\nContorul de numere impare la a="<<CIA<<endl;
cout<<"Suma numerelor impare la a="<<SVIA<<endl;

cout<<"\nContorul de numere pare la b="<<CP<<endl;
cout<<"Contorul de numere impare la b="<<CI<<endl;

cout<<"Suma numerelor pare la b="<<SVIB<<endl;
cout<<"De "<<VI<<" ori am primit valori ce nu corespund conditiei b"<<endl;;

cout<<"\nmax="<<max<<"\nmin="<<min<<endl;

cout<<"\nmax a="<<max_a<<endl;
cout<<"\nmax b="<<max_b<<endl;
cout<<"\nmax c="<<max_c<<endl;

return 0;
}



