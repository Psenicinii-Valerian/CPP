#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;
int main()
{ srand (time(0));

  int a=rand ()%12+2;
  int b=rand ()%9-1;
  int c=rand ()%6+4;
  int d=rand ()%12-3;
  int e=rand ()%11+6;
  
  cout<<"a= "<<a<<" b= "<<b<<" c= "<<c<<" d= "<<d<<" e= "<<e<<endl;
  
  double R1= cos(pow(a,-d));
  cout<<"R1= "<<R1<<endl;
  
  int R2= a*b*c;
  cout<<"R2= "<<R2<<endl;
  
  double R3= R1/R2;
  cout<<"R3= "<<R3<<endl;
  
  double R4= pow(b,-3);
  cout<<"R4= "<<R4<<endl;
  
  double R5= c*d-R4;
  cout<<"R5= "<<R5<<endl;
  
  double R6= sin(pow(a,4));
  cout<<"R6= "<<R6<<endl;
  
  double R7= R5/R6;
  cout<<"R7= "<<R7<<endl;
  
  double R8= R3+R7;
  cout<<"R8= "<<R8<<endl;
  
  int R9= pow(a,3)+pow(d,2)-pow(c,4);
  cout<<"R9= "<<R9<<endl;
  
  double R10= sin(a)+cos(b);
  cout<<"R10= "<<R10<<endl;
  
  double R11= pow(R10,3);
  cout<<"R11= "<<R11<<endl;
  
  double R12= R11/R9;
  cout<<"R12= "<<R12<<endl;
  
  double R13= sqrt(abs(R12));
  cout<<"R13= "<<R13<<endl;
  
  double R14= R8-R12;
  cout<<"R14= "<<R14<<endl;
  
  int R15= pow(pow(c,5),2);
  cout<<"R15= "<<R15<<endl;
  
  double R16= pow(sin(e),4);
  cout<<"R16= "<<R16<<endl;
  
  double R17= a*R16;
  cout<<"R17= "<<R17<<endl;
  
  double R18= R15+R17;
  cout<<"R18= "<<R18<<endl;	
  
  double R19= cos(pow(b,3));
  cout<<"R19= "<<R19<<endl;
  
  double R20= R18-R19;
  cout<<"R20= "<<R20<<endl;
	
  double R21= R14/R20;
  cout<<"R21= "<<R21<<endl;
	
  return 0;
}












