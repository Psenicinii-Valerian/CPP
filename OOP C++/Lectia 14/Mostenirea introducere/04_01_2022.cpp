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
 		public:
 			
 		A1() { cout<<" constructor clasa A1"<<endl;}
	 	~A1() { cout<<" destructor clasa A1"<<endl;}
 		
 		void fA1(){ cout<<" fA1()"<<endl; }
		
 	};
 	
 	class A2 : public A1
 	{
 		int a2;
 		
 		public:
 			
 		A2(int a2=NULL) : a2(a2) { cout<<" constructor clasa A2"<<endl;}
	 	~A2() { cout<<" destructor clasa A2"<<endl;}
 		
 		void fA2(){ cout<<" fA2()"<<endl; }
		
 	};
	
 	class A : public A2
 	{
 		int a;
 		
 		public:
 			
 		A(int a=NULL) : a(a) { cout<<" constructor clasa A"<<endl;}
 		A(int a, int a2) : a(a), A2(a2) { cout<<" constructor clasa A"<<endl;}
	 	~A() { cout<<" destructor clasa A"<<endl;}
 		
 		void fA(){ cout<<" fA()"<<endl; }
		
 	};
 	
 	
 	class B : public A
 	{
 		int b;
 		
 		public:
 		B(int b=NULL, int a=NULL) : b(b), A(a) { cout<<" constructor clasa B"<<endl; }
	 	B(int b, int a, int a2) : b(b), A(a,a2) { cout<<" constructor clasa B"<<endl; } 
		 		 
	 	~B() { cout<<" destructor clasa B"<<endl; fA();}
	 	void fB(){ cout<<" fB()"<<endl; }
 		
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
		
 	int main()
 	{
 		
 		B x; 
 		
 		x.fA1();
 		x.fA2();
 		x.fA();
 		x.fB();
 	
 		
 		/*
 		cout<<endl;
 		
 		stud S("Jora Cardan ", 23, true, 7.77, "LPS2115ro");
 		
 		cout<<" Nume :: "<<S.getNUME()<<endl;
 		cout<<" Varsta :: "<<S.getANI()<<endl;
 		cout<<" Genul :: "<<( S.getGEN() ? "Barbat" : "Femeie" )<<endl;
 		cout<<" Media :: "<<S.getMEDIA()<<endl;
 		cout<<" Grupa :: "<<S.getGRUPA()<<endl;
 		*/
 		
 		A2 x2;
 		
 		x2.fA1();
 		x2.fA2();
 		
 		cout<<"\n yyyyyyyyyyyyyyyyy\n"<<endl;
 		
 		B y(1,2,3);
 		
 		cout<<"\n wwwwwwwwwwwwwwwww\n "<<endl;
 		B w(1,2);
 		
	
     	return 0;   
 	}	
