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
 		
 		------------------------------------------------------METODA INLINE------------------------------------------------------
 		
 		inline - pana la apelarea metodei inline ascunde definirea corpului
 	*/
 	
 	class var
 	{
 		int value;
	 	double valueD;
	 	char sir[256];
 		
 	  public: 
 	  
 	  	//var(){ cout<<" CONSTRUCTOR"<<endl; this->setVALUE2(); } 
 	  	
 	  	//var(){ cout<<" CONSTRUCTOR implicit "<<endl; this->value = NULL; this->valueD = NULL; (this)->sir[0]='\0'; }
 	  	
 	  	var(int value) : value(value) , valueD(NULL)  {}

	 	/*
 	    explicit  var( int value ){ cout<<" CONSTRUCTOR supraincarcat int "<<endl; 
 		this->value = value;
	 	this->valueD = NULL; 
 	 	(this)->sir[0]='\0'; }
 	 	
	   	explicit  var( char sir[] ){ cout<<" CONSTRUCTOR supraincarcat char[] "<<endl; 
 	    this->value = NULL;
	 	this->valueD = NULL; 
	 	strcpy(this->sir, sir); }
	 	*/
	 	
 	    explicit  var( double valueD ){ cout<<" CONSTRUCTOR supraincarcat double "<<endl; 
 	    this->value = NULL;
	 	this->valueD = valueD;
	 	(this)->sir[0]='\0'; }
	 	
	 	
	 	/*
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
 	  	*/
 	  	
 	  	var( char sir[]="\0", int value = 777, double valueD = 777.777 )
 		{ cout<<" CONSTRUCTOR supraincarcat char , int , double "<<endl; 
 		strcpy(this->sir,sir); 
 		this->value = value; 
 		this->valueD = valueD;
 		} 
 	  	
 	    var(const var&Obj ){ cout<<" CONSTRUCTOR de copiere "<<endl; this->value = Obj.value; }
 	    
 	    var(const var&Obj, const var &Obj1, const var&Obj2 )
   		{cout<<" CONSTRUCTOR copiere "<<endl; 
     	this->value = Obj.value + Obj1.value - Obj2.value; 
     	this->sir[0]='\0'; 
     	this->valueD = NULL;
   		}
		 
 		inline void setVALUE1( char* );
 			
 		inline void setVALUE2();	
 		
 		inline void setVALUE3(int VALUE);
 			
 		inline const int getVALUE()const { return this->value; }
 		inline const double getVALUED()const { return this->valueD; }
 		inline char* getSIR() { return this->sir; }
 		
 		inline void summ ( int );	
		 
	 	//void contor ();
	 	
	 	inline bool paritate();
	 	
	 	inline bool interval(int, int);
	 	
	 	inline bool ipar (int);
	 	
	 	inline bool max(int);
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

 		var X;
 		
 		cout<<"\n sir X = "<<X.getSIR()<<endl;
 		cout<<" int X = "<<X.getVALUE()<<endl;
 		cout<<" double X = "<<X.getVALUED()<<endl;
 		
 		var Y(123);
 		
 		cout<<"\n sir Y = "<<Y.getSIR()<<endl;
 		cout<<" int Y = "<<Y.getVALUE()<<endl;
 		cout<<" double Y = "<<Y.getVALUED()<<endl<<endl;
 		
 		var A = "asdf"; // la copierea explicita nu functioneaza
     	
 		cout<<"\n sir A = "<<A.getSIR()<<endl;
 		cout<<" int A = "<<A.getVALUE()<<endl;
 		cout<<" double A = "<<A.getVALUED()<<endl<<endl;
 				
 		var Aa("qwertyu", 10);
 		
   		cout<<"\n sir Aa = "<<Aa.getSIR()<<endl;
     	cout<<" int Aa = "<<Aa.getVALUE()<<endl;
     	cout<<" double Aa = "<<Aa.getVALUED()<<endl<<endl;
     	
	 	var Aaa("zxcvb", 55, 33.44);
	 	
     	cout<<"\n sir Aaa = "<<Aaa.getSIR()<<endl;
     	cout<<" int Aaa = "<<Aaa.getVALUE()<<endl;
 		cout<<" double Aaa = "<<Aaa.getVALUED()<<endl<<endl;  
 		
 		cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
 		
 		//123+10-55
   		var XXX(Y,Aa,Aaa);
   		
   		cout<<"\n sir XXX = "<<XXX.getSIR()<<endl;
     	cout<<" int XXX = "<<XXX.getVALUE()<<endl;
     	cout<<" double XXX = "<<XXX.getVALUED()<<endl<<endl;
     	
   		// a+b-c
     	var a=3, b=2, c=1, R(a,b,c);
     	cout<<"\n R = a+b-c = "<<R.getVALUE()<<endl;
     	
     	// 1 vector , n
     	// 2 matrice , nxm
 		
 		
 		return 0;
 	}
 	

