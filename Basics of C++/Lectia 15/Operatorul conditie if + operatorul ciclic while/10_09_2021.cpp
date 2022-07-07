#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>

using namespace std;
int main()
{

srand(time(0));	
int CC=0;
for(int i=0,a,b,c,CB,R,n=rand()%10+5; i<n ;i++)

{
CB=0;
while(1)
{
	a=rand()%100;
	
	if (a>=10 && a<20)  break;
}

b=rand()%100;

if(b%2==0)
{	
cout<<"b este par="<<b<<" :: Iteratie anulata!"<<"; i="<<i<<endl;
continue;	
} 

else 
{
CB++;	
cout<<"\aVariabila b a primit de "<<CB<<" ori valoare impara in aceasta iteratie!"<<endl<<endl;
}

c=rand()%100;
if (c%2==0 && ((c>=10 && c<20 || c>=30 && c<40 || c>=60 && c<90))) 
{
CC++;
cout<<"CC= "<<CC<<" c="<<c<<endl;	
}

R=a+b-c;

cout<<"i= "<<i+1<<setw(3)<<" R= "<<setw(3)<<a<<" + "<<setw(3)<<b<<" - "<<setw(3)<<c<<" = "<<R<<endl;
}

cout<<"Variabila c nu corespunde conditiilor de "<<"CC= "<<CC<<" ori!"<<endl;

return 0;
}
