#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;
int main()
{ 
 srand (time(0));
 
 double a= ((rand()%103+(double)101)/10);
 double b= ((rand()%53-(double)123)/10); 
 double c= ((rand()%66+(double)213)/10);
 cout<<"a="<<a<<" b="<<b<<" c="<<c<<endl;  
 
 if (a>15) 
 a= ((rand()%83-(double)133)/10);
 else if (a<15)
 a= ((rand()%63+(double)312)/10);
 else if (a==15)
 a= ((rand()%111+(double)231)/10);

 if (b==-10)
 b= ((rand()%112+(double)145)/10);
 else if (b>=-9)
 b= ((rand()%77+(double)232)/10);
 else if (b<-9)
 b= ((rand()%98+(double)131)/10);
 
 if (c==25)
 c= ((rand()%312-(double)145)/10);
 else if (c>25)
 c= ((rand()%157+(double)104)/10);
 else if (c<=25)
 c= ((rand()%127+(double)234)/10);
 
 cout<<"Dupa prima sortare: "<<"a="<<a<<" b="<<b<<" c="<<c<<endl;
 
 if (a>=c)
 a= ((rand()%84-(double)201)/10);
 else if (a<c)
 a= ((rand()%120+(double)98)/10);
 
 if (b>=24) 
 b= ((rand()%109-(double)178)/10);
 else if (b<24)
 b= ((rand()%70+(double)104)/10);
 
 if (c<=20)
 c= ((rand()%111+(double)78)/10);
 else if (c>20)
 c= ((rand()%135-(double)217)/10);
 
 cout<<"Dupa a doua sortare: "<<"a="<<a<<" b="<<b<<" c="<<c<<endl;
 
 int A= trunc(a);
 int C= trunc(c);
 cout<<"Dupa scoaterea partii intregi: "<<"a="<<A<<" b="<<b<<" c="<<C<<endl;
 
 double R=A+b-C;
 if (R>10)
 {
 A= rand()%35-2;
 b= ((rand()%350-(double)20)/10);	
 C= rand()%35-2;	
 cout<<"R>10 deci: "<<"a="<<A<<" b="<<b<<" c="<<C<<endl;	
 }
 
 else if (R<10)
 {
 a= rand()%6+37;
 b= ((rand()%60+(double)370)/10);	
 c= rand()%6+37;	
 cout<<"R<10 deci: "<<"a="<<a<<" b="<<b<<" c="<<c<<endl;	
 }
 
 else if (R==10)
 {
 a= rand()%106-27;
 b= ((rand()%1060-(double)270)/10);	
 c= rand()%106-27;	
 cout<<"R=10 deci: "<<"a="<<a<<" b="<<b<<" c="<<c<<endl;	
 }
 
 R= A+b+C;
 cout<<"R="<<R;

 return 0;
}
