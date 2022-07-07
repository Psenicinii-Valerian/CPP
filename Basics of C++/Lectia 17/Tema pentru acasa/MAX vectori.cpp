#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>

using namespace std;
int main()
{
srand(time(0));

int v[100];
int n=rand()%10+5;
cout<<"n= "<<n<<endl;

for (int i=0; i<n; i++)
	{
		v[i]=rand()%20;  	
	}
	
   cout<<endl;
  
   for( int i=0; i<n; i++)
   {
		cout<<"v["<<i<<"]="<<v[i]<<endl;
   }
   
   cout<<endl;
   
   int MAX1=-1;
   int MAX2=-1;
   
   for( int i=0; i<n; i++)
   {
		if (i<n/2)
		
		{	
		if(MAX1<v[i]) MAX1=v[i];
		}
		
		else
		{	
		if(MAX2<v[i]) MAX2=v[i];
		}	
   }
   
   cout<<"Valoarea maxima a primei jumatati a vectorului= "<<MAX1<<endl;
   cout<<"Valoarea maxima a celei de-a doua jumatati a vectorului= "<<MAX2<<endl;
   
   
return 0;
}
   
   
   
   
   
   
   
   
