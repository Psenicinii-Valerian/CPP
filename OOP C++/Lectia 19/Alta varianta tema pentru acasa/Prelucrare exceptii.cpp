	#include <iostream>
	using namespace std;
	
	int getNumber( char *mess, int a,int b, int c )
		{		
			cout<<endl;	
			cout<<mess;
	 		int num;
	 		cin>>num;
	        
		 	    try
		 		{
			        if (num == a || num == b ||  num == c) {throw num;}

					return num;	       
		 	    }
			        
		 	    catch (int x)
		 	    {
			        cout<<"ERROR :: value = "<<x<< endl;	
			        return getNumber(mess,a,b,c);
		 		}	 		
		
	    }
	    
	int getb( char *mess,int a, int b )
		{
			cout<<endl;
			
			cout<<mess;
	        int num;
	        cin>>num;
	        
	        try
			{
	           if (num == a || num == b) throw num;
	           
	        	return num;	   
	        }
	        
	 		catch (int x)
	 		{
	            cout<<"ERROR :: value = "<<x<< endl;	           
			    return getb(mess,a,b);
	 		}
	 		
	        
	    }
	    
	int main()
	{
	 	int a,b,c;
	  	int n;
	  	cout<<"Enter n=";
	  	cin >> n;
	  
	    for(int i=0; i<n; i++)
	    {				
	           	a = getNumber("Enter a=",2,5,9);	
	     		
	           	b = getb("Enter b=",5,6);
	      		
 	            c = getNumber("Enter c=",2,4,5);
 	            
 	            cout<<endl;
 	            			
	   			cout<<"a+b-c=" <<a<<'+'<<b<<'-'<<c<<'='<< a+b-c<<endl<<endl;
	    }
	    
	    return 0;
	}
