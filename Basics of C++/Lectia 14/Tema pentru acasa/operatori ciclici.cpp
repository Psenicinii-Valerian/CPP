#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>

using namespace std;
int main()
{

srand(time(0));	
int n=rand()%20+1,CA,x,y,z;

for(int i=0,a,b,c,R; i<n; i++)
{ 	    
        CA=-1
        do
        {
        CA++;
        a=rand()%100;
		} while (a%2 !=0);
        
        do
        {
        b=rand()%100;
		} while (b%2 == 0 || b<10 || b>=20);
        
        do
        {
		c=rand()%100;
		} while ((c<22 || c>=44 ) && (c<55 || c>=77));
        
	    R=a+b-c;
	    cout<<"\ni= "<<i+1<<" din "<<n<<" \nContor a impar= "<<CA<<" \nR= "<<a<<setw(2)
		                                                       <<" + "<<setw(2)
															   <<b<<setw(2)
															   <<" - "<<setw(2)
															   <<c<<" = "
															   <<setw(3)<<R<<endl;          
	    
		if (R%2 == 0) 
	    {
	    cout<<"\a";
	    for (int m=0,x,y,z, v=rand()%10+1; m<v; m++)
	    {
	    x=rand()%5+10;
	    y=rand()%20+10;
	    z=rand()%10-5;
	    cout<<setw(2)<<m+1<<" din "<<v<<setw(7)<<x<<" + "<<setw(2)<<y<<" - "<<setw(2)<<z<<" = "<<x+y-z<<endl;
		}
		}
			else cout<<"\nR ESTE IMPAR"<<endl; 
		system("pause");
       
}

return 0;
}
