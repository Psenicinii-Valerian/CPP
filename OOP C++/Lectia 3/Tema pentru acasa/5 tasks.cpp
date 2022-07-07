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
 		int value, xxx;
 		
 	  public: 
 		
 		void setVALUE1( char* );
 			
 		void setVALUE2();	
 		
 		void setVALUE3(int VALUE);
 			
 		const int getVALUE()const { return this->value; }
 		
 		void summ ( int );	
		 
	 	//void contor ();
	 	
	 	bool paritate();
	 	
	 	bool interval(int, int);
	 	
	 	bool ipar (int);
	 	
	 	bool max(int);
 	};
 	
 	
 		void var::setVALUE1(char *message)
 		{
 			cout<<message;
		 	cin>>this->value;	
	 		//	cout<<" 1 value = "<<value<<endl;	
 		}
 	
 		void var::setVALUE2()
 		{
 			this->value = rand()%150-50;	
 			//	cout<<" 2 value = "<<value<<endl;
 		}
 		
 		void var::setVALUE3(int value)
 		{
 			this->value = value;	
 			//	cout<<" 3 value = "<<value<<endl;
 		}
 		
 		void var::summ (int x) { value += x;} 
		
	 	bool var::paritate() { return this->value%2==0 ? true : false; }
	 	
	 	bool var::ipar (int x) { return x%2==0 ? true : false; }
	 	
	 	bool var::interval(int x, int y)  { return  (this->value > x && this->value <= y) ? 1 : 0; }
	 	
	 	bool var::max(int xxx) { return  (this->value > xxx) ? 1 : 0; }
	 	
	 	//void var::contor() { value++; }
		 
	 	
 	int main()
 	{
 		// a+b-c POO; 
 		
 		srand( time(0) );
 		
 		var a, b, c, d, e, n, R[100];
	 	var s, CRP, CRI, par, imp, impi, CA, CB, CC, maxpar, maximp, minpar, minimp;
 		
 		n.setVALUE1(" Enter n = ");
 		cout<<" n = "<<n.getVALUE()<<endl<<endl;
 		
 		s.setVALUE3(0);
 		
 		CRP.setVALUE3(0);
 		
 		CRI.setVALUE3(0);
 		
 		par.setVALUE3(0);
 		
 		imp.setVALUE3(0);
 		
 		impi.setVALUE3(0);
 		
 		CA.setVALUE3(0);
 		
 		CB.setVALUE3(0);
 		
 		CC.setVALUE3(0);
 		
 		maxpar.setVALUE3(INT_MIN);
 		
 		maximp.setVALUE3(INT_MIN);
 		
 		minpar.setVALUE3(INT_MAX);
 		
 		minimp.setVALUE3(INT_MAX);
	 	
	 	for ( int i=0 ; i < n.getVALUE(); i++ )  
	 	{
						
 			a.setVALUE2();
	 		cout<<"\n a = "<<a.getVALUE()<<endl;
	 	
	 		b.setVALUE2();	
	 		cout<<" b = "<<b.getVALUE()<<endl;
	 	
	 		c.setVALUE2();
	 		cout<<" c = "<<c.getVALUE()<<endl;	
	 		
	 		d.setVALUE2();
	 		cout<<" d = "<<d.getVALUE()<<endl;
	 		
	 		e.setVALUE2();
	 		cout<<" e = "<<e.getVALUE()<<endl<<endl;
	 		
	 		R[i].setVALUE3( a.getVALUE() * b.getVALUE() - c.getVALUE() + d.getVALUE() + e.getVALUE() );
	 		
	 		cout<<setw(3)<<" R["<<i+1<<"] = "<<a.getVALUE()<<" * "<< b.getVALUE()<<" - "<<c.getVALUE()<<" + "<<d.getVALUE()<<" + "<<e.getVALUE()<<" = "<<R[i].getVALUE()<<endl<<endl;	
		 	
		 	s.summ( R[i].getVALUE() );
		 	
		 	if ( R[i].paritate() ) CRP.summ(1); 
		 	
		  	else CRI.summ(1); 
		  	
		  	if ( a.paritate() && a.interval(10, 20) ) { par.summ ( a.getVALUE() ); }
		  	
		  	if ( !R[i].paritate() ) imp.summ(R[i].getVALUE());
		  	
		  	if ( !R[i].ipar(i) ) impi.summ(R[i].getVALUE());
		  	
		  	if ( a.paritate() && ( a.interval(10,20) || a.interval(30,40) || a.interval(60,80) ) ) CA.summ(1);
		  	
		  	if ( !b.paritate() && ( b.interval(1,20) || b.interval(31,99) ) ) CB.summ(1);
		  	
		  	if ( c.paritate() && ( c.interval(-10,0) || c.interval(3,45) || c.interval(50,101) ) ) CC.summ(1);
		  	
		  	if ( R[i].paritate() && R[i].max(maxpar.getVALUE() ) ) maxpar.setVALUE3(R[i].getVALUE());
		  	
		  	if ( !R[i].paritate() && R[i].max(maximp.getVALUE() ) ) maximp.setVALUE3(R[i].getVALUE());
		  	
		  	if ( R[i].paritate() && !R[i].max(minpar.getVALUE() ) ) minpar.setVALUE3(R[i].getVALUE());
		  	
		  	if ( !R[i].paritate() && !R[i].max(minimp.getVALUE() ) ) minimp.setVALUE3(R[i].getVALUE());
		 	 
		 	//s.setVALUE3( s.getVALUE() + R[i].getVALUE() );
	 	}          
	 	
	 	cout<<" Suma raspunsurilor = "<<s.getVALUE()<<endl;
	 	
	 	cout<<" Numarul R pare = "<<CRP.getVALUE()<<endl;
	 	
	 	cout<<" Numarul R impare = "<<CRI.getVALUE()<<endl;
		 	  		
	 	cout<<" Suma pentru a par && (10..20) = "<<par.getVALUE()<<endl; 	 
		 
	 	cout<<" Suma raspunsurilor impare = "<<imp.getVALUE()<<endl;	
		 
 		cout<<" Suma raspunsurilor iteratiilor impare = "<<impi.getVALUE()<<endl;
 		
 		cout<<" Contor A par && (10..20) or (30..40) or (60..70) = "<<CA.getVALUE()<<endl;
 		
 		cout<<" Contor B impar && (1..20) or (31..99) = "<<CB.getVALUE()<<endl;
 		
 		cout<<" Contor C par && (-10..0) or (3..45) or (50..101) = "<<CC.getVALUE()<<endl;
 		
 		cout<<" Raspunsul maximal par este = "<<maxpar.getVALUE()<<endl; 	
		 
	 	cout<<" Raspunsul maximal impar este = "<<maximp.getVALUE()<<endl;	
	 	
	 	cout<<" Raspunsul minimal par este = "<<minpar.getVALUE()<<endl;	
	 	
	 	cout<<" Raspunsul minimal impar este = "<<minimp.getVALUE()<<endl;	
 				
 		return 0;
 	}
 	

