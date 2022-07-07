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

 	/*
 	
 	class var
   	{     
	 	double valueD;
 		int value;        
 		char sir[256];
 		
 		public:
 			
       	var(int value) : value(value) , valueD(NULL)  {}
       	
 		var(double valueD) 
 		{ 	
		 	cout<<" CONSTRUCTOR supraincarcat double "<<endl;
  			this->valueD = valueD;
  			this->value = NULL; 
  			(this)->sir[0]='\0';
 		}
		 
		   
 		var( char sir[]="\0", int value = NULL, double valueD = NULL )
 		{ 
	 		cout<<" CONSTRUCTOR supraincarcat char , int , double "<<endl; 
 	 		strcpy(this->sir,sir); 
  			this->value = value; 
  			this->valueD = valueD;
 		} 
 		
		 		
	 	var(const var&Obj)
   		{ 
	 		cout<<" CONSTRUCTOR copiere "<<endl; 
   	 		this->value = Obj.value ; 
     	}
          
	 	var(const var&Obj, const var &Obj1, const var&Obj2 )
  		{ 
	 		cout<<" CONSTRUCTOR copiere "<<endl; 
      		this->value = Obj.value + Obj1.value - Obj2.value ; 
     		this->sir[0]='\0'; 
     		this->valueD = NULL;
 		}
 		
 		inline  void setVALUE1(char*); 
 		inline  void setVALUE2();  
 		inline  void setVALUE3(int);  
 		
     	inline const int getVALUE()const{ return this->value; }
     	inline const double getVALUED()const{ return this->valueD; }
     	inline char* getSIR(){  return this->sir; }
     	inline void summ(int x){ this->m1(); this->value+=x; }
     	inline bool paritate(){ return this->value%2==0 ? true : false; }  
     	inline bool interval(int x, int y){ return this->value>=x&&this->value<y ? true : false; }
   	};
   	
 	void var::setVALUE1(char *message ) 
 	{
 		cout << message;
 		cin>>this->value ;
 	}
 	
 	void  var::setVALUE2()  
 	{
	 	this->value = rand()%20;
 	}
 	
 	void  var::setVALUE3(int value)  
 	{
        this->value = value;
  	}
 	 	
 	*/
 	
 	class var
 	{    
 		int value; 

 		public:
 			 
 		var(int value=NULL) : value(value) {}
 		var(const var&Obj) {   this->value = Obj.value ; }
 		
 		~var(){ cout<<" DESTRUCTOR "<<this->value<<endl; }
 		
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
   	
   	
   	
   	
 	int main()
 	{
 		srand(time(0));          
		                
     	/*   	
     	
 		// 1 vector , n   
 		
   		var n=10, v[10];
     	cout<<" sizeof(v) "<<sizeof(v)<<endl;
     	var a=1, b=2, c=1, R(a); 
       	cout<<" a.get() " <<a.getVALUE()<<endl;
       	
   		*/
   		
  		/*  
  		
   		var *p[100]; 
   		
     	p[0] = new var;
     	cout<<" p[0]="<<p[0]->getVALUE()<<endl;
     	
 		p[1] = new var(rand()%10);
 	    cout<<" p[1]="<<p[1]->getVALUE()<<endl;
 	    
 		p[2] = new var(*p[1]);
 		cout<<" p[2]="<<p[2]->getVALUE()<<endl;
 		
	 	*/
	 	
     	var *p[100],n=10; 
     	
     	cout<<"\n SHOW VECTOR :: "<<endl<<endl;
  		for(int i=0; i < n.getVALUE() ; i++) 
  		{
     		p[i] = new var(rand()%10);
      		cout<<" p["<<i<<"]="<<p[i]->getVALUE()<<endl;
     	}
     	
     	cout<<endl;
     	
     	cout<<" DELETE VECTOR :: "<<endl<<endl;
    	for(int i=0; i < n.getVALUE() ; i++)  delete p[i];
    	
    	cout<<endl;
    	
    	cout<<" DELETE n :: "<<endl;
    	//  clasa student
    return 0;   
    }

