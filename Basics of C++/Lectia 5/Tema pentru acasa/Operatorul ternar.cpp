#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
   srand (time(0));
   int a,b,c,x,y,R;
   bool z;
   
   a= rand()%10+10;
   b= rand()%10+20;
   c= rand()%20+-10;
   x= rand()%20+15;
   y= rand()%10-5;
   
   cout<<"Datele initiale: a= "<<a<<" b= "<<b<<" c= "<<c<<" x= "<<x<<" y= "<<y<<endl;
   
   a=		10<=a && a<=15  ?		1            :  a   ;
   cout<<"\nDupa prima conditie: a= "<<a<<" b= "<<b<<" c= "<<c<<" x= "<<x<<" y= "<<y<<endl;
   
   b=		b>=x?	            rand()%20+15  :  rand()%10-5;
   cout<<"\nDupa a doua conditie: a= "<<a<<" b= "<<b<<" c= "<<c<<" x= "<<x<<" y= "<<y<<endl;
   
            c==0?               c=1          :  a=2;
   cout<<"\nDupa a treia conditie: a= "<<a<<" b= "<<b<<" c= "<<c<<" x= "<<x<<" y= "<<y<<endl;
   
   R=a+b-c;
   cout<<"\n\aR=a+b-c= "<<R;
            
   z=		a+b-c>rand()%20? true : false;
   cout<<"\nEste R > decat intervalul de la 0 la 20? "<<(z ? "\nDA, este mai mare" : "\nNU, este mai mic")<<endl;
   
   return 0;
}





