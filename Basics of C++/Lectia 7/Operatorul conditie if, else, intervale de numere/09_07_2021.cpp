#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
   srand (time(0));
   int a= rand()%100;
   int b= rand()%130-30;
   int c= rand()%50-20;	
   cout<<"a="<<a<<" b="<<b<<" c="<<c<<endl;

   /*if ((a>=1 && a<10) || (a>=20 && a<30) || (a>=40 && a<50))   a=1;
   else
   a=2;
   if ((b>=15 && b<50) || (b>=50 && b<75))   b=1; 
   else
   b=2;
   if (c>=-10 && c<10)   c=1;
   else
   c=2;
   
   cout<<"a="<<a<<" b="<<b<<" c="<<c<<" a+b-c="<<a+b-c<<endl; 
   
   //PARITATE:
   int x=rand()%10;
   if (x%2 == 0) cout <<"x= "<<x<<" par";
   else cout <<"x="<<x<<" impar";
   */
   
   if ((a%2 ==0) || (b%2 !=0 && c%2 == 0))
   {
   	a=rand()%10;
   	b=rand()%10;
   	c=rand()%10;
   }
   else
   {
   	a=rand()%10+10;
   	b=rand()%10+10;
   	c=rand()%10+10;
   }
   cout<<"a="<<a<<" b="<<b<<" c="<<c<<" a+b-c="<<a+b-c<<endl;
   return 0;
}
