 	#include <iostream>
 	#include <iomanip>
 	
 	#include <string>
 	#include <cstring>
 	
 	using namespace std;
 	
 	/* 
 		****************************************PROGRAMAREA ORIENTATA OBIECT*****************************************
 		
 	----------------------------------------------------MOSTENIREA-------------------------------------------------------
 	
 	Mostenirea este un proces care transmite proprietatile si metodele de la o clasa de baza unei clase derivate
 	
 	clasa de baza - clasa existenta din care preluam metodele si proprietatile
 	clasa derivata - clasa noua care primeste proprietatile si metodele din clasa de baza
 	
 	Mostenirea nu permite sa accesam constructorii si destructorii pemtru ca ei poarta numele clasei
 	
 	In momentul crearii clasei derivate se executa intii constructorii clasei/claselor de baza
 	Destructorii se acceseaza invers
 	
 	Mostenirea se adauga dupa :
 	
 	Nume_clasa derivata : tip_mostenire nume_clasa_de_baza	
 	class B{}
 	class D : public B
 	{}
 	
 	*/ 
 	
 	
   	
   	class A1
 	{
 		int a1, a11;
 		
 		public:
 			
 		A1(int a1=NULL, int a11=NULL) : a1(a1), a11(a11) { cout<<" constructor clasa A1"<<endl;}
	 	~A1() { cout<<" destructor clasa A1"<<endl; fA1(); }
 		
 		void fA1(){ cout<<" Clasa A1 :: fA1()"<<endl; }
 		
 		int getA1() { return this->a1; }
	 	int getA11() { return this->a11; }
		
 	};
 	
 	class A2 : public A1
 	{
 		int a2;
 		
 		public:
 			
 		A2(int a2=NULL) : a2(a2) { cout<<" constructor clasa A2"<<endl;}
 		A2( int a2, int a1, int a11 ) : a2(a2), A1(a1,a11)  { cout<<" constructor clasa A2 + A1"<<endl;}
	 	~A2() { cout<<" destructor clasa A2"<<endl; fA2(); }
 		
 		void fA2(){ cout<<" Clasa A2 :: fA2()"<<endl; }
 		
 		int getA2() { return this->a2; }
		
 	};
	
 	class A : public A2
 	{
 		int a;
 		
 		public:
 			
 		A(int a=NULL) : a(a) { cout<<" constructor clasa A"<<endl;}
 		A(int a, int a1, int a11, int a2) : a(a), A2(a1, a11, a2) { cout<<" constructor clasa A + A1 + A2"<<endl;}
	 	~A() { cout<<" destructor clasa A"<<endl; fA(); }
 		
 		void fA(){ cout<<" Clasa A :: fA()"<<endl; }
 		
 		int getA() { return this->a; }
		
 	};
 	
 	
 	class B : public A
 	{
 		int b;
 		
 		public:
 		B(int b=NULL) : b(b) { cout<<" constructor clasa B"<<endl; }
	 	B( int b, int a, int a2, int a1, int a11 ) : b(b), A(a, a2, a1, a11) { cout<<" constructor clasa B + A + A2 + A1"<<endl; } 
		 		 
	 	~B() { cout<<" destructor clasa B"<<endl; fB();}
	 	void fB(){ cout<<" Clasa B :: fB()"<<endl; }
	 	
	 	int getB() { return this->b; }
 		
 	};
 	
 	
 	class om
 	{
 		string nume;
 		int ani;
 		bool gen;
 		
 		public:
 			
  		om(string nume="\0", int ani=NULL, bool gen=true) : nume(nume), ani(ani), gen(gen){ }
  	   ~om(){ } 
  	   
  	    string getNUME() { return this->nume; }	
	 	int getANI()  { return this->ani; }		  
 		bool getGEN()  { return this->gen ;}	
 	};
 	
	 
 	class stud : public om
 	{
 		string grupa;
 		double media;
 		
 		public:
 		
 		stud( string nume="\0", int ani=NULL, bool gen=true, double media=NULL, string grupa = "\0") : om(nume, ani, gen), media(media), grupa(grupa) { }

 	    ~stud() { }
 	    
 	    double getMEDIA() { return this->media; }	
 		string getGRUPA() { return this->grupa; }	
 	};
		
	
 	class figura
 	{
 		int segm; // numar segmente
 		
 		public:
 		
 		figura ( int segm=NULL ) : segm(segm) {cout<<" constructor clasa figura"<<endl;}
 		
 		~figura() { cout<<" destructor clasa figura"<<endl<<endl; }		
 		
 		int getSEGM() { return this->segm; }

 	};
 	
 	
 	class segment : public figura
 	{
 		int ns; // numar simboluri
 		
 		public:
 			
 		segment ( int ns=NULL ) : ns(ns) {cout<<" constructor clasa segment"<<endl;}
 		segment ( int ns=NULL, int segm=NULL) : ns(ns), figura(segm) {cout<<" constructor clasa segment + figura"<<endl;}
 		
 		~segment() { cout<<" destructor clasa segment"<<endl; }
 		
 		int getNUMAR_SIMBOLURI() { return this->ns; }
 	};
 	
 	
 	class simbol : public segment
 	{
 		char s;
 		
 		public:
 		
 		// simbol ( char s='\0' ) : s(s) { cout<<" constructor clasa simbol"<<endl; } - de ce imi da eroarea "call of overloaded segment() is ambiguous" ???
 		simbol ( char s='\0', int ns=NULL, int segm=NULL ) : s(s), segment(ns, segm) {cout<<" constructor clasa simbol + segment + figura"<<endl;}
 		
 		~simbol() { cout<<" destructor clasa simbol"<<endl; }
 		
 		void figura( char s, int ns, int segm )
 		{
	 		for ( int i=0; i<segm; i++)
	 		{
	 			cout<<' ';
			 
	 				for ( int j=0; j<ns; j++) 	
		 			{	
		 				if ( i!=0 && j!=0 && i!=segm-1  ) cout<<' ';
		 				if ( i==0 || j==0 || ns-j==2 || i==segm-1  ) cout<<s;
		 			}	
		 		
		 		cout<<endl;	
						 		
			 	// stiu ca pentru patrat nu imi trebuie 3 parametri dar 2 (s, ns), dar am facut pur si simplu ca practica
				// am utilizat segm doar pentru ca figura mea sa semene in dev ca patrat		
		 	}
			
		 	//cout<<' ';
	 		//for ( int k=0; ns-k>0; k++ ) cout<<s;

	 	}
 		char getSIMBOL() { return this->s; }
 		
 	};
 		
	
 	int main()
 	{
 		/*
 		B x; 
 		
 		x.fA1();
 		x.fA2();
 		x.fA();
 		x.fB();
 	
	 	
 		cout<<endl;
 		
 		stud S("Jora Cardan ", 23, true, 7.77, "LPS2115ro");
 		
 		cout<<" Nume :: "<<S.getNUME()<<endl;
 		cout<<" Varsta :: "<<S.getANI()<<endl;
 		cout<<" Genul :: "<<( S.getGEN() ? "Barbat" : "Femeie" )<<endl;
 		cout<<" Media :: "<<S.getMEDIA()<<endl;
 		cout<<" Grupa :: "<<S.getGRUPA()<<endl;
 		
 		
 		A2 x2;
 		
 		x2.fA1();
 		x2.fA2();
 		
 		cout<<"\n yyyyyyyyyyyyyyyyy\n"<<endl;
 		
 		B y(1,2,3);
 		
 		cout<<"\n wwwwwwwwwwwwwwwww\n "<<endl;
 		B w(1,2);
 		*/
 		
 		
 		cout<<"\n wwwwwwwwwww :: "<<endl<<endl;
 		
 		B w(1,3,5,7,9);
 		
 		cout<<endl;
 		cout<<" b = "<<w.getB()<<endl;
 		cout<<" a = "<<w.getA()<<endl;
 		cout<<" a2 = "<<w.getA2()<<endl;
 		cout<<" a1 = "<<w.getA1()<<endl;
 		cout<<" a11 = "<<w.getA11()<<endl;
 		
 		cout<<"\n ppppppppppp :: "<<endl<<endl;
 		
 		simbol p('*', 8, 4);
 		cout<<endl;
 		cout<<" Simbolul este :: "<<p.getSIMBOL()<<endl;
 		cout<<" Numarul de simboluri intr-un segment este :: "<<p.getNUMAR_SIMBOLURI()<<endl;
 		cout<<" Numarul de segmente in figura este :: "<<p.getSEGM()<<endl<<endl;

 		p.figura(p.getSIMBOL(), p.getNUMAR_SIMBOLURI(), p.getSEGM() );
 		
 		cout<<endl;
	
     	return 0;   
 	}	
