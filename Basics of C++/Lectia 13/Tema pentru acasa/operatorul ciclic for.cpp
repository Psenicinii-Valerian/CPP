#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>

using namespace std;
int main()
{

srand(time(0));	
int x,y,z,m,v;
	
for (int i=0, a, b, c, n=rand()%33; i<n; i++ )

{
	
a=rand()%10+3;
b=rand()%5+2;
c=rand()%5+5;

cout<<"\n\ai="<<setw(2)<<i+1<<" din "<<n<<setw(10)<<"a+b-c="<<a<<" + "<<b<<" - "<<c<<" = "<<a+b-c<<endl<<endl;

if (a+b-c<25 && a+b-c>=5)
{
for (int m=0, v=rand()%20; m<v; m++)
{

x=rand()%10;
y=rand()%20-10; 
z=rand()%15-7;

cout<<"m="<<setw(2)<<m+1<<" din "<<v<<setw(5)<<'('<<x<<" + "<<y<<')'<<" / "<<z<<" = "<<(a+b)/(double)z<<endl;

}
}
else cout<<"a+b-c NU APARTINE INTERVALULUI 5...25!"<<endl<<endl;
system("pause");
}

return 0;
}
