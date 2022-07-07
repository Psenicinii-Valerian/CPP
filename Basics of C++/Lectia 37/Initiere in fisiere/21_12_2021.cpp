  	#include <iomanip>
 	#include <iostream>   //  cout si cin 
 	#include <cstdlib>  // <stdlib.h>   rand srand exit
 	#include <ctime>    // <time.h>  time 
 	#include <conio.h> 
 	#include <cstring>  // string.h
 	#include <windows.h>
    
 	using namespace std;
 	
 	// Fisiere
 	
 	/* 
	 	Fisierele ne permit sa stocam ceva informatie in ele (*erau pe timpuri ceva gen baza de date 
	 	de acum)
	   
 		Fisierele se impart in 2 grupe:
	   
 		1) Fisiere text - pastreaza informatia in format deschis
	 	2) Fisiere binare - informatia se pastreaza in fromat memorie
	   
	 	Fisierele reprezinta o interfata de conexiune fizica si logica
		   
	 	Interfata fizica - reprezinta fisierul pastrat pe un hard disk (HDD)
	 	Interfata logica - reprezinta instructiunile de legatura in interiorul unui program
		   
	 	Conexiunea dintre interfata logica se numeste flux
 	
 	
	 	1. Pentru a ne conecta spre un fisier, avvem nevoie sa declaram
	 	un pointer-structura de tip de date "FILE *fp"

	 	2. Pointerul-fisier va primi memorie numai daca se va realiza un
	 	flux de conexiune cu succes
 		2.1. functia <<fopen>> realizeaza conexiunea dintre partea fizica si logica
 		Functia intoarce o adresa de structura FILE
 		2.1.2 Parametrul 1 contine numele si extensia fisierului
 		2.1.3 Parametrul 2 contine regimul de prelucrare a conexiunii

 		3.REGIMURI
 		3.1 r+ => realizeaza citirea si inscrierea intr-un fisier text
	 	3.2 w+ => crearea fisierului pentru citire si inscriere
	 	3.3 a+ => deschide fisierul pentru adaugare la sfarsit a unei informatii
	 	
	 	Fiecare flux obligator trebuiesa fie inchis - fclose(fp)
	 	
	 	
	 	4. prelucrearea informatiei din fisier se realizeaza liniar prin functiile:: <<fprintf>>, <<fscanf>>
	 	4.1 fprintf ne permite sa salvam linia informatia in fisier
	 	
 		4.1.2. fprintf( flux, "descrierea memoriei", var1,...varN );
	 	4.1.2.3 flux - se indica fluxul de prelucrare a informatiei;
	 	***Indicam nume fisier pentru ca informatia sa se afiseze in interiorul unui fisier
	 	***Indicam stdout ca informatia sa se afiseze standart la ecran;
	 	4.1.2.3.1 descrierea memoriei - fiecare tip de date are o formatare ;
	 	speciala pentru a descrie memoria:
		
 		1. int - %d
	 	2. float - %f
	 	3. char - %c
	 	4. char[] - %s
	 	
	 	fscanf - realizeaza extragerea informatiei din fisier
	 	fscanf(flux, "descrierea memoriei", &var1, &var2, ..., &varN);
	 	
	 	flux - se indica fluxul de extragere a informatiei. Indicam:
	 	file name (fn) - pentru a extrage informatia din file
	 	stdin - pentru a extrage informatia de la tastatura (din program)
	 	
	 	
	 	feof() - functia intoarce adevar daca am ajuns la sfarsit de fisier
		
 	*/
 	
 	int main()
 	{		
 		srand(time(0));
 		
 		/*
 		
 		char nume[256];
 		char extensie[256];
 		
 		cout<<" Dati numele :: ";
 		cin>>nume;
 		
 		cout<<" Dati extensia :: ";
 		cin>>extensie;
 		
 		strcat(nume,".");
 		strcat(nume,extensie);
 		
 		*/
 		
 		/*
 		
 		FILE *fp;
 		
 		int n, a, b, c;
 		int v[100];
 		
 		n = rand()%10+3;
 		cout<<"  n = "<<n<<endl<<endl;
 		
 		fp = fopen("step_2021.txt", "w+");
 		
 		fprintf( fp, "%5s %d %s", "n =", n, "\n\n");
 		
 		for(int i=0; i<n; i++)
 		{ 	
 			a = rand()%10;
 			b = rand()%10;
 			c = rand()%10;
		 	v[i] = a+b-c;
		 	
		 	fprintf( fp, "%6s %2d %6s %2d %6s %2d %6s %2d %6s %2d\n", 
		 	" i = ", i+1, " a = ",a, " b = ",b, " c = ",c, " R = ",v[i]);	
		 	
 			fprintf( stdout, "%6s %2d %6s %2d %6s %2d %6s %2d %6s %2d\n", 
		 	" i = ", i+1, " a = ",a, " b = ",b, " c = ",c, " R = ",v[i]);	
 		}
 		
 		fclose(fp);
 		
 		*/
 		
 		
 		
 	/*
	 	
 		REALIZARE DE CATRE PROFESOR :: 

 		int n=rand()%10+10;

	 	FILE *fp;
		
	 	fp = fopen("_abc_step_2021.txt", "w+" );
		
 		cout<<"n="<<n<<endl;
		
 		fprintf( fp, "%d\n" ,n);
		
 		for(int i=0,a,b,c; i < n; i++)
 		{
 			a=rand()%10;
 			b=rand()%10;
	 		c=rand()%10;
		
	 		fprintf( fp , "%d %d %d %d\n" ,a, b, c, a+b-c );
	 		fprintf( stdout , "%d %d %d %4d\n" ,a, b, c, a+b-c );
	 	}

	 	fclose(fp);
	 	
 	*/	
 		
	 	/*
	 	
	 	EXTRAGERE NECONTROLABILA A INFORMATIEI DIN FISIER
	 	
	 	FILE *fp;
		
	 	fp = fopen("_abc_step_2021.txt", "r+" );
		
 		int a,b,c,R;
	 	
 		while ( !feof(fp) )
		
 		{
 			fscanf( fp, "%d%d%d%d", &a, &b, &c, &R);	
 			fprintf( stdout, "%3d %3d %3d %3d\n", a, b, c, R)	;
	 	}
	 	
	 	fclose(fp);
	 	
 		*/
 		
 		
 		/*
 		
 		EXTRAGERE CONTROLABILA A INFORMATIEI DIN FISIER
 		
 		FILE *fp;
		
	 	fp = fopen("_abc_step_2021.txt", "r+" );
		
 		int a,b,c,R;
 		
 		int n;
 		
 		fscanf(fp, "%d", &n);
	 	
 		for (int i=0; i<n; i++)
		
 		{
 			fscanf( fp, "%d%d%d%d", &a, &b, &c, &R);	
 			fprintf( stdout, "%3d %3d %3d %3d\n", a, b, c, R);
	 	}
	 	
	 	fclose(fp);
	 	
 		*/
 		
 		int v1[100], n1, v2[100], n2;
 		
 		FILE *fp;
		 
	 	fp = fopen("vector.txt", "w+" );
	 	
	 	fprintf( stdout, " Enter n = ");
	 	 fscanf( stdin, "%d",&n1);
	 	 
	 	cout<<endl;
	 	//cout<<" Enter n = ";
 		//cin>>n;
	 	
	 	fprintf( fp, "%d\n", n1);
	 	
 		for(int i=0; i<n1; i++)
 		{
 			v1[i] = rand()%100;
 			
 			fprintf( stdout, " v1[%d] = %d \n", i, v1[i]);
 			
 			fprintf( fp, "%d ", v1[i]);
	 	}
	 		
	 	fclose(fp);
	 	
	 	cout<<endl<<endl;
	 	
	 	
	 	fp = fopen("vector.txt", "r+" );
	 	
	 	fscanf( fp, "%d", &n2);
	 	
	 	for(int i=0; i<n2; i++)
	 	{
	 		fscanf( fp, "%d", &v2[i]);	
	 		fprintf( stdout, " v2[%d] = %d \n", i, v2[i]);
 		}
	 	
	 	fclose(fp);
	 	
 		return 0;
 	}
