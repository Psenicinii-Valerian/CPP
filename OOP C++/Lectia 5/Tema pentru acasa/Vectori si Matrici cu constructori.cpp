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
	 	int vector[100];
	 	int matrix[100][100];
 		
 	  public: 
 	  
 	  	//var(){ cout<<" CONSTRUCTOR"<<endl; this->setVALUE2(); } 
 	  	
 	  	//var(){ cout<<" CONSTRUCTOR implicit "<<endl; this->value = NULL; this->valueD = NULL; (this)->sir[0]='\0'; }
 	  	
 	  	var () {} 
 	  	
 	  	var(int value) : value(value) , valueD(NULL)  {}
	 	
 	    explicit  var( double valueD ){ cout<<" CONSTRUCTOR supraincarcat double "<<endl; 
 	    this->value = NULL;
	 	this->valueD = valueD;
	 	(this)->sir[0]='\0'; }
	 	
 	  	/*
 	  	var( char sir[]="\0", int value = 777, double valueD = 777.777 )
 		{ cout<<" CONSTRUCTOR supraincarcat char , int , double "<<endl; 
 		strcpy(this->sir,sir); 
 		this->value = value; 
 		this->valueD = valueD;
 		} 
 	  	*/
 	  	
 	    //var(const var&Obj ){ cout<<" CONSTRUCTOR de copiere "<<endl; this->value = Obj.value; }
 	      
 	    var(const var&Obj, const var &Obj1, const var&Obj2 )
   		{cout<<" CONSTRUCTOR copiere "<<endl; 
     	this->value = Obj.value + Obj1.value - Obj2.value; 
     	this->sir[0]='\0'; 
     	this->valueD = NULL;
   		}
   		
   		// insert vector 
   		var( const var&n )
   		{	
		   	cout<<"\n---------------------------------------------------CONSTRUCTOR VECTOR---------------------------------------------------"<<endl; 
   			cout<<" n = "<<n.value<<endl<<endl;
   			for ( int i=0; i < n.value; i++)
   			{		   
     			this->vector[i] = rand()%10; 
		 	}
		 	
	 		this->sir[0]='\0'; 
     		this->valueD = NULL;
   		}
   		
   		inline void getVALUEvector( int );
   			
   		// insert matrix 
   		inline var( const var&n, const var &m )
   		{	
		   	cout<<"\n---------------------------------------------------CONSTRUCTOR MATRIX---------------------------------------------------"<<endl; 
   			
   			cout<<" N = "<<n.value<<" M = "<<m.value<<endl<<endl;
			   
			for ( int i=0; i < n.value; i++)
   			{		   
   				for ( int j=0; j < m.value; j++ )
   				{
			 		this->matrix[i][j] = rand()%10; 
			 	}
		 	}
		 	
	 		this->sir[0]='\0'; 
     		this->valueD = NULL;
   		}
   		
   		inline void getVALUEmatrix( int, int );
		 
 		inline void setVALUE1( char* );
 			
 		inline void setVALUE2();	
 		
 		inline void setVALUE3(int value);
 			
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
 			this->value = rand()%7+3;	
 			//	cout<<" 2 value = "<<value<<endl;
 		}
 		
 		void var::setVALUE3(int value)
 		{
 			this->value = value;	
 			//	cout<<" 3 value = "<<value<<endl;
 		}
 		
 		// show vector
 		void var::getVALUEvector (int value)
 		{
 			for ( int i=0; i < value; i++)
 			cout<<" v["<<i+1<<"]= "<<this->vector[i]<<endl;
 			
 			//	cout<<" 3 value = "<<value<<endl;
 		}
 		
 		// show matrix
 		void var::getVALUEmatrix (int valueN, int valueM)
 		{
 			for ( int i=0; i < valueN; i++)
 			{
 				for ( int j=0; j < valueM; j++)
 				cout<<" M["<<i+1<<"]["<<j+1<<"] = "<<this->matrix[i][j]<<endl;
			}			
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
     	
     	// 1 vector , n
     	// 2 matrice , nxm
 		
 		var n;
 		
 		n.setVALUE3(0);
 		n.setVALUE2();
		 
	 	var Vector( n );
	
	 	Vector.getVALUEvector( n.getVALUE() );
	 	
	 	var N,M;
	 	
	 	N.setVALUE3(0);
 		N.setVALUE2();
 		
 		M.setVALUE3(0);
 		M.setVALUE2();
 		
 		var Matrix ( N, M );
 		
 		Matrix.getVALUEmatrix ( N.getVALUE(), M.getVALUE() );
	
	
 		return 0;
 	}
 	

