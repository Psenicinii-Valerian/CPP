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
 	  
 		int *yyy = new int;
 		
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
 		
 		int a = 123;
 		
 	  	var X,Y,Z;
 		
 		X.setVALUE2();
 		cout<<" X = "<<X.getVALUE()<<endl<<endl;	 
		 
	 	 
	 	X.yyy = &a;
	 	cout<<" &a *(X.yyy) = "<<*(X.yyy)<<endl;
	 	*(X.yyy) = a;
	 	cout<<" a *(X.yyy) = "<<*(X.yyy)<<endl<<endl;
	 	
	  	
	 	var *A = new var;
		 
	 	A->setVALUE2();	
	 	cout<<" A->setVALUE2() = "<<A->getVALUE()<<endl<<endl;
	 	
	 	A->yyy = &a;
	 	cout<<" &a *(A->yyy) = "<<*(A->yyy)<<endl;
	 	
	 	*(A->yyy) = 789;
	 	cout<<" *(A->yyy) = "<<*(A->yyy)<<endl<<endl;
	 	
	 	
	 	var V[100];
	 	
	 	V[0].setVALUE2();
	 	cout<<" V[0].setVALUE2 = "<<V[0].getVALUE()<<endl;
	 	
	 	var *W = new var[100];
	 	
	 	// i => 0...100
	 	int i=0;
	 	
	 	(W+i)->setVALUE2();
	 	
	 	cout<<" (W+i)->setVALUE2() = "<< (W+i)->getVALUE() <<endl;
	 	
	 	
	 	var *WW = new var[100];
	 	
	 	// i => 0...100
	 	
	 	WW[i].setVALUE2();
	 	
	 	cout<<" WW[i].setVALUE2() = "<< WW[i].getVALUE() <<endl;
		 	  		
 		return 0;
 	}
 	

