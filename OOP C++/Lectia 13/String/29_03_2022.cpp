 	#include <iostream>
 	#include <iomanip>
 	
 	#include <string>
 	#include <cstring>
 	
 	using namespace std;
 	
 	/* 
 		****************************************PROGRAMAREA ORIENTATA OBIECT*****************************************
 		
 		-------------------------------------------OPERATOR DE REZOLUTIE---------------------------------------------
 		
 		Operatorul de rezolutie (::) - ne permite sa accesam o informatie dintr-o entitate/structura unica
 		
 		-----------------------------------------------SETERI SI GETERI----------------------------------------------
 		
 		!!! Toate proprietatile trebuie sa fie private !!!
 		!!! Fiecare proprietate isi are un numar anumit de seteri si geteri
 		
 		seter - metode care se vor ocupa cu procesul de atribuire a unor valori proprietatii
 		
 		geter - intoarce valoarea proprietatii pentru obiect
 		
 		Geterul prelucreaza metoda sa prin returnare constanta a informatiei si corpul este setat constant
 		
 		
 		---------------------------------------------Instructiunea this----------------------------------------------
 		
 		Instructiunea this -  un pointer automatizat inteligent, care ne indica adresa de inceput a obiectului.
 		Se utilizeaza doar in interiorul clasei. Ne permite sa garantam ca variabila apelata este proprietatea
 		clasei.
 		
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
	 	
	 	------------------------------------------------------FUNCTII PRIETENE---------------------------------------------------
	 	
	 	Functia prietena - unei functii prietene i se permite acces la zonele privatea clasei. Functiile prietene nu fac parte
 		din componenta clasei.
 		
 		operatorul friend - declara functia ca prietena
 		
 		-----------------------------------------------SUPRAINCARCAREA OPERATORILOR-----------------------------------------------
 		
 		Tehnologia de supraincarcare a operatorilor extinde functionalitatea limbajului. Operatorii pot primi o functionalitate
 		noua apelata prin functionalitatea lor standarta de prelucrare. Functiile de supraincarcare a operatorilor se apeleaza 
	 	prin intermediul combinatiei. Supraincarcarea operatorilor poate fi realizata ca functie prietena sau ca metoda a clasei. 
		
 		tip_date_return operator OPERATORUL(paramentrii necesari ai combinatiei)
 		{
			.......
 		}
 		
 		--------------------------------------------SUPRAINCARCAREA CA METODA A CLASEI--------------------------------------------
 		
 		Metodele utilizate la supraincarcare ne permit sa nu transmitem un obiect
 		Supraincarcarea egalului se realizeaza numai ca metoda a clasei
 		Daca in urma apelarii metodei este necesar sa returnam obiectul care a apelat metoda - se utilizeaza pointerul this (*this)
 		
 	*/ 
   	

 	
 	int main()
 	{
 		char sir[256];
 		
 		string s;
 		
 		cout<<" s= "<<s<<endl;
 		cout<<" sir= "<<sir<<endl;
 		
 		string s1="string itSTEP 2022";
 		cout<<" s1= "<<s1<<endl;
 		
 		strcpy( sir, s1.c_str() );
 		cout<<" sir= "<<sir<<endl;
 		
 		sir[0]=0;
 		cout<<" sir= "<<sir<<endl;
 		
 		int n = s1.copy( sir, s1.length(), 0 );
 		
 		sir[n] = 0;
 		
 		cout<<" sir= "<<sir<<endl;
 		
 		string s2(" s2 string itSTEP 2022");
 		cout<<" s2= "<<s2<<endl;
 		
 		string s3(s1);
 		cout<<" s3= "<<s3<<endl;
 		
 		string s4(20, '*' );
 		cout<<" s4= "<<s4<<endl;
 		
 		string s5("string itSTEP 2022", 7, 9);
 		cout<<" s5= "<<s5<<endl;
 		
 		string s6(s5.begin(), s5.end()-3);
 		cout<<" s6= "<<s6<<"\n s6.length() = "<<s6.length()<<endl;
 		
 		//cout<<" Enter s = ";
 		//cin>>s;
 		//getline(cin, s);
 		//getline(cin, s, '$');		
 		//cout<<" s = "<<s<<endl;
 		
 		s="STEP 2022";
 		cout<<" s= "<<s<<endl;
 		
 		s+="itSTEP"; //s=s+1; s+=1
 		cout<<" s = "<<s<<endl;
 		
 		s = s + " " + s;
 		cout<<" s = "<<s<<endl;	
 		
 		s+s; // prelucrare locala
 		cout<<" s = "<<s+s<<endl;
     	cout<<" s = "<<s<<endl;
     	
     	string sss;
     	
     	sss = s+s;
     	cout<<" sss = "<<sss<<endl;
     	
     	sss="";
     	cout<<" sss = \"\" = "<<sss<<" - "<<sss.length()<<endl;
     	
     	sss="step";
     	
     	sss.clear();	
 		cout<<" sss.clear() = "<<sss<<" - "<<sss.length()<<endl;
 		
 		sss="step";
     	sss.erase(); 
 		cout<<" sss.erase() = "<<sss<<" - "<<sss.length()<<endl;
 		
 		sss="step";
     	sss.erase(1,2); 
 		cout<<" sss.erase(1,2) = "<<sss<<" - "<<sss.length()<<endl;
 		
 		sss="step";
     	sss.erase(sss.begin(),sss.end()-2); 
 		cout<<" sss.erase(sss.begin(),sss.end()-2) = "<<sss<<" - "<<sss.length()<<endl;
 					   	
     	sss=s+"$$$";
     	cout<<" sss = "<<sss<<endl;
     	
     	sss.append(30,'!');
     	cout<<" sss = "<<sss<<endl;
     	
     	sss.append(	"123321");
     	cout<<" sss = "<<sss<<endl;
     	
     	sss.append(	"abcdefgh", 2, 3);
     	cout<<" sss = "<<sss<<endl;
     	
     	sss.assign("xxxx");
     	cout<<" sss = "<<sss<<endl;
     	
     	sss.assign("abcde",1,3);
     	cout<<" sss = "<<sss<<endl;
     	
     	sss[0] = 'x';
     	cout<<" sss = "<<sss<<endl;
     	
     	sss[sss.length()-1] = 'y';
     	cout<<" sss = "<<sss<<endl;
     	
     	cout<<" sss = "<<sss.at(2)<<endl; // ne va afisa al 2 lea simbol - y
     	
     	sss.insert(2, "www");
     	cout<<" sss = "<<sss<<endl;
     	
     	int i = sss.find('w');
     	cout<<" i="<<i<<endl;
     	
     	for( int i=0; i<sss.length();i++ )
     	{	
     		if ( sss[i] == 'w') cout<<" w="<<i<<endl; 		
     	}
     	
     	int x=0;
     	
     	while(x!=-1)
     	{   		
     		x = sss.find('w',x+1);  
	 		if (x!=-1) cout<<" x="<<x<<endl;  		
		}
     	return 0;   
 	}	
