 	#include <iostream>
 	#include <iostream>
 	#include <cstdlib>
 	#include <ctime>
 	#include <iomanip>
 	#include <conio.h>
 	//#include <cstring>
 	
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
   	
   	class SIR
 	{
 		char value[256];	
 		
 		public:
 		
 		SIR (char *value="\0") { STRCPY(value); }
	
 		
 		~SIR() {}
 		
 		inline void setSIR( char* );
		 
	 	inline char* getSIR() { return this->value; }	
		 
	 	inline friend ostream& operator<<(ostream&, SIR&);
 		inline friend istream& operator>>(istream&, SIR&);
 		
 		inline int STRLEN(char*);
 		inline void STRCPY(char*);
 		inline void STRCAT(char*);
 		inline bool STRCMP(char*);
 		inline bool STRCHR(char);
 		inline bool STRCHR(char*);
		inline bool STRSTR(char*);
		
 	};  	
   	
   	// combinatia este <<OBJ
 	ostream& operator<<(ostream&COUT, SIR&OBJ)
 	{
 		COUT<<OBJ.value;
 	}
 	
 	// combinatia este >>OBJ
 	istream& operator>>(istream&CIN, SIR&OBJ)
 	{
 		CIN>>OBJ.value;	
 	}
 	
 	int SIR::STRLEN(char *value="\0")
 	{
 		int i = 0;
 		
 		if( value[0] == 0 ) while( this->value[i] != 0 ) i++;
 		else while( value[i] != 0 ) i++;
 		
 		return i;		
 	}
 	
 	// OBJECT.STRLEN() => nr. simboluri al proprietatii OBJECT
	// OBJECT.STRLEN("123 321") => nr. simboluri al parametrului
	
 	void SIR::STRCPY(char *value)
 	{
 		int i = 0;
 		
 		while( value[i] != 0 ) 
 		{
 			this->value[i] = value[i];
 			i++;
 		}
 		
 		this->value[i] = '\0';	
 	}
 	
 	void SIR::STRCAT(char *value)
 	{
 		int n1 = STRLEN(); 			// n1 = sir1 sau this->sir
 		int n2 = STRLEN(value);		// n2 = sir2 sau sirul dat de noi
 		if ( ( n1 + n2 ) < 256 )
 		{
 			cout<<" Concatinarea s-a realizat "<<endl;
 			{
 				for (int i=0; i<n2; i ++)
 				{
 					this->value[n1+i] = value[i];
			 	}
	 		} 
	 		
	 		this->value[n1+n2] = 0;
 		}
		
 		else cout<<" Concatinarea nu este posibila"<<endl;
 	}
 	
 	bool SIR::STRCMP(char *value)
 	{
 		int n1 = STRLEN();
 		int n2 = STRLEN(value);
 		
 		if ( n1 == n2 )
 		{
 	 		cout<<" Compararea s-a realizat "<<endl;
	 		
	 		for (int i=0; i<n1; i++)
	 		if ( this->value[i] != value[i] ) return 0;	 
			 
	 		return 1;		
 		}
		
 		else cout<<" Compararea nu este posibila"<<endl;
 		
 		return 0;
 	}
 		
 	bool SIR::STRCHR(char x) 	// se poate si char *x
 	{
 		int n1 = STRLEN();
 		
 		for ( int i=0; i < n1; i++ ) 
 		if ( this->value[i] == x ) return true;
 		
 		return false;
 	}
 	
 	// asdf, asd
 	
 	bool SIR::STRSTR(char *value) 	
 	{
 		int i=0, j=0, n = STRLEN(value);
 		
 		while( this->value[i] != 0 )
 		{
		 
 			if ( this->value[i] == value[j] ) 
	 		{
		 		if( j == n-1 ) return 1;
		 		j++;
	 		}
	 		
 			else 
	 		{
	 			if ( j > 0 ) i--;
			 	j = 0;
		 	}
 			
 			i++;
		 
 		}
 		
 		return 0;
 	}
 	
	
 	int main()
 	{
 		srand(time(0));   
 			         		              	
 		SIR a, b="step 2022", c("itSTEP");
 		cout<<" Enter sir a :: ";
 		cin>>a;
 		
 		cout<<" a = "<<a<<endl;
 		cout<<" b = "<<b<<endl;
 		cout<<" c = "<<b<<endl;
 		
 		cout<<" A.STRLEN() = "<<a.STRLEN()<<endl;
 		cout<<" B.STRLEN() = "<<b.STRLEN()<<endl;
 		
 		SIR x;
 		
 		x.STRCPY("STEP2022 it");
 		
 		cout<<" x = "<<x<<endl;
 		
     	a.STRCAT(x.getSIR());
     	
     	cout<<" a = "<<a<<endl;
     	
     	if( a.STRCMP("asdfSTEP2022 it") ) cout<<" STRCMP true "<<endl; 
     	// dam la cin>>a :: asdf ca sa returneze true
     	else cout<<" STRCMP false "<<endl;
     	
     	if( a.STRCHR('a') ) cout<<" STRCHR true "<<endl;
     	else cout<<" STRCHR false "<<endl;
     	
     	if( a.STRSTR("asdf") ) cout<<" STRSTR true "<<endl;
     	else cout<<" STRSTR false "<<endl;

     	
     	return 0;   
 	}	
