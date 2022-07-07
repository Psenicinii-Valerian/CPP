#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{  srand (time(0));
   int a=rand()%70-10;
   int b=rand()%90-20;
   int c=rand()%60-20;
   int x=rand()%20;
   int y=rand()%20;
   cout<<"a= "<<a<<" b= "<<b<<" c= "<<c<<" x= "<<x<<" y= "<<y<<endl;
   if (((a%2==0) && ((a>=10) && (a<20))) || ((a%2!=0) && ((a>=20) && (a<50))))
   a=rand()%10-10;
   else a=rand()%10;
   if ((b%2!=0) && (((b>=5) && (b<15)) || ((b>=25) && (b<55))))
   b=rand()%20-20;
   b=rand()%20;
   if (((c%2==0) && (((c>=x) && (c<y)) || (c>=y) && (c<x))))	
   c=rand()%30-30;
   else c=rand()%30;
   cout<<"a= "<<a<<" b= "<<b<<" c= "<<c<<endl;
   int R=a+b-c;
   cout<<"R="<<R<<endl;
   if (((R%2==0) && (R>=x) && (R<y))|| ((R%2==0) && (R>=y) && (R<x)))
   {
   	a=rand ()%13-7;
   	b=rand ()%10+21;
   	c=rand ()%12-16;
   	cout<<"R este par si intra in intervalul x..y sau y..x (0..20) =>:"<<" a="<<a<<" b="<<b<<" c="<<c<<endl;
   }
    else
    {
   	cout<<"R nu corespunde cerintelor =>: R nu sufera modificari: "<<"R="<<R<<endl;
    }
   return 0;
}
