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
	 	
	 	//tema pentru acasa: 
	 	
	 	// constructori cu 2 proprietati
	 	explicit  var( int value, double valueD ){ cout<<" CONSTRUCTOR supraincarcat int && double "<<endl; 
 		this->value = value;
	 	this->valueD = valueD; 
 	 	(this)->sir[0]='\0'; }
 	 	
 	 	explicit  var(  double valueD, int value ){ cout<<" CONSTRUCTOR supraincarcat double && int "<<endl; 
 		this->value = value;
	 	this->valueD = valueD; 
 	 	(this)->sir[0]='\0'; }
 	 	
 	 	explicit  var(  char sir[], int value ){ cout<<" CONSTRUCTOR supraincarcat char && int "<<endl; 
 		this->value = value;
	 	this->valueD = NULL; 
 	 	strcpy(this->sir, sir); }
 	 	
 	 	explicit  var(  int value, char sir[]  ){ cout<<" CONSTRUCTOR supraincarcat int && char "<<endl; 
 		this->value = value;
	 	this->valueD = NULL; 
 	 	strcpy(this->sir, sir); }
 	 	
 	 	explicit  var(  double valueD, char sir[]  ){ cout<<" CONSTRUCTOR supraincarcat double && char "<<endl; 
 		this->value = NULL;
	 	this->valueD = valueD; 
 	 	strcpy(this->sir, sir); }
 	 	
 	 	explicit  var(  char sir[], double valueD   ){ cout<<" CONSTRUCTOR supraincarcat char && double "<<endl; 
 		this->value = NULL;
	 	this->valueD = valueD; 
 	 	strcpy(this->sir, sir); }
 	 	
 	 	//constructori cu 3 proprietati:
 	 	
	 	explicit  var( int value, double valueD, char sir[] ){ cout<<" CONSTRUCTOR supraincarcat int && double && char "<<endl; 
 		this->value = value;
	 	this->valueD = valueD; 
 	 	strcpy(this->sir, sir); }
 	 	
 	 	explicit  var( int value, char sir[], double valueD ){ cout<<" CONSTRUCTOR supraincarcat int && char && double "<<endl; 
 		this->value = value;
	 	this->valueD = valueD; 
 	 	strcpy(this->sir, sir); }
 	 	
 	  	explicit  var( double valueD, char sir[], int value ){ cout<<" CONSTRUCTOR supraincarcat double && char && int "<<endl; 
 		this->value = value;
	 	this->valueD = valueD; 
 	 	strcpy(this->sir, sir); }
 	  	
 	  	explicit  var( double valueD, int value, char sir[] ){ cout<<" CONSTRUCTOR supraincarcat double && int && char "<<endl; 
 		this->value = value;
	 	this->valueD = valueD; 
 	 	strcpy(this->sir, sir); }
 	 	
 	 	explicit  var( char sir[], int value, double valueD  ){ cout<<" CONSTRUCTOR supraincarcat char && int && double "<<endl; 
 		this->value = value;
	 	this->valueD = valueD; 
 	 	strcpy(this->sir, sir); }
 	 	
 	 	explicit  var( char sir[], double valueD, int value  ){ cout<<" CONSTRUCTOR supraincarcat char && double && int "<<endl; 
 		this->value = value;
	 	this->valueD = valueD; 
 	 	strcpy(this->sir, sir); }
 	  	
 	  	//sfarsitul temei pentru acasa
 	  	
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
 		
 		cout<<"----------------------------------------------Constructori cu 1 proprietate---------------------------------------------"<<endl;
 		
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
 		
 		cout<<"----------------------------------------------Constructori cu 2 proprietati---------------------------------------------"<<endl;
 		
 		var Q0(123, 10.77), Q1(10.10, 777), Q2("student", 111), Q3(333, "profesor"), Q4(6.66, "qwe"), Q5("zxc", 8.876);
 		cout<<"\n int && double Q0 = "<<Q0.getVALUE()<<", "<<Q0.getVALUED()<<endl;
 		cout<<" double && int Q1 = "<<Q1.getVALUED()<<", "<<Q1.getVALUE()<<endl;
 		cout<<" char && int Q2 = "<<Q2.getSIR()<<", "<<Q2.getVALUE()<<endl;
 		cout<<" int && char Q3 = "<<Q3.getVALUE()<<", "<<Q3.getSIR()<<endl;
 		cout<<" double && char Q4 = "<<Q4.getVALUED()<<", "<<Q4.getSIR()<<endl;
 		cout<<" char && double Q5 = "<<Q5.getSIR()<<", "<<Q5.getVALUED()<<endl<<endl;
 		
 		cout<<"----------------------------------------------Constructori cu 3 proprietati---------------------------------------------"<<endl;
 		
 		var X0(134, 99.777, "qwerty"), X1(999, "password", 88.765), X2(4.33, "football", 1111), X3(9.8765, 1000, "chemistry" ),
		    X4("salut", 456, 87.9012), X5("world", 14.02, 2022);
 		cout<<"\n int && double && char X0 = "<<X0.getVALUE()<<", "<<X0.getVALUED()<<", "<<X0.getSIR()<<endl;
 		cout<<" int && char && double X1 = "<<X1.getVALUE()<<", "<<X1.getSIR()<<", "<<X1.getVALUED()<<endl;
 		cout<<" double && char && int X2 = "<<X2.getVALUED()<<", "<<X2.getSIR()<<", "<<X2.getVALUED()<<endl;
 		cout<<" double && int && char X3 = "<<X3.getVALUED()<<", "<<X3.getVALUE()<<", "<<X3.getSIR()<<endl;
 		cout<<" char && int && double X4 = "<<X4.getSIR()<<", "<<X4.getVALUE()<<", "<<X4.getVALUED()<<endl;
 		cout<<" char && double && int X5 = "<<X5.getSIR()<<", "<<X5.getVALUED()<<", "<<X5.getVALUE()<<endl;
 		
 		return 0;
 	}
 	

