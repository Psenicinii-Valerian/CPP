 	#include <iostream>
 	#include <iostream>
 	#include <cstdlib>
 	#include <ctime>
 	
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
 	
	 	
 	class abc
 	{
 		public:
 			
 		int a,b,c,R;
 		
 		private:
 		
 		void show0()
 		{
 			cout<<" Message :: STEP 2022 "<<endl;
	 	}
	 			
	 	public:
	 	
 		int random()
 		{
 			int n = rand()%20-5;
 			return n;
	 	}
	 	
	 	
	 	void show(char mess[256], int x)
 		{
 			cout<<mess<<x<<endl;	
 		}

 		
 		int calcul(int a, int b, int c)
 		{
 			int R = a+b-c;
	 		return R;		
 		}
	 	
 	}A;
 
 
 	int main()
 	{
	 	srand( time(0) );
 		
 		A.a = A.random();
 		A.b = A.random();
 		A.c = A.random();
 		
 		A.show(" a = ", A.a );
 		A.show(" b = ", A.b );
 		A.show(" c = ", A.c );
 		
 		A.R = A.calcul(A.a, A.b, A.c);
 		
 		cout<<"\n RASPUNS :: \n a + b - c = "<<A.a<<" + "<<A.b<<" - "<<A.c<<" = "<<A.R<<endl;
 		
 		return 0;
 	}
 	

