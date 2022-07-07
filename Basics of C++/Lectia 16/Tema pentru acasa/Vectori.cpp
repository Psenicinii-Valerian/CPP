#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>

using namespace std;
int main()
{
srand(time(0));

int x[100];
int n=rand()%10+3;

cout<<"Tablou cu valori de tip integer:"<<endl<<endl;
cout<<"n= "<<n<<endl<<endl;

for (int i=0; i<n; i++)
{
   x[i]=rand()%33;
   cout<<"x["<<i<<"]="<<x[i]<<endl;	
}



double y[100];
int m=rand()%10+3;

cout<<"\nTablou cu valori de tip double:"<<endl<<endl;
cout<<"m= "<<m<<endl<<endl;

int k=0;
while (k<m)
{
   y[k]=(rand()%100+30)/double(10);
   cout<<"y["<<k<<"]="<<y[k]<<endl;	
   k++;
}



char z[100];
int l=rand()%10+3;

cout<<"\nTablou cu valori de tip char:"<<endl<<endl;
cout<<"l= "<<l<<endl<<endl;

int q=0;
do
{
   z[q]='a'+rand()%26;
   cout<<"z["<<q<<"]="<<z[q]<<endl;	
   q++;
} while (q<l);



double v[100];
double a,b,c;
int g=rand()%10+3;
cout<<"\nConditia a+b-c:"<<endl;
cout<<"\ng= "<<g<<endl<<endl;
for (int h=0; h<g; h++)
{
	a=(rand()%201+22)/double(10);
	b=(rand()%253+27)/double(10);
	c=(rand()%226+48)/double(10);
	v[h]=a+b-c;
	cout<<"i= "<<h<<setw(9)<<"a+b-c= "<<a<<" + "<<b<<" - "<<c<<" = "<<v[h]<<endl;
}

cout<<endl;

for (int h=0; h<g; h++)
{
	if (v[h]<30 && v[h]>=10 )
	cout<<"v["<<h<<"]="<<v[h]<<endl;
}







return 0;
}
