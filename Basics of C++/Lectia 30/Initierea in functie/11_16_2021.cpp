 	#include <iomanip>
 	#include <iostream>		// cout si cin
 	#include <cstdlib>		// <stdlib.h> rand srand exit
 	#include <ctime> 		// <time.h> time
 	#include <conio.h>
 	#include <cstring>  	//string.h
 	#include <windows.h>  
 	
 	using namespace std;
 	
 	//FUNCTII
 	
 	/*
 	
 	cout<<" informatie 1"<<endl;
 	cout<<" informatie 2"<<endl;
 	...
 	cout<<" informatie N"<<endl;
 	
 	Daca o potiune de cod se repeta mai mult de o singura data, acea portiune de cod  va fi 
 	amplasata int-o functie.
  	
 	O functie este o portiune de memorie, care primeste memoria cand functia se apeleaza
 	si, memoria se elibereaza cand functia isi finiseaza executia
 	fiecare functie se declara aparte(in afara functiei main):
 	
 	returnare_tip_date nume_functie(param1, param2, ... , paramN)   !!!!!!!!!!!!!!!!!!!!!!!!
 	{
 	cod_functie
 	return returnare_nume_variabila;
 	}
 	
 	1. returnare_tip_date - functia poate returna o informatie. Informatia poate 
 	fi reprezentata numai la nivel de o valoare;
 	1.1 Functia nu poate returna mai mult de o valoare;
  	1.2 Valorii returnate trebuie sa i se indice tipul de date;
  	1.3 Daca functiei nu este necesar sa intoarca o valoare, se indica tipul de date "NIMIC"- void;
  	1.4 Daca functia intoarce o informatie, inseamna ca undeva pe teritoriul corpului este definit
  	operatorul return care si va contine valoarea returnata; 
  	1.5 Numarul de operatori return intr-o singura functie este nelimitat;
  	1.6 In momentul executiei operatorului return, functia isi incheie executia sa;
  	
  	2. nume_functie - se declara conform regulilor de declarare a variabilelor.
  	
  	3. () - se indica dupa numele functiei (de dorit fara spatii dintre nume si paranteza), care 
  	si transforma numele de functie in functie.
  	
  	4. param1, param2, ... , paramN - parametrii se declara fiecare particular (in parte);
  	4.1 Ei (parametrii) sunt niste variabile care primesc memorie in momentul apelarii functiei;
  	4.2 Numarul lor este nelimitat;
  	4.3 Valorile care sunt atribuite parametrilor primesc valori in momentul cand se apeleaza functia;
  	4.4 Daca este nevoie sa transmitem in functie informatii se declara un numar de parametri necesari;
  	4.5 Daca nu este nevoie sa transmitem informatie in functie, nu se declara nici un parametru - () vor
  	ramane libere;
  	4.6 Toate variabilelee declarate in corpul unei functii sunt variabile vizibile doar pe teritoriul
  	acestei functii.
  	
  	5 {...} - corpul functiei.
  	
  	6 O functie poate apela alta functie prin numele ei.
  	
 	*/
	
 	int insertINT(char mess[256])
 	{
 	 	cout<<mess;
 	 	int x;
 	 	cin>>x;
 		
 		return x;
 	}
 	
 	void show(char mess[256], int x)
 	{
 		cout<<mess<<x<<endl;	
 	}
      
 	int abc(int a, int b, int c)
 	{
 		return a+b-c;		
 	}
	                  	
 	int main()
 	{
 		// a+b-c
 		// 1. functia insert
 		// 2. functia show
 		// 3. functia calcul
 		
 		/*
 		int a,b,c;
 		
 		cout<<" Enter a,b,c";
 		cin>>a>>b>>c;
 		
 		cout<<" a= "<<a<<" b= "<<b<<" c= "<<c<<endl;
 		
 		int R = a+b-c;
 		cout<<" R = a+b-c = "<<R<<endl; 
 		*/
 		
 		int a = insertINT(" Enter a = "), b = insertINT(" Enter b = ");
 		int c = insertINT(" Enter c = ");
 		
 		show(" a = ",a);
 		show(" b = ",b);
 		show(" c = ",c);
 		
 		int R=abc(a,b,c);
 		show(" R = a+b-c = ",R);
 		
	 	return 0;		
 	}    
 	
 		
