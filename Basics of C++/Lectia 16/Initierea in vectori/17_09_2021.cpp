#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>

using namespace std;
int main()
{
srand(time(0));
/*
int a,b,c, abc [4];


abc[0]=rand()%100;
abc[1]=rand()%100;
abc[2]=rand()%100;

cout<<"a= "<<abc[0]<<endl;
cout<<"b= "<<abc[1]<<endl;
cout<<"c= "<<abc[2]<<endl;

abc[3]=abc[0]+abc[1]-abc[2];

cout<< abc[0]<<" + "<< abc[1]<<" - "<< abc[2]<<" = "<<abc[3]<<endl;



int v[10];

for(int i=0; i<10; i++)
{	
   v[i]=rand()%22;	
}

for(int i=0; i<10; i++)
{	
   cout<<" v["<<i<<"]="<<v[i]<<endl;	
}

cout<<endl;

for(int i=9; i>=0; i--)
{	
   cout<<" v["<<i<<"]="<<v[i]<<endl;	
}

cout<<endl;
for(int i=0; i<10; i++)
{	
   cout<<" v["<<9-i<<"]="<<v[9-i]<<endl;	
}
*/


int v[50000];

int n=rand()%10+2;

int CP=0, CI=0;

cout<<"n= "<<n<<endl<<endl;


for(int a,b,c,i=0; i<n; i++)
{	
   a=rand()%50;
   b=rand()%50;
   c=rand()%50;
   v[i]=a+b-c; 
   cout<<"i= "<<setw(1)<<i<<setw(6)<<a<<" + "<<b<<" - "<<c<<" = "<<v[i]<<endl;
   	
}

cout<<endl;

for(int i=0; i<n; i++)
{	
   cout<<"v["<<i<<"]="<<v[i]<<endl;	
}


for(int i=0; i<n; i++)
{	
   if (v[i]%2==0) CP++;
   else CI++;	
}



int CPI=0, CIP=0;
for(int i=0; i<n; i++)
{	
   if (v[i]%2==0 && i%2!=0) CPI++;
   if (v[i]%2!=0 && i%2==0) CIP++;
}


cout<<"\nRaspunsuri pare="<<CP<<endl;
cout<<"Raspunsuri impare="<<CI<<endl;

cout<<"\nRaspunsuri pare pe pozitii impare="<<CPI<<endl;
cout<<"Raspunsuri impare pe pozitii pare="<<CIP<<endl;


return 0;
}
