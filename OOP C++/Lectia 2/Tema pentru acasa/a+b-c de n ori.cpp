 	#include <iostream>
 	#include <iostream>
 	#include <cstdlib>
 	#include <ctime>
 	#include <iomanip>
 	
 	using namespace std;
 	
 	/* 
 		****************************************PROGRAMAREA ORIENTATA OBIECT*****************************************
 		
 		-------------------------------------------OPERATOR DE REZOLUTIE---------------------------------------------
 		
 		!!! Toate proprietatile trebuie sa fie private !!!
 		!!! Fiecare proprietate isi are un numar anumit de seteri si geteri
 		
 		seter - metode care se vor ocupa cu procesul de atribuire a unor valori proprietatii
 		
 		geter - intoarce valoarea proprietatii pentru obiect
 		
 		Geterul prelucreaza metoda sa prin returnare constanta a informatiei si corpul este setat constant
 		
 		Operatorul de rezolutie (::) - ne permite sa accesam o informatie dintr-o entitate/structura unica
 	*/
 	
 	class var
 	{
 		int value;
 		
 	  public: 
 		
 		void setVALUE1(char*);
 			
 		void setVALUE2();	
 		
 		void setVALUE3(int VALUE);
 			
 		const int getVALUE()const{ return value; }
 		 		
 	};
 	
 	
 		void var::setVALUE1(char *message)
 		{
 			cout<<message;
		 	cin>>value;	
	 		//	cout<<" 1 value = "<<value<<endl;	
 		}
 	
 		void var::setVALUE2()
 		{
 			value = rand()%100;	
 			//	cout<<" 2 value = "<<value<<endl;
 		}
 		
 		void var::setVALUE3(int VALUE)
 		{
 			value = VALUE;	
 			//	cout<<" 3 value = "<<value<<endl;
 		}
 			 	
	 	
 	int main()
 	{
 		// a+b-c POO
 		
 		srand( time(0) );
 		
 		var a,b,c,n,R[100];
 		
 		n.setVALUE1(" Enter n = ");
 		cout<<" n = "<<n.getVALUE()<<endl<<endl;
	 	
	 	for ( int i=0 ; i < n.getVALUE(); i++ )  
	 	{
						
 			a.setVALUE1(" Enter a = ");
	 		cout<<"\n a = "<<a.getVALUE()<<endl;
	 	
	 		b.setVALUE2();	
	 		cout<<" b = "<<b.getVALUE()<<endl;
	 	
	 		c.setVALUE2();
	 		cout<<" c = "<<c.getVALUE()<<endl<<endl;	
	 		
	 		R[i].setVALUE3( a.getVALUE() + b.getVALUE() - c.getVALUE() );
	 		
	 		cout<<setw(3)<<" R["<<i+1<<"] = "<<a.getVALUE()<<" + "<< b.getVALUE()<<" - "<<c.getVALUE()<<" = "<<R[i].getVALUE()<<endl<<endl;	
		 	
	 	}          
		 	  		
 		return 0;
 	}
 	

