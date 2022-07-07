  #include <iostream>
  using namespace std;
  int main ()
{ 
 int a,b,c,d,e;
   
 cout<<"Enter a=";
 cin>>a;
 
 cout<<"Enter b=";	
 cin>>b;
 
 cout<<"Enter c=";	
 cin>>c;
 
 cout<<"Enter d=";
 cin>>d;
 
 cout<<"Enter e=";
 cin>>e;
 
 int R1= a+b-c;
 cout<<"R1= "<<R1<<endl;
 
 double R2= double (R1) / (b+d);
 cout<<"R2= "<<R2<<endl;
 
 int R3= e*d-a;
 cout<<"R3= "<<R3<<endl;
 
 double R4= double (R3) / (b-c);
 cout<<"R4= "<<R4<<endl;
 
 double R5= R2*R4;
 cout<<"R5= "<<R5<<endl;
 
 int R6= b*c*a;
 cout<<"R6= "<<R6<<endl;
 
 double R7= double (R6) / (e-b-c);
 cout<<"R7= "<<R7<<endl;
 
 double R8= R5*R7;
 cout<<"R8= "<<R8<<endl;
 
 int R9= a-b*e;
 cout<<"R9= "<<R9<<endl;
 
 double R10= double (R9) / (d+b);
 cout<<"R10= "<<R10<<endl;
 
 double R11= (d*e) / double (a);
 cout<<"R11= "<<R11<<endl;
 
 double R12= R10-R11;
 cout<<"R12= "<<R12<<endl;
 
 int R13= a*e*c;
 cout<<"R13= "<<R13<<endl;
 
 double R14= double (R13) / b;
 cout<<"R14= "<<R14<<endl;
 
 double R15= R12+R14;
 cout<<"R15= "<<R15<<endl;
 
 int R16= b-a-c;
 cout<<"R16= "<<R16<<endl;
 
 double R17= double (R16) / (d-e+a);
 cout<<"R17= "<<R17<<endl;
 
 double R18= R15*R17;
 cout<<"R18= "<<R18<<endl;
 
 double R19= R8/R18;
 cout<<"R19= "<<R19<<endl;
 
 return 0;
}
