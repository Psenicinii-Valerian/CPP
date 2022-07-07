#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;
int main()
{
	srand(time(0));
	
    int a,b,c,R;
	int n=rand()%10+3;
	cout<<"n="<<n<<endl;
	
	int C=0, CP=0, S=0;
	int Rmax=-38;
	int Rmin=70;
	
	E:
	C++;
	a=rand()%18+14;  //14..32
	b=rand()%28-8;   //-8..20
	c=rand()%63-19;  //-19..44
	R=a+b-c;
	
	if (R%2==0 && ((R>=19) && (R<37)))   CP++;
	
	if (((R>=3)&&(R<13)) || ((R>=30) && (R<54)) || ((R>=67) && (R<99)) || ((R>=-11) && (R<-1))) S+=R;
	
	if (R%2!=0 && ((R>=33) && (R<77))) 
	{
		if (Rmax<R)
		Rmax=R;
	}
	
	if (((R>=10) && (R<30)) || ((R>=55) && (R<77)))
	{
	    if (Rmin>R)
	    Rmin=R;
	}
	cout<<"C="<<setw(2)<<C<<"  a="<<a<<"  b="<<setw(2)<<b<<"  c="<<setw(3)<<c<<"  R="<<setw(3)<<R<<endl;
	if(C<n) goto E;
	
	cout<<"\nRezultate pare care intra in intervalul 19..37 sunt: "<<CP<<"\nSuma raspunsurilor care intra in intervalele specificate: "<<S<<endl;
	cout<<"R maxim este: "<<Rmax<<"\nR minim este: "<<Rmin;
	
	return 0;
}



