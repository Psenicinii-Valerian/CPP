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
	 	
 	*/
   	
   	class var
 	{    
 		int value; 

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
   	};
   	
   	
   	class DATA
   	{
   		int zi;
	 	int luna;
	 	int anul;	
	 	
	 	public:
	 							
	 	DATA (int zi=NULL) : zi(zi), luna(NULL), anul(NULL) {} // ??? CUM SA DAU VALORI PRESTABILITE LA luna, anul DACA IMI DA OVERLOAD FUNCTION DACA INCERC SA FAC CONSTRUCTOR PENTRU LUNA, ANUL
	 	DATA(const DATA&Obj) { this->zi = Obj.zi ; } 
	 	
	 	~DATA() {}
    	
     	inline void setZI(char*);
 		
 		inline void setLUNA(char*);
 		
 		inline void setANUL(char*);
 			
   		inline const int getZI()const{ return this->zi; }
	 	inline const int getLUNA()const{ return this->luna; }
	 	inline const int getANUL()const{ return this->anul; }
 	};
 	
 	void DATA::setZI(char *message ) 
 	{
        cout << message;
        cin>>this->zi;
 	}
 	
 	void DATA::setLUNA(char *message ) 
 	{
        cout << message;
        cin>>this->luna;
 	}

 	void DATA::setANUL(char *message ) 
 	{
        cout << message;
        cin>>this->anul;
 	}
 	
 	
 	class MEDIA
 	{
 		double medie;
 		
 		public:
 		
 		MEDIA (double medie=NULL) : medie(medie) {}
 		MEDIA (const MEDIA&Obj) { cout<<" XXX "<<endl; this->medie = Obj.medie ; }
 		
 		~MEDIA() {}
 		
 		inline void setMEDIA(char*);
 		
 		inline const double getMEDIA()const{ return this->medie; }		
	};

   	void MEDIA::setMEDIA(char *message ) 
 	{
        cout << message;
        cin>>this->medie;
 	}
 	
 	
 	class NAME
 	{
 		char nume[256];	
 		
 		public:
 		
 		NAME (char nume[]="\0") 	
	 	{
		 	strcpy(this->nume,nume);		 	
	 	}
	 	
 		NAME (const NAME&Obj) { this->nume[256] = Obj.nume[256] ; } 
 		
 		inline void setNUME( char* );
		 
		inline const char* getNUME()const{ return this->nume; }	
 	};
 	
 	void NAME::setNUME( char *mess)
 	{
	 	cout<<mess;
	 	cin>>this->nume;
 	}
 	
   	
   	class stud
 	{	
	 	NAME nume[256];		
 		MEDIA medie;	
	 	var ani;
 		DATA zi;
	 	DATA luna;
	 	DATA anul;	

 		public:	
		 		
 		stud(const DATA&zi) : zi(zi), ani(NULL), medie(NULL) { nume[0] = '\0'; }	
 		
 		stud(const MEDIA&medie) : medie(medie), ani(NULL), zi(NULL) { nume[0] = '\0'; }		
	
 		stud(int ani) : ani(ani), medie(NULL), zi(NULL) { nume[0] = '\0'; }
 				
 		//stud(const var&ani):ani(ani), medie(NULL) { this->nume[0] = '\0'; }  // &ani primeste adresa XXX
		 				  					
	 	stud( char nume[]="\0", int zi=NULL, int ani=NULL,  double medie=NULL) : zi(zi), ani(ani), medie(medie)
	 	{
		 	strcpy(nume,nume);		 	
	 	}
	 	
	 	//stud( const stud&OBJ) {}
	 	
	 	~stud() {}
	 		 		 	
	 	inline void setANI( char* );		 	
	 	
	 	inline const int getANI()const{ return this->ani.getVALUE()	; }		
 	};
 		 	
 	void stud::setANI( char *mess)
 	{
	 	this->ani.setVALUE1(mess);
 	}
	 		
 	
 	int main()
 	{
 		srand(time(0));                         
     	
 		//clasa student   
 		
 		MEDIA Y = 7.89;
 		var X = 33;		
 		NAME HELLO = "DSAdsada";
 		stud ZZZ("asdasd", 111, 1234, 333.456);

 		stud S[10]; 
 		DATA D[10];
 		MEDIA M[10];
 		NAME N[10];
 		
 		var n = rand()%5+2;
 		
 		cout<<"\n------------------------------------------------------INSERT STUDENT----------------------------------------------------"<<endl;
 		
	  	for(int i=0; i<n.getVALUE(); i++)
     	{	
		  	cout<<" Student["<<i+1<<"] din "<<n.getVALUE()<<endl;
		 	D[i].setZI(" Enter ziua :: ");
		 	D[i].setLUNA(" Enter luna :: ");
		 	D[i].setANUL(" Enter anul :: ");
   		 	N[i].setNUME(" Enter nume = ");
   	  		S[i].setANI(" Enter ani = ");
  	   		M[i].setMEDIA(" Enter medie = ");
  	   		cout<<endl;
 		} 
 		
 		cout<<"\n-------------------------------------------------------SHOW STUDENT-----------------------------------------------------"<<endl;
 		
     	for(int i=0; i<n.getVALUE(); i++)
     	{
     		cout<<" Student["<<i+1<<"] din "<<n.getVALUE()<<endl;
     		cout<<" DATA :: "<<D[i].getZI()<<"."<<D[i].getLUNA()<<"."<<D[i].getANUL()<<endl;
     		cout<<" NUME = "<<N[i].getNUME()<<endl;
   			cout<<" ANI = "<<S[i].getANI()<<endl;
   		 	cout<<" MEDIE = "<<M[i].getMEDIA()<<endl;
   		 	cout<<endl;
 		}
 		
     	return 0;   
    }
