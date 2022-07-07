#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	srand (time(0));
	int a,b,c;
	
	a= rand()%20;
	b= rand()%10+10;
	c= rand()%20+20;
	
	cout<<"a= "<<a<<" b="<<b<<" c="<<c<<"\n\n";
	
//	a > 10? a=1 : a=-1;                                            //1 varianta de afisare
//	b == 13 ? b=a : b=rand()%20;
//	c != 30 ? c=a*b : c
//	cout<<"a="<<a<<" b="<<b<<" c="<<c<<" a+b-c="<<a+b-c<<endl;
	
	a=       a >  10 ? 1 : -1;                                      //2 varianta de afisare
	
	b=       b == 13 ? a : rand()%20;
	cout<<"a="<<a<<" b="<<b<<" c="<<c<<"\n\n";
	
	c=       c != 30 ? a*b : b;
	cout<<"a="<<a<<" b="<<b<<" c="<<c<<"\n\n";
	
    a+c >=b ? c=1 : b=1;                                            //1 varianta de afisare
	         
	 
	cout<<"a="<<a<<" b="<<b<<" c="<<c<<" R= a+b-c="<<a+b-c<<endl;   //1 varianta
	cout<<"\n R > 10? "<< (a+b-c > 10 ? " DA" : " NU" );

	cout<<"\n R > 10? ";                                            //2 varianta
	a+b-c > 10 ? cout<< " DA" : cout<< " NU" ;                      
	
    bool X;                                                         // declararea variabilei pentru 3,4 varianta
    
    X= a+b-c > 10 ? true : false;                                   //3 varianta
    cout<<"\n R > 10 = "<<(X ? " DA " : " NU ") <<endl;
    
	X= a+b-c >10 ? 1 : 0;                    						//4 varianta
	cout<<" R > 10 = "<<(X == 1 ? " DA " : " NU ") <<endl; 
    
	return 0;
	
}
