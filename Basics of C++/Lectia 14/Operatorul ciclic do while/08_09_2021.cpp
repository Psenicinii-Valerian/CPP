#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>

using namespace std;
int main()
{

srand(time(0));	
int n;
cout<<"Dati n= ";
cin>>n;

for(int i=0,a,b,c,R; i<n; i++)
{ 	    
        do
        {
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
	    cout<<"\ni= "<<i+1<<" din "<<n<<" \nR= "<<a<<setw(2)
		                                        <<" + "<<setw(2)
												<<b<<setw(2)
												<<" - "<<setw(2)
												<<c<<" = "
												<<setw(3)<<R<<endl;          

}

return 0;
}
