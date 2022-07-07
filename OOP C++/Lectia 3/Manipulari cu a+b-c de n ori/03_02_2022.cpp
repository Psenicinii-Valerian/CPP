 	#include <iostream>
 	#include <iostream>
 	#include <cstdlib>
 	#include <ctime>
 	#include <iomanip>
 	
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
 	
 	class var
 	{
 		int value, xxx;
 		
 	  public: 
 		
 		void setVALUE1( char* );
 			
 		void setVALUE2();	
 		
 		void setVALUE3(int VALUE);
 			
 		const int getVALUE()const { return value; }
 		
 		void summ ( int );	
		 
	 	//void contor ();
	 	
	 	bool paritate();
	 	
	 	bool interval(int, int);
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
 		
 		void var::summ (int x) { value += x;} 
		
	 	bool var::paritate() { return value%2==0 ? true : false; }
	 	
	 	bool var::interval(int x, int y)  { return  (value > x && value <= y) ? 1 : 0; }
	 	
	 	//void var::contor() { value++; }
		 
	 	
 	int main()
 	{
 		// a+b-c POO;
 		// 1. Suma R;
 		// 2. Contor R par si Contor R impar;
 		// 
 		
 		srand( time(0) );
 		
 		var a, b, c, n, R[100];
	 	var s, CRP, CRI, par, imp;
 		
 		n.setVALUE1(" Enter n = ");
 		cout<<" n = "<<n.getVALUE()<<endl<<endl;
 		
 		CRP.setVALUE3(0);
 		
 		CRI.setVALUE3(0);
 		
 		par.setVALUE3(0);
 		
 		imp.setVALUE3(0);
	 	
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
		 	
		 	s.summ(R[i].getVALUE());
		 	
		 	if ( R[i].paritate() ) CRP.summ(1); 
		 	
		  	else CRI.summ(1); 
		  	
		  	if ( a.paritate() && a.interval(10, 20) ) { par.summ ( a.getVALUE() ); }
		  	
		  	if ( !R[i].paritate() ) imp.summ(R[i].getVALUE());
		 	 
		 	//s.setVALUE3( s.getVALUE() + R[i].getVALUE() );
	 	}          
	 	
	 	cout<<" Suma raspunsurilor = "<<s.getVALUE()<<endl;
	 	
	 	cout<<" Numarul contoarelor pare = "<<CRP.getVALUE()<<endl;
	 	
	 	cout<<" Numarul contoarelor impare = "<<CRI.getVALUE()<<endl;
		 	  		
	 	cout<<" Suma pentru a = "<<par.getVALUE()<<endl; 	 
		 
		cout<<" Suma raspunsurilor impare = "<<imp.getVALUE()<<endl;		
		
 		return 0;
 	}
 	

