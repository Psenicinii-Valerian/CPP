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
 		
 		SIR (char *value="\0") { value = this->value; }
	
 		
 		~SIR() {}
 		
 		inline void setSIR( char* );
		 
	 	inline char* getSIR() { return this->value; }	
		 
	 	inline friend ostream& operator<<(ostream&, SIR&);
 		inline friend istream& operator>>(istream&, SIR&);
 		
 		inline int operator!();
 		
 		inline SIR& operator=(char*);
 		inline SIR& operator=(SIR&);
 		
 		inline void operator+(char*);
 		inline void operator+(SIR&);
 		
 		inline bool operator>(char*);
 		inline bool operator>(SIR&);
 		
 		inline bool operator[](char);
 		inline bool operator[](SIR&);
 		
 		inline bool operator()(char*);
 		inline bool operator()(SIR&);
 		
 		inline void STRCPY(char*);
		
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
 	
 	
 	// STRLEN (OBJ)
 	int SIR::operator!()
 	{
 		int i = 0;
 		
 		if( this->value[0] == 0 ) while( this->value[i] != 0 ) i++;
 		else while( this->value[i] != 0 ) i++;
 		
 		return i;		
 	}
 	
 	// STRLEN (CHAR) ?????


 	// STRCPY (OBJ)
 	SIR& SIR::operator=(SIR&sir)
 	{
 		int i = 0;
 		
 		while( sir.value[i] != 0 ) 
 		{
 			this->value[i] = sir.value[i];
 			i++;
 		}
 		
 		this->value[i] = '\0';	
 		
 		return *this;
 	}
 	
 	// STRCPY (CHAR)
 	SIR& SIR::operator=(char *value)
 	{
 		int i = 0;
 		
 		while( value[i] != 0 ) 
 		{
 			this->value[i] = value[i];
 			i++;
 		}
 		
 		this->value[i] = '\0';	
 		
 		return *this;
 	}
 	
 	// STRCAT (OBJ)
 	void SIR::operator+(SIR&sir)
 	{
 		int sir1, sir2;
 		
 		SIR x,y;
 		
 		x = this->value;
 		y = sir;
 		
 		sir1 = !x;
 		sir2 = !y;	
 		
 		if ( ( sir1 + sir2 ) < 256 )
 		{
 			cout<<" Concatinarea s-a realizat "<<endl;
 			{
 				for (int i=0; i<sir2; i ++)
 				{
 					this->value[sir1+i] = sir.value[i];
			 	}
	 		} 
	 		
	 		this->value[sir1+sir2] = 0;
	 		
	 		cout<<"    ";
	 		
	 		for (int j=0; j<sir1+sir2; j++)
 			{
 				cout<<this->value[j];					
	 		}	 	
	 		
 		}
		
 		else cout<<" Concatinarea nu este posibila"<<endl;
 	}
 	

 	// STRCAT (CHAR)
 	void SIR::operator+(char *value)
 	{		
 		int sir1, sir2;
 		
 		SIR x,y;
 		
 		x = this->value;
 		y = value;
 		
 		sir1 = !x;
 		sir2 = !y;
		 							
 		if ( ( sir1 + sir2 ) < 256 )
 		{
 			cout<<" Concatinarea s-a realizat "<<endl;
 			{
 				for (int i=0; i<sir2; i++)
 				{
 					this->value[sir1+i] = value[i];
 					
			 	}
			
	 		} 
	 		
	 		this->value[sir1+sir2] = 0;
	 		
	 		cout<<"    ";
	 		
	 		for (int j=0; j<sir1+sir2; j++)
 			{
 				cout<<this->value[j];					
	 		}
		
 		}
		
 		else cout<<" Concatinarea nu este posibila"<<endl;				
 	}
 	
 	
 	// STRCMP (OBJ)
 	bool SIR::operator >(SIR&sir)
 	{
 		int sir1, sir2;
 		
 		SIR x,y;
 		
 		x = this->value;
 		y = sir.value;
 		
 		sir1 = !x;
 		sir2 = !y;
 		
 		if ( sir1 == sir2 )
 		{
 	 		cout<<" Compararea s-a realizat "<<endl;
	 		
	 		for (int i=0; i<sir1; i++)
	 		if ( this->value[i] != sir.value[i] ) { cout<<"    Sirurile nu sunt egale"<<endl; return 0; }
			 
	 		{cout<<"    Sirurile sunt egale"<<endl; return 1;}		
 		}
		
 		else cout<<"    Compararea nu este posibila";
 		
 		return 0;
 	}
 	
 	// STRCMP (CHAR)
 	bool SIR::operator >(char *value)
 	{
 		int sir1, sir2;
 		
 		SIR x,y;
 		
 		x = this->value;
 		y = value;
 		
 		sir1 = !x;
 		sir2 = !y;
 		
 		if ( sir1 == sir2 )
 		{
 	 		cout<<" Compararea s-a realizat "<<endl;
	 		
	 		for (int i=0; i<sir1; i++)
	 		if ( this->value[i] != value[i] ) { cout<<" Sirurile nu sunt egale"<<endl; return 0; }	 
			 
	 		{ cout<<"    Sirurile sunt egale"<<endl; return 1; }
 		}
		
 		else cout<<"    Compararea nu este posibila";
 		
 		return 0;
 	}
 	
 	// STRCHR (CHAR)
 	bool SIR::operator[](char x) 	// se poate si char *x
 	{
 		int sir1;
 		
 		SIR z;
 		
 		z = this->value;
 		
 		sir1 = !z;
 		
 		for ( int i=0; i < sir1; i++ ) 
		
	 	if 	( this->value[i] == x ) { cout<<"    Sirul contine simbolul indicat"; return 1; }
		 	
 		{ cout<<"    Sirul nu contine simbolul indicat"; return 0; }
 	}

 	// STRCHR (CHAR)
 	bool SIR::operator[](SIR&chr) 	// se poate si char *x
 	{
 		int sir1;
 		
 		SIR z;
 		
 		z = this->value;
 		
 		sir1 = !z;
 		
 		for ( int i=0; i < sir1; i++ ) 
	
	 	if 	( this->value[i] == *chr.value ) { cout<<"    Sirul contine simbolul indicat"; return 1; }
		 	
 		{ cout<<"    Sirul nu contine simbolul indicat"; return 0; }
 	}
 	
 	
 	// STRSTR (OBJ)
 	bool SIR::operator()(SIR&sir) 	
 	{
 		int i=0, j=0, n;
 		
 		SIR x;
 		
 		x = sir.value;
 		n = !x;
 		
 		while( this->value[i] != 0 )
 		{
		 
 			if ( this->value[i] == sir.value[j] ) 
	 		{
		 		if( j == n-1 ) { cout<<"    Sirul contine sirul indicat"; return 1;}
				 
		 		j++;
	 		}
	 		
 			else 
	 		{
	 			if ( j > 0 ) i--;
			 	j = 0;
		 	}
 			
 			i++;
		 
 		}
 		
 		{ cout<<"    Sirul nu contine sirul indicat"; return 0; }
 	}
 	
 	
 	// STRSTR (CHAR)
 	bool SIR::operator()(char *value) 	
 	{
 		int i=0, j=0, n;
 		
 		SIR x;
 		
 		x = value;
 		n = !x;
 		
 		while( this->value[i] != 0 )
 		{
		 
 			if ( this->value[i] == value[j] ) 
	 		{
		 		if( j == n-1 ) { cout<<"    Sirul contine sirul indicat"; return 1;}
				 
		 		j++;
	 		}
	 		
 			else 
	 		{
	 			if ( j > 0 ) i--;
			 	j = 0;
		 	}
 			
 			i++;
		 
 		}
 		
 		{ cout<<"    Sirul nu contine sirul indicat"; return 0; }
 	}
 	
 	int main()
 	{
 		srand(time(0));   
 			         		              	
 		SIR a,b;
 		
 		cout<<"\n 1)";
 		
 		cout<<" DATI A = ";
 		cin>>a;
 		
 		cout<<"    STRLEN A = "<<!a<<endl;
 		
 		cout<<" 2)";
 		
 		b=a;	
 		b="STEP2022";
 		
 		cout<<" B = "<<b<<endl;
 		
 		cout<<" 3)";
 		a+"step";
 		cout<<endl;
 		
 		cout<<"   ";
 		a+b;
 		cout<<endl;
 		
 		cout<<" 4)";
 	 	a > "hellostepSTEP2022";
 		a > b;
 		cout<<endl;
 		
 		cout<<" 5)";
 		cout<<" A = "<<a<<endl;
 		a['e'];		
 		cout<<endl;
 		
 		SIR c;
 		c = "2";
 		a[c];
 		cout<<endl;
 		
 		cout<<" 6)";
 		cout<<" B = "<<b<<endl;
 		b("STEP");
 		cout<<endl;
 		
 		SIR d;
 		d = "xxx";
 		a(d);
 		cout<<endl;
 		
 		
     	
     	return 0;   
 	}	
