 	#include <iostream>
 	#include <iostream>
 	#include <cstdlib>
 	#include <ctime>
 	
 	using namespace std;
 	
 	/* 
 		****************************************PROGRAMAREA ORIENTATA OBIECT*****************************************
 		
 		-------------------------------------------OPERATOR DE REZOLUTIE---------------------------------------------
 		
 		Operatorul de rezolutie (::) - ne permite sa accesam o informatie dintr-o entitate/structura unica
 		
 		-----------------------------------------------SETERI SI GETERI----------------------------------------------
 		
 		!!! Toate proprietatile trebuie sa fie private !!!
 		!!! Fiecare proprietate isi are un numar anumit de seteri si geteri
 		
 		seter - metode care se vor ocupa cu procesul de atribuire a unor valori proprietatii
 		
 		geter - intoarce valoarea proprietatii pentru obiect
 		
 		Geterul prelucreaza metoda sa prin returnare constanta a informatiei si corpul este setat constant
 		
 		
 	*/
 	
 	int XXX = 777;
 	
 	class var
 	{
 		int value;
 		int XXX = 888;
 		
 	  public: 
 		
 		void setVALUE1();
 			
 		void setVALUE2();	
 		
 		void setVALUE3(int VALUE);
 			
 		const int getVALUE()const{ return value; }
 		
 	};
 	
 	
 		void var::setVALUE1()
 		{
 			cout<<" XXX = "<< XXX <<" ::XXX "<<::XXX<<"\n\n Enter value = ";
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
 		
 		/*
 		
 		var X;
 		
 		X.setVALUE1();
 		X.setVALUE2();
 		X.setVALUE3(777);	
 		
 		cout<<" GET = "<<X.getVALUE(); 	
		 	
 		*/
 		
 		var a,b,c;
 		
 		a.setVALUE1();
	 	cout<<"\n a = "<<a.getVALUE()<<endl;
	 	
	 	b.setVALUE2();	
	 	cout<<" b = "<<b.getVALUE()<<endl;
	 	
	 	c.setVALUE3(159);
	 	cout<<" c = "<<c.getVALUE()<<endl;
	 	
	 	cout<<"\n a + b - c = "<<a.getVALUE()+b.getVALUE()-c.getVALUE()<<endl;
	 	
	 	var R;
	 	
	 	R.setVALUE3( a.getVALUE() + b.getVALUE() - c.getVALUE() );
	 	
	 	cout<<" R = "<<R.getVALUE()<<endl;	
		 	  		
 		return 0;
 	}
 	

