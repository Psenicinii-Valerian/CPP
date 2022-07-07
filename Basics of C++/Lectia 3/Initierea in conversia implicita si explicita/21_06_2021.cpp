#include <iostream>

using namespace std;
int main()
{
 /*int a,b,R;
 a=123;
 b=321;
 
 cout<<"a="<<a<<" b="<<b<<" a+b="<<a+b<<endl;
 R=a+b;
 cout<<"a="<<a<<" b="<<b<<" a+b="<<R<<endl;
 int a,b,c;
 cout<<"Enter a=";
 cin>>a;
 cout<<"Enter b=";	
 cin>>b;
  cout<<"Enter c=";	
 cin>>c;
 cout <<a<<'+'<<b<<'-'<<c<<'='<<a+b-c<<endl; */
  /*int a,b;
cout<<"Enter a=";
 cin>>a;
 cout<<"Enter b=";	
 cin>>b;
 cout <<"conversie implicita " <<a<<':'<<b<<'='<<a/b<<endl;
 cout <<"conversie explicita " <<a<<':'<<b<<'='<<(double)a/b<<endl;
 cout <<"conversie explicita " <<a<<':'<<b<<'='<<double(a)/b<<endl;*/
 
  int a,b,c;
 cout<<"Enter a=";
 cin>>a;
 
 cout<<"Enter b=";	
 cin>>b;
 
  cout<<"Enter c=";	
 cin>>c;
 
 int R1=a+b-c;
 cout<<"R1= "<<R1<<endl;
 
 double R2= double (R1) / (a-c);
 cout<<"R2= "<<R2<<endl;
 
 double R3= c+b/ double(a);
 cout<<"R3= "<<R3<<endl;
 
 double R4= R2*R3;
 cout<<"R4= "<<R4<<endl;
 
 int R5=c+b-a;
 cout<<"R5= "<<R5<<endl;
 
 double R6= R4/R5;
 cout<<"R6= "<<R6<<endl;
 
 return 0;
}
