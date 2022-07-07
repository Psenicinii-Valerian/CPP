 	#include <iostream>
 	#include <iostream>
 	#include <cstdlib>
 	#include <ctime>
 	#include <iomanip>
 	#include <cstring>
 	
 	using namespace std;
 	
 	/* 
 		****************************************PROGRAMAREA ORIENTATA OBIECT*****************************************
 		
 		-------------------------------------------------CONSTRUCTORI------------------------------------------------
 		
 		constructor - este o metoda care se apeleaza automat in momentul declararii obiectului.
 		
 		REGULI DE DECLARARE A OBIECTULUI:
 		
 		1) Constructorii se declara exclusiv in zona public;
 		
 		2) Constructorii poarta numele clasei;
 		
 		3) Constructorii nu returneaza nimic si nu au tip de date de returnare ( de ex. void sau int )
 		
 		EXISTA 3 TIPURI DE CONSTRUCTORI: 
 		
 		1) Constructorul implicit - constructor fara parametri ( ai functiei ). Seteaza proprietatile cu valori 
 		de inceput.
 		
 		2) Constructorul de supraincarcare - constructor cu parametri ( ai functiei ). Seteaza proprietatile cu 
	 	valori de inceput.
	 	
	 	3) Constructorul de copiere - constructor cu parametri ( ai functiei - cu tipurile de date pe care dorim
	 	sa le copiem - de obicei clasa). Extrage valoarea unei proprietati si i-o seteaa altei proprietati la
	 	care se apeleaza acest constructor.
 		
 		Algoritmul de copiere pe biti se activeaza daca nu este constructorul de copiere.
 		
 		explicit - seteaza constructorul sa lucreze doar cu parantezele ( nu vom mai putea face var A=123; )
 	*/
 	
 	class var
 	{
 		int value;
	 	double valueD;
	 	char sir[256];
 		
 	  public: 
 	  
 	  	//var(){ cout<<" CONSTRUCTOR"<<endl; this->setVALUE2(); } 
 	  	
 	  	var(){ cout<<" CONSTRUCTOR implicit "<<endl; this->value = NULL; this->valueD = NULL; (this)->sir[0]='\0'; }
 	  	
 	    explicit  var( int value ){ cout<<" CONSTRUCTOR supraincarcat int "<<endl; 
 		this->value = value;
	 	this->valueD = NULL; 
 	 	(this)->sir[0]='\0'; }
	   
 	    explicit  var( double valueD ){ cout<<" CONSTRUCTOR supraincarcat double "<<endl; 
 	    this->value = NULL;
	 	this->valueD = valueD;
	 	(this)->sir[0]='\0'; }
	 	
 	    explicit  var( char sir[] ){ cout<<" CONSTRUCTOR supraincarcat char[] "<<endl; 
 	    this->value = NULL;
	 	this->valueD = NULL; 
	 	strcpy(this->sir, sir); }
 	  	
 	    var( var &Obj ){ cout<<" CONSTRUCTOR de copiere "<<endl; this->value = Obj.value; }
		
 		void setVALUE1( char* );
 			
 		void setVALUE2();	
 		
 		void setVALUE3(int VALUE);
 			
 		const int getVALUE()const { return this->value; }
 		const double getVALUED()const { return this->valueD; }
 		char* getSIR() { return this->sir; }
 		
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
 		srand( time(0) );
 		
 		var X(777), Y, Z(X); 
	 	var B=Z; // daca adaugam explicit la constructorul de copiere B=Z nu va mai merge -> B(Z);	
		
 		cout<<" X = "<<X.getVALUE()<<endl;
	 	cout<<" char Y="<<Y.getSIR()<<endl;
 		
 		cout<<" Y = "<<Y.getVALUE()<<endl;
 		cout<<" Z = "<<Z.getVALUE()<<endl; 		
 		cout<<" B = "<<B.getVALUE()<<endl<<endl;
 		
 		//var A=123;
	 	var A(123);
 		cout<<" A = "<<A.getVALUE()<<endl<<endl;
 		
 		var W0(123), W1(10.10), W2("asdf");
 		
 		cout<<"\n int W0 = "<<W0.getVALUE()<<endl;
 		cout<<" double W0 = "<<W0.getVALUED()<<endl;
 		cout<<" char W0 = "<<W0.getSIR()<<endl<<endl;
 		
 		cout<<" int W1 = "<<W1.getVALUE()<<endl;
 		cout<<" double W1 = "<<W1.getVALUED()<<endl;
 		cout<<" char W1 = "<<W1.getSIR()<<endl<<endl;
 				
 		cout<<" int W2 = "<<W2.getVALUE()<<endl;
 		cout<<" double W2 = "<<W2.getVALUED()<<endl;
 		cout<<" char W2 = "<<W2.getSIR()<<endl<<endl;
 		
 		return 0;
 	}
 	

