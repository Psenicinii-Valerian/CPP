#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{ 
  srand(time(0));
  int a,b,c,x;
 
  /*x=rand()%20-10;
  cout<<"Enter a=";
  cin>>a;
  cout<<"Enter b=";
  cin>>b;
  cout<<"Enter c=";
  cin>>c;
  cout<<"x="<<x<<endl;
 
  if (x > 0) 
 { 
  a=rand()%10; 
  b=rand()%10;
  c=rand()%10;
  cout<<x<<" > 0 =>: a="<<a<<" b= "<<b<<" c="<<c<<endl;
 }  
  
  else
 {
  a=rand()%10+10;
  b=rand()%10+10;
  c=rand()%10+10;	
 }
  cout<<x<<" <= 0 =>: a="<<a<<" b="<<b<<" c="<<c<<endl;
  cout<<"a+b-c= "<<a+b-c<<endl;
*/

 a=rand()%10;	
 b=rand()%10;
 c=rand()%5;
 cout<<"a="<<a<<" b="<<b<<" c="<<c<<endl;
 
 if (a>=b) 
 a=rand()%15+15;
 
 if (b<=10) 
 b=rand()%5+3;
 else b=rand()%12+9;
 
 if (c>3) 
 c=rand()%3;
 else if (c<3)
 c=rand()%3+3;
 else if (c==3)
 c=rand()%3+6;
 
 cout<<"a="<<a<<" b="<<b<<" c="<<c<<" a+b-c= "<<a+b-c<<endl;
 return 0;
}


