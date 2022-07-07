 	#include <iostream>
 	#include <iostream>
 	#include <cstdlib>
 	#include <ctime>
 	#include <iomanip>
 	#include <conio.h>
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
   	
   	class STRING
 	{
 		char sir[256];	
 		
 		public:
 		
 		STRING (char sir[]="\0") 	
	 	{
		 	strcpy(this->sir,sir);		 	
	 	}
 		
 		~STRING() {}
 		
 		inline void setSIR( char* );
		 
	 	inline const char* getSIR()const{ return this->sir; }	
		 
	 	inline friend ostream& operator<<(ostream&, STRING&);
 		inline friend istream& operator>>(istream&, STRING&);
 		
	 	inline STRING& operator=(STRING&);
	 	inline STRING& operator=(char*);
	 	
	 	void operator~();
	 	
	 	void operator+(STRING&);
	 	inline STRING& operator+(char*);
	 	
	 	void operator>(STRING&);
	 	void operator>(char*);
	 	
	 	void operator[](int);
	 	
	 	void operator()(STRING&);
	 	void operator()(char*);
 	};  	
   	
   	// combinatia este <<OBJ
 	ostream& operator<<(ostream&COUT, STRING&OBJ)
 	{
 		COUT<<OBJ.sir;
 	}
 	
 	// combinatia este >>OBJ
 	istream& operator>>(istream&CIN, STRING&OBJ)
 	{
 		CIN>>OBJ.sir;	
 	}
 	
 	// strcpy STRING = STRING 
 	STRING& STRING::operator=(STRING&s)
 	{
       	strcpy(this->sir, s.sir); 
 		return *this;
 	}
 	
	// strcpy STRING = CHAR
 	STRING& STRING::operator=(char *cpy)
 	{
       	strcpy(this->sir, cpy); 
 		return *this;
 	}
 	
 	// strlen STRING
 	void STRING::operator~()
 	{
       	cout<<" strlen("<<(this->sir)<<") = "<<strlen(this->sir)<<" characters"; 
 	}
 	
 	// strcat STRING + STRING
 	void STRING::operator+(STRING&s)
 	{
       	cout<<"     strcat("<<this->sir<<" + "<<s.sir<<") "<<strcat(this->sir, s.sir); 
 	}
 	
 	// strcmp STRING + char
 	STRING& STRING::operator+(char *add)
 	{
       	strcat(this->sir, add); 
 		return *this;
 	}
 	
 	// strcmp STRING > STRING
 	void STRING::operator>(STRING&s)
 	{
       	strcmp(this->sir, s.sir); 
       	if (strcmp (this->sir, s.sir) == 0) cout<<" "<<this->sir<<" == "<<s.sir;
       	else if (strcmp (this->sir, s.sir) == -1) cout<<" "<<this->sir<<" < "<<s.sir;
       	else if (strcmp (this->sir, s.sir) ==  1) cout<<" "<<this->sir<<" > "<<s.sir;
 		
 	}
 	
 	// strcmp STRING > char
 	void STRING::operator>(char *cmp)
 	{
       	strcmp(this->sir, cmp); 
 		if (strcmp (this->sir, cmp) == 0) cout<<"     "<<this->sir<<" == "<<cmp;
       	else if (strcmp (this->sir, cmp) == -1) cout<<"     "<<this->sir<<" < "<<cmp;
       	else if (strcmp (this->sir, cmp) ==  1) cout<<"     "<<this->sir<<" > "<<cmp;
 	}
 	
 	// strchr STRING [int value for char]
 	void STRING::operator[](int chr)
 	{
       	strchr (this->sir, chr); 
 		if ( strchr (this->sir, chr) ) cout<<" in \""<<this->sir<<"\" este simbolul cautat ";
	 	else cout<<" in \""<<this->sir<<"\" nu este simbolul cautat ";
 	}
 		 	
 	// strstrSTRING (sir)
 	void STRING::operator()(STRING&s)
 	{
       	strstr (this->sir, s.sir); 
 		if ( strstr (this->sir, s.sir) ) cout<<" in \""<<this->sir<<"\" este sirul \""<<s.sir<<"\" ";
	 	else cout<<" in \""<<this->sir<<"\" nu este sirul \""<<s.sir<<"\" ";
 	}
 	
 	// strstrSTRING (char)
 	void STRING::operator()(char *str)
 	{
       	strstr (this->sir, str); 
 		if ( strstr (this->sir, str) ) cout<<"     in \""<<this->sir<<"\" este sirul \""<<str<<"\" ";
	 	else cout<<"     in \""<<this->sir<<"\" nu este sirul \""<<str<<"\" ";
 	}

	
 	int main()
 	{
 		srand(time(0));   
 			         		              	
 		STRING a,b,c;
 		
 		cout<<" Dati sirul a = ";
 		cin>>a;
 		
 		cout<<endl; 
		
 		cout<<" 1) ";	
 		cout<<" b = "<<(b = a)<<endl<<endl;
 		
 		cout<<" 2) ";
 		~b;
 		cout<<endl<<endl;
 		
 		cout<<" 3) ";
 		
 		c = "world ";
 		cout<<" c = "<<c<<endl<<endl;
 		
 		c+a;
 		cout<<endl;
 		
 		cout<<"     strcat(c,buna) = "<<c+" buna"<<endl<<endl;
 		
 		cout<<" 4) ";
 		a>c;
 		cout<<endl;
 		c>"world hello message";
 		cout<<endl<<endl;
	
 		cout<<" 5) ";		
 		a[111];
 		cout<<endl<<endl;
 		
 		cout<<" 6) ";		
 		c(a);
 		cout<<endl;
 		c("step");
 		cout<<endl;
     	
     	return 0;   
 	}	
