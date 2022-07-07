#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;
int main ()
{ 
  srand ( time(0) );
  int a = rand()%10;
  int b = rand()%10;	
  cout <<"a= "<<a<<" b= "<<b<<endl;

  double R1= sin (pow(a,2));
  cout<<"R1= "<<R1<<endl;
  
  double R2= cos (pow(b,3));
  cout<<"R2= "<<R2<<endl;
  
  double R3= R1/R2;
  cout<<"R3= "<<R3<<endl;
  
  double R4= pow(R3,4);
  cout<<"R4= "<<R4<<endl;
  
  double R5= sqrt (abs(R4));
  cout<<"R5= "<<R5<<endl;
  
  double R6= sin(pow(a,b)) + cos(pow(b,a));
  cout<<"R6= "<<R6<<endl;
  
  double R7= R5/R6;
  cout<<"R7= "<<R7<<endl;
  
  return 0;
}




