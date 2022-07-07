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
	 							
	 	DATA (int zi=NULL, int luna=NULL, int anul=NULL) : zi(zi), luna(luna), anul(anul) {} 
	 	DATA (const DATA&Obj) {  this->zi = Obj.zi; this->luna = Obj.luna; this->anul = Obj.anul; } 
	 	
	 	~DATA() {}
    	
     	inline void setDAY(char*);
     	inline void setMONTH(char*);
     	inline void setYEAR(char*);
    	
   		inline const int getDAY()const{ return this->zi; }
	 	inline const int getMONTH()const{ return this->luna; }
	 	inline const int getYEAR()const{ return this->anul; }
 	};
 	
 	void DATA::setDAY(char *message)
 	{
		cout << message;
        cin>>this->zi ;
 	} 
 	
 	void DATA::setMONTH(char *message)
 	{
		cout << message;
        cin>>this->luna ;
 	} 
 	
 	void DATA::setYEAR(char *message)
 	{
		cout << message;
        cin>>this->anul ;
 	} 
 	
 
 	class MEDIA
 	{
 		double medie;
 		
 		public:
 		
 		MEDIA (double medie=NULL) : medie(medie) {}
 		MEDIA (const MEDIA&Obj) { this->medie = Obj.medie ; }
 		
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
	 	
 		//NAME (const NAME&Obj) { this->nume[256] = Obj.nume[256] ; } 
 		
 		~NAME() {}
 		
 		inline void setNAME( char* );
		 
	 	inline const char* getNAME()const{ return this->nume; }	
 	};
 	
 	void NAME::setNAME( char *mess)
 	{
	 	cout<<mess;
	 	cin>>this->nume;
 	}
 	
   	
   	class stud
 	{	
	 	NAME nume;		
 		MEDIA medie;	
	 	var ani;
 		DATA data;	

 		public:	
 		
	 	stud (NAME nume ="\0", DATA data=NULL, var ani=NULL, MEDIA medie=NULL) :
  		nume(nume), data(data), ani(ani), medie(medie) {} 		
  		
 		stud(const DATA&data) : data(data), ani(NULL), medie(NULL) { nume = '\0'; }	
 		
 		stud(const MEDIA&medie) : medie(medie), ani(NULL), data(NULL) { nume = '\0'; }		
	
 		stud(var ani) : ani(ani), medie(NULL), data(NULL) { nume = '\0'; }
 				
 		//stud(const var&ani):ani(ani), medie(NULL) { this->nume[0] = '\0'; }  // &ani primeste adresa XXX
	
	 	//stud( const stud&OBJ) {}
	 	
	 	~stud() {}
	 		 		 	
	 	//seteri			    	
	 	inline void setZI(char*);	
 		inline void setLUNA(char*);	
 		inline void setANUL(char*); 
		inline void setNUME(char*); 		
 		inline void setANI(char*);		
 		inline void setMED(char*);

	 	//geteri 	
	 	inline const int getANI()const{ return this->ani.getVALUE(); }	
	 	inline const int getZI()const{ return this->data.getDAY(); }	
 		inline const int getLUNA()const{ return this->data.getMONTH(); }
	 	inline const char* getNUME()const{ return this->nume.getNAME(); }			
 		inline const int getANUL()const{ return this->data.getYEAR(); }			
 		inline const double getMED()const{ return this->medie.getMEDIA(); }	
 			
 	};
 		
	void stud::setZI( char *mess ) 
 	{
        this->data.setDAY(mess);
 	}
 	
 	void stud::setLUNA( char *mess ) 
 	{
        this->data.setMONTH(mess);
 	}

 	void stud::setANUL( char *mess ) 
 	{
        this->data.setYEAR(mess);
 	}
 	
 	void stud::setNUME( char *mess ) 
 	{
        this->nume.setNAME(mess);
 	}
 		 	
 	void stud::setANI( char *mess ) 
 	{
	 	this->ani.setVALUE1(mess);
 	}
 	
 	void stud::setMED( char *mess )
 	{
	 	this->medie.setMEDIA(mess);
 	}
	 		
 	
 	int main()
 	{
 		srand(time(0));                         
     	
 		//clasa student   
 		
 		MEDIA Y = 7.89;
 		var X = 33;		
 		NAME HELLO = "DSAdsada";
 		
 		DATA Data (11,4,2007);
 		
 		stud ZZZ("Ion", Data, 15, 8.765);
 		
 		cout<<"S.getZI() "<<ZZZ.getZI()<<endl;
 		cout<<"S.getLUNA() "<<ZZZ.getLUNA()<<endl;
 		cout<<"S.getANUL() "<<ZZZ.getANUL()<<endl;
 		cout<<"S.getNUME() "<<ZZZ.getNUME()<<endl;
 		cout<<"S.getANI() "<<ZZZ.getANI()<<endl;
 		cout<<"S.getMED() "<<ZZZ.getMED()<<endl;
 		
 		stud S[10]; 
	
 		var n = rand()%5+2;
 		
 		cout<<"\n------------------------------------------------------INSERT STUDENT----------------------------------------------------"<<endl;
 		
	  	for(int i=0; i<n.getVALUE(); i++)
     	{	
		  	cout<<" Student["<<i+1<<"] din "<<n.getVALUE()<<endl;
		 	S[i].setZI(" Enter ziua :: ");
		 	S[i].setLUNA(" Enter luna :: ");
		 	S[i].setANUL(" Enter anul :: ");
   		 	S[i].setNUME(" Enter nume :: ");
   	  		S[i].setANI(" Enter ani = ");
  	   		S[i].setMED(" Enter media = ");
  	   		cout<<endl;
 		} 
 		
 		cout<<"-------------------------------------------------------SHOW STUDENT-----------------------------------------------------"<<endl;
 		
     	for(int i=0; i<n.getVALUE(); i++)
     	{
     		cout<<" Student["<<i+1<<"] din "<<n.getVALUE()<<endl;
     		cout<<" DATA :: "<<S[i].getZI()<<"."<<S[i].getLUNA()<<"."<<S[i].getANUL()<<endl;
     		cout<<" NUME :: "<<S[i].getNUME()<<endl;
   			cout<<" ANI = "<<S[i].getANI()<<endl;
   		 	cout<<" MEDIA = "<<S[i].getMED()<<endl;
   		 	cout<<endl;
 		}
 		
     	return 0;   
    }
