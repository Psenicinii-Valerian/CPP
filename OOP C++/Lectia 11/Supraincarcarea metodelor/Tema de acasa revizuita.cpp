 	#include <iostream>
 	#include <iostream>
 	#include <cstdlib>
 	#include <ctime>
 	#include <iomanip>
 	#include <cstring>
 	
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
 		
 		
 		---------------------------------------------Instructiunea this----------------------------------------------
 		
 		Instructiunea this -  un pointer automatizat inteligent, care ne indica adresa de inceput a obiectului.
 		Se utilizeaza doar in interiorul clasei. Ne permite sa garantam ca variabila apelata este proprietatea
 		clasei.
 		
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
 		
 		-----------------------------------------------SUPRAINCARCAREA OPERATORILOR-----------------------------------------------
 		
 		Tehnologia de supraincarcare a operatorilor extinde functionalitatea limbajului. Operatorii pot primi o functionalitate
 		noua apelata prin functionalitatea lor standarta de prelucrare. Functiile de supraincarcare a operatorilor se apeleaza 
	 	prin intermediul combinatiei. Supraincarcarea operatorilor poate fi realizata ca functie prietena sau ca metoda a clasei. 
		
 		tip_date_return operator OPERATORUL(paramentrii necesari ai combinatiei)
 		{
			.......
 		}
 		
 		--------------------------------------------SUPRAINCARCAREA CA METODA A CLASEI--------------------------------------------
 		
 		Metodele utilizate la supraincarcare ne permit sa nu transmitem un obiect
 		Supraincarcarea egalului se realizeaza numai ca metoda a clasei
 		Daca in urma apelarii metodei este necesar sa returnam obiectul care a apelat metoda - se utilizeaza pointerul this (*this)
 		
 	*/ 
   	
   	class var
 	{    
 		int value;

 		public:
 			 
 		var(int value=NULL) : value(value) {}
 		var(const var&Obj) { cout<<" &value = "<<&value<<endl; this->value = Obj.value ; }
 		
 		~var(){}
 		
 		void setVALUE1(char *message ) 
 		{
          	cout << message;
          	cin>>this->value ;
 		}
 		
  		void setVALUE2()  
 		{
 			this->value = rand()%20;
 		}
 		
 		void setVALUE3(int value)  
 		{
 			this->value = value;
 		} 
 		
 		inline const int getVALUE()const{ return this->value; }
	 	
 		void operator++();
     	void operator++(int);
		  
     	void operator--(); 
     	void operator--(int); 
     	
 		// ERROR friend void operator=(var&x,var&y);
 		
 		var& operator=(var&);
	 	var& operator=(int);
	 	
	 	var& operator+(var&);
	 	var& operator+(int);
	 	
	 	var& operator-(var&);
	 	var& operator-(int);
	 	
	 	var& operator*(var&);
	 	var& operator*(int);
 		 		
   		friend ostream& operator<<(ostream&, var&);
 		friend istream& operator>>(istream&, var&);
   		
   	};
   	
   	// ++var
   	void var::operator++() { this->value++; }  
   	
   	// var++
 	void var::operator++(int) { this->value++; }
	
 	// --var	  
 	void var::operator--() { this->value--; }  
    
 	// var--
 	void var::operator--(int) { this->value--; }
   	
   	// var = var
   	var& var::operator=(var&y)
 	{
       	this->value = y.value; 
 		return *this;
 	}
 	
 	// var = int
   	var& var::operator=(int y)
 	{
 		this->value = y ; 
 		return *this;
   	}
   	
   				
 	// var + var
 	var& var::operator + (var&y)
 	{ 	
 		cout<<"\n\n PLUS \n "<<this->value<<" + "<<y.value<<" = ";
 		this->value += y.value;
 		cout<<*this<<endl;
 		return *this;
 	}
 				
 	// var - var
 	var& var::operator - (var&y)
 	{ 	
 	 	cout<<"\n\n MINUS \n "<<this->value<<" - "<<y.value<<" = ";
 		this->value -= y.value;
 		cout<<*this<<endl;
 		return *this;
 	}
		
 	// var * var
 	var& var::operator * (var&y)
 	{ 	
	 	cout<<"\n\n INMULTIRE \n "<<this->value<<" * "<<y.value<<" = ";
 		this->value *= y.value;
 		cout<<*this<<endl;
 		return *this;
 	}
 		
 	
 	// combinatia este <<OBJ
 	ostream& operator<<(ostream&COUT, var&OBJ)
 	{
 		COUT<<OBJ.value;
 		
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
		                           	
     	var a,b,c,e,d;
     	
     	cout<<endl;
				     
  		cout<<" Enter a = ";
 		cin>>a;
		
 		cout<<" Enter b = ";
 		cin>>b; 
 		
	 	cout<<" Enter c = ";
 		cin>>c;
 		
 		cout<<" Enter d = ";
 		cin>>d;
 		
 		cout<<" Enter e = ";
 		cin>>e;

     	cout<<"\n REZOLVAREA ECUATIEI:: "<<endl;
     	
     	cout<<"\n a+b-c+(e*d)+(c*a)-d+a+e-(b*e)-c+b = "
 			<<a<<"+"<<b<<"-"<<c<<"+("<<e<<"*"<<d<<")+("<<c<<"*"<<a<<")-"<<d<<"+"<<a<<"+"<<e<<"-("<<b<<"*"<<e<<")-"<<c<<"+"<<b<<" = "
         	<<a+b-c+(e*d)+(c*a)-d+a+e-(b*e)-c+b<<endl;
  
     	return 0;   
 	}	
