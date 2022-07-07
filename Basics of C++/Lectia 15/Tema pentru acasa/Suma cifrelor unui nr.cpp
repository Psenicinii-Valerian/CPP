#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>

using namespace std;
int main()
{
srand(time(0));
int CA=0,CB=0,CC=0,CP=0,suma=0;
for(int i=0,a,b,c,R,n=rand()%15+2; i<n; i++)
{

a=rand()%100;
b=rand()%100;
c=rand()%100;

R=a+b-c;

cout<<"i= "<<i+1<<" din "<<n<<setw(10)<<"R= "<<setw(3)<<a<<" + "<<setw(3)<<b<<" - "<<setw(3)<<c<<" = "<<a+b-c<<endl;

if (R%2==0) CP++;
if (R==a) CA++;
if (R==b) CB++;
if (R==c) CC++;

while(R!=0)
{
suma=suma+R%10;
R=R/10;
}

cout<<"Suma cifrelor Raspunsului este= "<<suma<<endl;

suma=0;
system("pause");
}
cout<<"Raspunsul a coincis cu variabila a de "<<CA<<" ori."<<endl;
cout<<"Raspunsul a coincis cu variabila b de "<<CB<<" ori."<<endl;
cout<<"Raspunsul a coincis cu variabila c de "<<CC<<" ori."<<endl;
cout<<"Raspunsul a primit valoare para de "<<CP<<" ori."<<endl;
return 0;
}
