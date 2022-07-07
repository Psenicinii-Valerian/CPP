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
 		
 		---------------------------------------------------------DESTRUCTOR------------------------------------------------------
 		
	 	Reguli de declarare a destructorului:
		 
	 	1) se declara doar in zona public;
	 	2) destructorul poarta numele clasei;
	 	3) destructorul nu poate returna nimic;
	 	4) destructorul nu are parametri;
	 	5) destructorul in fata are simbolul tilda (~).
	 	
	 	------------------------------------------------------FUNCTII PRIETENE---------------------------------------------------
	 	
	 	Functia prietena - unei functii prietene i se permite acces la zonele privatea clasei. Functiile prietene nu fac parte
 		din componenta clasei.
 		
 		operatorul friend - declara functia ca prietena
 	*/
   	
   	class var
 	{    
 		int value; 
 		double x=888.666;

 		public:
 			 
 		var(int value=NULL) : value(value) {}
 		var(const var&Obj) { this->value = Obj.value ; }
 		
 		~var(){}
 		
 		void  setVALUE1(char *message ) 
 		{
          	cout << message;
          	cin>>this->value ;
 		}
 		
  		void   setVALUE2()  
 		{
 			this->value = rand()%20;
 		}
 		
 		void   setVALUE3(int value)  
 		{
 			this->value = value;
 		} 
 		
 		inline const int getVALUE()const{ return this->value; }
 		inline void summ(int x){  this->value+=x; }
 		inline bool paritate(){ return this->value%2==0 ? true : false; }  
 		inline bool interval(int x, int y){ return this->value>=x&&this->value<y ? true : false; }
 		
 		friend void show(const var&);
 		friend void show(const var&, const var&);
 		friend ostream& operator<<(ostream&, var&);
 		friend istream& operator>>(istream&, var&);
   	};

	     	
   	void show(const var&X)
   	{   	
   		cout<<" X.value = "<<X.value<<endl;
   		cout<<" X.x = "<<X.x<<endl;

 	}
 	
 	void show(const var&X, const var&Y)
   	{
   		cout<<" X.value = "<<X.value<<endl;
   		cout<<" Y.value = "<<Y.value<<endl;
 	}
 	
 	void xxx(const var&XXX)
 	{
 		cout<<" XXX.getVALUE() = "<<XXX.getVALUE()<<endl;
 	}
 	
 	// combinatia este <<OBJ
 	ostream& operator<<(ostream&COUT, var&OBJ)
 	{
 		COUT<<" class var value = "<<OBJ.value;
 		
 		//return COUT; - nu este obligator
 	}
 	
 	// combinatia este >>OBJ
 	istream& operator>>(istream&CIN, var&OBJ)
 	{
 		CIN>>OBJ.value;	
 		
 		//return CIN; - nu este obligator
 	}
 	
 	
 	int main()
 	{
 		srand(time(0));   
		                       
     	/*
     	var A=777, B=555, C=999;
     	
     	// A.show(A); error NU intra in componenta clasei A
	
     	show(A);
	 	cout<<endl;
		     	
     	show(A,B);
     	cout<<endl;
     	
     	xxx(C);
     	cout<<endl;
     	*/
     	
     	var X=777, Y;
     	cout<<X<<endl;
     	
     	cout<<" class var Enter value = ";
     	cin>>Y;
     	cout<<Y<<endl;
 		
     	return 0;   
    }
