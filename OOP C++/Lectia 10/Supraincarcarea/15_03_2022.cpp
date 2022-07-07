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

	 	//friend int ABC(const var&, const var&, const var&);
 		friend var& ABC(const var&, const var&, const var&);
 		
 		friend ostream& operator<<(ostream&, var&);
 		friend istream& operator>>(istream&, var&);
 		
 		//friend int operator+(var&, var&);
 		//friend int operator+(var&, int);
 		//friend int operator+(int, var&);
 		
		friend var& operator+(var&, var&);
 	    friend var& operator+(var&, int );
     	friend var& operator+(int, var& );
     	
 		friend var& operator-(var&, var&);   	 	
     	friend var& operator-(var&, int );
     	friend var& operator-(int, var& );
     	
     	friend var& operator*(var&, var&);
     	friend var& operator*(var&, int );
     	friend var& operator*(int, var& );
     	
     	
     	friend double operator+(var&, double );
 		friend double operator+(double, var& );
 		
	 	friend double operator-(var&, double );
 		friend double operator-(double, var& );
 		
 		friend double operator*(var&, double );
     	friend double operator*(double, var& );
     	
     	friend double operator/(var&, int );
 		friend double operator/(int, var& );
	 	friend double operator/(var&, var&);
	 	friend double operator/(var&, double );
 		friend double operator/(double, var& );
	 	
	 	
 		friend var& operator++(var&);  
 		friend var& operator++(var&, int);
 		
 		
 		void operator++() { this->value++; }  
     	void operator++(int) { this->value++; }
		  
     	void operator--() { this->value--; }  
     	void operator--(int) { this->value--; }
     	
 		// ERROR friend void operator=(var&x,var&y);
 		
   		var& operator = (var&y)
      	{
       	 	this->value = y.value; 
         	return *this;
 		}
 		
   		var& operator = (int y)
      	{
        	this->value = y ; 
        	return *this;
   		}
   		
   	};
   	
   	/*
   	int ABC( const var&a, const var&b, const var&c )
 	{
 		return a.value + b.value - c.value;
 	}
 	*/
 	
 	var& ABC( const var&a, const var&b, const var&c )
 	{
 		var X( a.value + b.value - c.value );
 		return X;
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
 	
 	
 	// var + var
 	var& operator+ ( var&x, var&y )
 	{
 		var *R = new var(x.value + y.value);
 		return *R;
 	}
 	
 	// var + int
 	var& operator + (var&x,int y)
 	{ 
 		var *X = new var( x.value+y );
 		return *X;
 	}
 		
   	// int + var 
 	var& operator + (int y,var&x)
 	{ 
 		var *X = new var( y+x.value );
 		return *X;
 	}
 	
 	// var + double
  	double operator+(var&x ,double y )
 	{
 		return x.value+(y);
 	}
 		
   	// double + var 
   	double operator+(double y, var&x)
 	{
 		return (y)+x.value;
 	}
 	
 	
 	// var - var
 	var& operator- ( var&x, var&y )
 	{
 		var *Z = new var(x.value - y.value);
 		return *Z;
 	}
 	
 	// var - int 
   	var& operator - (var&x,int y)
 	{ 
 		var *X = new var( x.value-y  );
 		return *X;
   	}
   	
   	// int - var
   	var& operator - (int y, var&x)
 	{ 
 		var *X = new var( y-x.value  );
 		return *X;
   	}
 	
 	// var - double
  	double operator - (var&x,double y )
 	{
 		return x.value-(y);
 	}
 		
   	// double - var
   	double operator - (double y,var&x)
 	{ 
 		return (y)-x.value;
 	}
 	
 	
 	// var * var
 	var& operator* ( var&x, var&y )
 	{
 		var *Q = new var(x.value * y.value);
 		return *Q;
 	}
 	
 	// var * int
 	var& operator* ( var&x, int y )
 	{
 		var *Q = new var(x.value * y);
 		return *Q;
 	}
 	
 	// int * var
 	var& operator* ( int y, var&x )
 	{
 		var *Q = new var( y * x.value );
 		return *Q;
 	}
 	
 	// var * double
 	double operator * (var&x, double y)
 	{ 
 		return x.value*(y);
 	}
 	
	// double * var  
 	double operator * (double y, var&x )
 	{ 
 		return (y)*x.value;
 	}
 		
 		
 	// var / var
 	double operator/ ( var&x, var&y )
 	{
 		return x.value/double(y.value);
 	}
 	
 	// var / int
 	double operator/ ( var&x, int y )
 	{
 		return x.value/double(y);
 	}
 	
 	// int / var
 	double operator/ ( int y, var&x )
 	{
 		return y/double(x.value);
 	}
 	
 	// var / double
 	double operator/ ( var&x, double y )
 	{
 		return double(x.value)/y;
 	}
 	
 	// double / var  
 	double operator/ ( double y, var&x )
 	{
 		return y/double(x.value);
 	}
 	
 	
 	// ++a  
 	var& operator++( var&x )
 	{  
 		++x.value;
 		return x;
 	}
 	
  	// a++   
   	var& operator++( var&x, int INT )
 	{ 
 		x.value++;
 		return x;
 	}
	
 	
 	int main()
 	{
 		srand(time(0));   
		                           	
     	var a,b,c;
     	
     	cout<<endl;
     	
     	/*
     	cout<<" Enter a = ";
     	cin>>a;
     	
     	cout<<" Enter b = ";
     	cin>>b;
     	
     	cout<<" Enter c = ";
     	cin>>c;
     			
     	cout<<endl; 
     	
	 	cout<<" a+b+c/3 = "<<a+b+c/3<<endl;
	 	
	 	cout<<" ++a++ = "<<++a++<<endl;
 		*/
		
		     
  		cout<<" Enter a = ";
 		cin>>a;
     
   		--a;
	 	a--;
	 	
   		cout<<" a = "<<a<<endl;
   		
 		b=a; 
 		cout<<" (b=a)+a "<<(b=a)+a<<endl; // b+a	f1()+f2() 
 		
 		b=123;
 		cout<<" b = "<<(b=123)<<endl;  
 		
 		cout<<" a+10/b-2*a+a-3+b/4 = "<<a+10/b-2*a+a-3+b/4<<endl;
  
     	return 0;   
 	}	
