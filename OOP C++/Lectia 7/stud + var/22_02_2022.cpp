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
 		var(const var&Obj) { cout<<" XX "<<endl; this->value = Obj.value ; }
 		
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
	 	int ani;	
	 	
	 	public:
    		
   		   		
 	};
   	
   	
   	class stud
 	{	
	 	char nume[256];
 		var ani;
 		double medie;	
 		DATA data;	

 		public:
 			
 		stud(int ani) : ani(ani), medie(NULL) { this->nume[0] = '\0'; }
 		
 		stud(const var&ani):ani(ani), medie(NULL) { this->nume[0] = '\0'; }  // &ani primeste adresa XXX
		 		
 		stud(double medie) : medie(medie), ani(NULL) { this->nume[0] = '\0'; }	
		  					
	 	stud( char nume[]="\0", int ani=NULL, double medie=NULL) : ani(ani), medie(medie) 
	 	{
		 	strcpy(this->nume,nume);		 	
	 	}
	 	
	 	stud( const stud&OBJ) {}
	 	
	 	~stud() {}
	 	
	 	inline void setNUME( char* );	 		 	
	 	inline void setANI( char* );		 	
	 	inline void setMEDIE( char* );	

	 	
	 	inline const char* getNUME()const{ return this->nume; }
	 	inline const int getANI()const{ return this->ani.getVALUE()	; }
	 	inline const double getMEDIE()const{ return this->medie; }		
 	};
 	
 	void stud::setNUME( char *mess)
	 	{
	 		cout<<mess;
	 		cin>>this->nume;
	 	}
	 	
 	void stud::setANI( char *mess)
	 	{
	 		this->ani.setVALUE1(mess);
	 	}
	 	
	void stud::setMEDIE( char *mess)
	 	{
	 		cout<<mess;
	 		cin>>this->medie;
	 	}
 	
 	
 	int main()
 	{
 		srand(time(0));                         
     	
 		//clasa student    		
 			
 		var X=123;
 		var XXX = X;
 		stud XX=XXX; // &ani primeste adresa obiectului XXX
 		
 		cout<<" XX.ani = "<<XX.getANI()<<endl;
 		
 		stud YY = 123;
 		stud Y=123.321;
 		stud Z="asdf";
 		stud ZZ("asdfasdf", 1234);
 		stud ZZZ("asdasd", 1234, 123.321);
 		 		
 		stud S[10];
 		/*
 		S[0].setNUME(" Enter nume = ");
 		S[0].setANI(" Enter ani = ");
 		S[0].setMEDIE(" Enter medie = ");
 		
 		cout<<" NUME = "<<S[0].getNUME()<<endl;
 		cout<<" ANI = "<<S[0].getANI()<<endl;
 		cout<<" MEDIE = "<<S[0].getMEDIE()<<endl;
 		*/
 		
 		var n = rand()%10;
 		
	  	for(int i=0; i<n.getVALUE(); i++)
     	{	
		  	cout<<"\n Student["<<i+1<<"] din "<<n.getVALUE()<<endl;
   		 	S[i].setNUME(" Enter nume = ");
   	  		S[i].setANI(" Enter ani = ");
  	   		S[i].setMEDIE(" Enter medie = ");
 		} 
 		
 		
     	for(int i=0; i<n.getVALUE(); i++)
     	{
     		cout<<"\n Student["<<i+1<<"] din "<<n.getVALUE()<<endl;
     		cout<<" NUME = "<<S[i].getNUME()<<endl;
   			cout<<" ANI = "<<S[i].getANI()<<endl;
   		 	cout<<" MEDIE = "<<S[i].getMEDIE()<<endl;
 		}
 		
 		
     	return 0;   
    }
