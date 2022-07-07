#include <iomanip>
#include <iostream> // cout si cin
#include <cstdlib> // <stdlib.h> rand srand exit
#include <ctime> // <time.h> time
#include <conio.h>
#include <cmath>
using namespace std;
int main()

{

srand( time(0) );
int val1=NULL, val2=NULL, op;
bool B1, B2;
X:
switch( _getch() )
{
A:
case 48 : val1=val1*10+0; cout<<'0'; B1=1; break;
case 49 : val1=val1*10+1; cout<<'1'; B1=1; break;
case 50 : val1=val1*10+2; cout<<'2'; B1=1; break;
case 51 : val1=val1*10+3; cout<<'3'; B1=1; break;
case 52 : val1=val1*10+4; cout<<'4'; B1=1; break;
case 53 : val1=val1*10+5; cout<<'5'; B1=1; break;
case 54 : val1=val1*10+6; cout<<'6'; B1=1; break;
case 55 : val1=val1*10+7; cout<<'7'; B1=1; break;
case 56 : val1=val1*10+8; cout<<'8'; B1=1; break;
case 57 : val1=val1*10+9; cout<<'9'; B1=1; break;

case 43 : if(B1 && !B2) {cout<<'+'; op=0; val2 = val1;  B2=1; B1=0; val1=0;} else cout<<"\nERROR !!!"<<endl; break; 
case 45 : if(B1 && !B2) {cout<<'-'; op=1; val2 = val1;  B2=1; B1=0; val1=0;} else cout<<"\nERROR !!!"<<endl; break;
case 42 : if(B1 && !B2) {cout<<'*'; op=2; val2 = val1;  B2=1; B1=0; val1=0;} else cout<<"\nERROR !!!"<<endl; break;
case 47 : if(B1 && !B2) {cout<<'/'; op=3; val2 = val1;  B2=1; B1=0; val1=0;} else cout<<"\nERROR !!!"<<endl; break;
case 94 : if(B1 && !B2) {cout<<'^'; op=4; val2 = val1;  B2=1; B1=0; val1=0;} else cout<<"\nERROR !!!"<<endl; break;

case 13 : if (B1 && B2)cout<<'='; 
else 
{
cout<<"\nERROR :: DATI NUMERELE!!!"<<endl; 
val2=0, B2=0; 
break;
}
C:
switch(op)
{
case 0 : cout<<val2+val1<<endl; val2=0; val1=0; break;
case 1 : cout<<val2-val1<<endl; val2=0; val1=0; break;
case 2 : cout<<val2*val1<<endl; val2=0; val1=0; break;

case 3 :
if (val1==0 && val2==0) //val 1 este cea de a doua variabila!!! (le-am interschimbat prin val2=val1)
{
cout<<"ERROR :: IMPARTIREA NU POATE FI!"<<endl;
}
else if (val1==0) //val 1 este cea de a doua variabila!!! (le-am interschimbat prin val2=val1)
{
cout<<"ERROR :: IMPARTIREA LA 0!"<<endl;
}
else
{
cout<<double(val2)/val1<<endl; val2=0; val1=0; break;
}

case 4 : cout<<pow(val2,val1)<<endl; val2=0; val1=0; break;

}
val1=0;
B1=0;
B2=0;
break;
case 27 : exit(0);
}
goto X;
return 0;
}
