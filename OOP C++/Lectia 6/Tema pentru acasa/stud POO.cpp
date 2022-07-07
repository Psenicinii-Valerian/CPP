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
   	
   	class stud
 	{
 		int value;
 		double med;
 		double valueD;
 		char nume[256];

 		public:
					
	 	stud(int value=NULL) : value(value) {}
 		stud(const stud&Obj) {  this->value = Obj.value; }
 		
 		~stud(){ }			
				
		inline void setVALUE0();								
	 	inline void setVALUE1( char* );
 		inline void setVALUE2();  
 		inline void setVALUE3(int value);
 		inline void setNAME();
 		inline void summ( int );
 		inline void division( int, int );
 	
 	    inline const double getVALUED()const{ return this->valueD; }
 		inline const int getVALUE()const{ return this->value; }
 		inline char* getSIR(){  return this->nume; }
 		
 	};
 	
 	void stud::setVALUE0()
 	{
		cin>>this->value;	
 	}
	
 	void stud::setVALUE1(char *message)
 	{
 		cout<<message;
		cin>>this->value;	
 	}
 	
 	void stud::setVALUE2()
 	{
 		this->value = rand()%150-50;	
 	}
 		
 	void stud::setVALUE3(int value)
 	{
 		this->value = value;	
 	} 	
 	
 	void stud::setNAME()
 	{
		cin>>this->nume;	
 	}
 	
 	void stud::summ (int x) { this->value += x;} 
 	
 	void stud::division (int x, int y) { this->valueD = double(x)/y; } 
 	
 	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 	
 	int main()
 	{
 		srand(time(0));                         
     	    	
     	stud *name[256], *varsta[100], *nota[100][100], *media[100], *m[100], suma, xxx, n;
     	
     	cout<<endl;
     	n.setVALUE1(" Enter numarul de studenti = ");
     	cout<<endl;

	 	cout<<"------------------------------------------------------INSERT STUDENT----------------------------------------------------"<<endl;
 		
 		for(int i=0; i < n.getVALUE() ; i++)
 		{	
 			xxx.setVALUE3(0);
 			suma.setVALUE3(0);
 			
 			name[i] = new stud;
 			varsta[i] = new stud;
 			m[i] = new stud;	
 			media[i] = new stud;
 			
 			cout<<" Dati nume student["<<i+1<<"] :: "; 			
 			name[i]->setNAME();
 			
 			cout<<" Dati varsta student["<<i+1<<"] :: "; 
		 	varsta[i]->setVALUE0();
		 	
		 	cout<<" Enter numarul de note a studentului["<<i+1<<"] :: ";
		 	m[i]->setVALUE0();
		 	
		 	for ( int j=0 ; j < m[i]->getVALUE(); j++)
		 	{
		 		nota[i][j] = new stud;
		 		cout<<" Dati nota ["<<j+1<<"] = "; 
		 		nota[i][j]->setVALUE0();
		 		suma.summ( nota[i][j]->getVALUE() );
		 		xxx.summ(1); 		
	 		}

	 		media[i]->division( suma.getVALUE(), xxx.getVALUE() );
			
		 	cout<<endl;
 		}
 		
 		cout<<endl;
 		
 		cout<<"-------------------------------------------------------SHOW STUDENT-----------------------------------------------------"<<endl<<endl;
		 
	 	for(int i=0; i < n.getVALUE() ; i++)
 		{			
 			cout<<" NUME STUDENT["<<i+1<<"] = "<<name[i]->getSIR()<<endl;
 			cout<<" VARSTA STUDENT["<<i+1<<"] = "<<varsta[i]->getVALUE()<<endl;	
 			
		 	for( int j=0 ; j < m[i]->getVALUE(); j++ )	 	
		 	{
		 		cout<<" STUDENT["<<i+1<<"] NOTA["<<j+1<<"] = "<<nota[i][j]->getVALUE()<<endl;	
		 	}
		 	cout<<" MEDIA STUDENT["<<i+1<<"] = "<<media[i]->getVALUED()<<endl;
 			
 			cout<<endl;
 		}
 		
 		for ( int i=0; i < n.getVALUE(); i++ ) delete name[i];
 		for ( int i=0; i < n.getVALUE(); i++ ) delete varsta[i];
 		for ( int i=0; i < n.getVALUE(); i++ ) delete media[i];
 		
 		for ( int i=0; i < n.getVALUE(); i++ )
 		{
 			for ( int j=0; j < m[i]->getVALUE(); j++)
 			delete nota[i][j];
		}
		
 		cout<<" sizeof(stud) = "<<sizeof(stud)<<endl; //280
 		
     	return 0;   
    }
