 	#include <iostream>
 	#include <iostream>
 	#include <cstdlib>
 	#include <ctime>
 	
 	using namespace std;
 	
 	/* 
 		****************************************PROGRAMAREA ORIENTATA OBIECT*****************************************
 		
 		--------------------------------------------SETERI SI GETERI-------------------------------------------------
 		
 		!!! Toate proprietatile trebuie sa fie private !!!
 		!!! Fiecare proprietate isi are un numar anumit de seteri si geteri
 		
 		seter - metode care se vor ocupa cu procesul de atribuire a unor valori proprietatii
 		
 		geter - intoarce valoarea proprietatii pentru obiect
 		
 		Geterul prelucreaza metoda sa prin returnare constanta a informatiei si corpul este setat constant
 	*/
 	
 	
 	class var
 	{
 		int value;
 		
 		public: 
 		
 		void setVALUE1()
 		{
 			cout<<" Enter value = ";
		 	cin>>value;	
	 	//	cout<<" 1 value = "<<value<<endl;	
 		}
 		
 		
 		void setVALUE2()
 		{
 			value = rand()%100;	
 		//	cout<<" 2 value = "<<value<<endl;
 		}
 		
 		
 		void setVALUE3(int VALUE)
 		{
 			value = VALUE;	
 		//	cout<<" 3 value = "<<value<<endl;
 		}
 		
 		
 		const int getVALUE()const{ return value; }
 		
 	};
 
 
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
 	

