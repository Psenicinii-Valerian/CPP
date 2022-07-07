 	#include <iostream>
 	
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
 	
 	--------------------------------------------MOSTENIREA MULTIPLA. OPERATORUL VIRTUAL--------------------------------------------
 	
 	Mostenirea se imparte in 2 grupuri:
 	1) mostenirea simpla - cand o clasa mosteneste o singura clasa
 	2) mostenirea multipla - cand o clasa mosteneste mai multe clase direct
 	
 	Clasele virtuale ne permit sa nu redeclaram memoria unei clase deja declarate (utilizam virtual public)
 	
 	virtual public - la prima apelare operatorul preia informatia din clasa si o utilizeaza, iar la urmatoarele apelari - el
 	nu o preia de la inceput (de la 0), dar o reutilizeaza pe cea existenta deja
 	
 	Daca mostenirea nu este directa, nu vom putea reapela constructorul
 	
 	--------------------------------------------------ZONA DE PROTECTIE PROTECTED--------------------------------------------------
 	
 	protected - zona de protectie privata comuna in toate clasele mostenite
 	
 	*/ 

 	
 	class A
 	{		
 		int a;
 		
 		public:
 			
 		A() { cout<<" constructor clasa A"<<endl;}
 		
 		A(int a) : a(a) {}
 		
	 	~A() { cout<<" destructor clasa A"<<endl; fA(); }
		  		
 		void fA(){ cout<<" Clasa A :: fA()"<<endl; }
 		
 		protected:
 			
 		int x4;
 	};
 	
 	
 	class B : virtual public A
 	{		
 		int b;
 		
 		public:
 			
 		B() { cout<<" constructor clasa B"<<endl;}
 		
 		B(int b) : b(b) {}
 		
 		B(int b, int a) : b(b), A(a) { cout<<" constructor clasa B+A"<<endl; }
 		
	 	~B() { cout<<" destructor clasa B"<<endl; fB(); }
		  		
 		void fB(){ cout<<" Clasa B :: fB()"<<endl; }
 		
 		protected:
 			
 		int x3;
 	};
 	
 	
 	class C : virtual public A
 	{		
 		int c;
 		
 		public:
 			
 		C() { cout<<" constructor clasa C"<<endl;}
 		
 		C(int c) : c(c) { }
 		
 		C(int c, int a) : c(c), A(a) { cout<<" constructor clasa C+A"<<endl; }
 		
	 	~C() { cout<<" destructor clasa C"<<endl; fC(); }
		  		
 		void fC(){ cout<<" Clasa C :: fC()"<<endl; }
 		
 		protected:
 			
 		int x2;
 	};
 	
 	
 	class D : public C, public B //, ..... , .....
 	{		
 		int d;
 		
	 	public:
 			
 		D() { cout<<" constructor clasa D"<<endl;}
 		
 		D(int d, int c, int b, int a) : d(d), C(c,a), B(b) { cout<<" constructor clasa D+C+A+B"<<endl; }
 			
	 	~D() { cout<<" destructor clasa D"<<endl; fD(); }
		  		
 		void fD()
 		{  		 
	 		cout<<" Clasa D :: fD()"<<endl; 
			 
 			this->x4=777; 
 			this->x3=888; 
 			this->x2=999; 
 			this->x1=1000; 
 			
 			cout<<" x1 = "<<this->x1<<endl;
 			cout<<" x2 = "<<this->x2<<endl;
 			cout<<" x3 = "<<this->x3<<endl;
 			cout<<" x4 = "<<this->x4<<endl;
	 	}
 				
 		protected:
 			
 		int x1;
 		
 	};
 	
 	//   -> C -> virtual A
 	// D
 	//   -> B -> virtual A
 	
 	class E : virtual public A
 	{
 		public:
			
	 	E() { cout<<" constructor clasa E"<<endl;}
 		~E() { cout<<" destructor clasa E"<<endl;}
 	};
 	

 	class F : public C, public B
 	{
		public:
			
	 	F() { cout<<" constructor clasa F"<<endl;}
 		~F() { cout<<" destructor clasa F"<<endl;}
 	};
 	
 	
 	class G : public C, public E
 	{
		public:
			
	 	G() { cout<<" constructor clasa G"<<endl;}
 		~G() { cout<<" destructor clasa G"<<endl;}
 	};
	
 	int main()
 	{
		
 		D x;
 		
 		x.fA();
 		
 		cout<<"\n\n CLASA F :: "<<endl<<endl;
 		
 		F y;
 		
 		y.fA();
 		
 		cout<<"\n\n CLASA G :: "<<endl<<endl;
 		
 		G z;
 		
 		z.fA();
 		
 		cout<<endl<<endl;
		

	 	
		
     	return 0;   
 	}	
