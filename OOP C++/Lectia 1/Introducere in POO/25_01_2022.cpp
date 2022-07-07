 	#include <iostream>
 	#include <iostream>
 	
 	using namespace std;
 	
 	/* 
 		****************************************PROGRAMAREA ORIENTATA OBIECT*****************************************
 		
 		POO (Programarea orientata obiect) se bazeaza pe 3 tehnologii fundamentale:
		
 		1) incapsulare;
 		2) mostenire;
 		3) polimorfizm
		
 		1) incapsulare - ne permite sa organizam o structura unica in care se va contine variabile si functii.
 		Variabilele in structura unica se numesc proprietati. Functiile in structura unificata se numesc metode.
 		
 		Variabilele care vor fi declarate de aceste structuri unice se numesc obiect.
 		
 		Pentru a declara o structura unica se utilizeaza instructiunea Class:
		
 		class nume_class
 		{
		 	tip_date proprietate1;
	 		tip_date proprietate2;
		 	tip_date proprietate3;
		 	.....
		 	tip_date proprietateN;
		 	
		 	tip_date metoda1();
		 	tip_date metoda2();
		 	.....
		 	tip_date metodaN();
	 	};
	 		 	
 		2) mostenire - este procesul prin care un obiect primeste proprietatile altui obiect.
 		
 		3) polimorfizm - ne permite sa extindem functional pentru conceptul de mostenire.
 		
 		Corpul clasei ( {...} ) este inaccesibil sub orisicare forma. Exista 3 forme de acces:
 		
 		1) specificatorul de acces public:
 		   public - tot ce s-a definit dupa acest specificator este accesibil obiectelor declarate.
 		   
 		2) specificatorul de acces private:
 		   private - specificator de acces care blocheaza accesul obiectului la proprietatile si metodele
 		   definite dupa acest specificator.
 		
 		3) specificatorul de acces protected:
 		   protected - specificatorul se utilizeaza numai in combinatie cu mostenirea.
 		
 		Numarul de reutilizare (scriere) a specificatorului de acces este nelimitat.
 	*/
 	
 	
 	struct xxx
 	{
 		int e1=123;
 		int e2=321;
 		
 		void fun1(){ cout<<" fun1() e1 = "<<e1<<endl; }
 		void fun2(){ fun1(); cout<<" fun2() e2 = "<<e2<<endl; }
		 
 	}X;
 	
 	
 	/*
 	
 	int main()
 	{
 		xxx A, B;
 		
 		//A.fun1();
 		
 		A.fun2();
 		
 		return 0;
 	}
 	
 	*/
 	
 	
 	class mess
 	{
 		
 		
 		public:
 		
 		char sir[256];
 		
 		private:
 		
 		void show0()
 		{
 			cout<<" Message :: step 2022 "<<endl;
	 	}
	 			
	 	public:
 		
 		void show()
 		{
 			cout<<" Message :: "<<sir<<endl;
	 	}
	 	
	 	void insert()
	 	{
	 		cout<<" Enter message = ";
	 		cin>>sir;
 		}
	 	
 	};
 
 
 	int main()
 	{
 		mess A;
 		
 		A.insert();
 		A.show();
 		
 		X.fun1();
 		
 		return 0;
 	}
 	

