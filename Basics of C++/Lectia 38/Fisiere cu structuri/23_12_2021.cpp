 	#include <iostream>
 	#include <iomanip>
 	#include <iostream>
 	#include <cstdlib>
 	#include <ctime>
 	#include <conio.h>
 	#include <cstring>
 	#include <windows.h>
 	
 	using namespace std;
 	
 	//FISIERE BINARE-permit stocarea informatiei in format memorie
 	
 	/*
 		1. w+b -> creaza fisierul pentru citire si inscriere in format binar
 		2. r+b -> deschide fisierul pentru citire si inscriere in format binar
 		3. a+b -> deschide fisierul pentru adaugarea informatiei la sfarsitul fisierului in format binar
 	*/
 	
 	// frwrite() - functia care ne permite sa salvam in fisier informatia in format memorie
 	
 	// fwrite( var_structura, sizeof(structura), nr_de_structuri, fp);
 	
 	// fread() - functia care ne permite sa extragem informatia din fisier; 
 	//			 Returneaza nr. de copii extrase.
 	
 	// int n = fread( var_structura, sizeof(structura), nr_de_structuri_maximal, fp );
 	
 	
 	struct stud
 	{
	 	char nume[256];
 		int ani;
 		float media;
 	}S[100], X[100];


 	int main()
 	{
 		srand(time(0));
 		
 		FILE *fp;
 		
 		if ( (fp = fopen ("file.txt", "w+b") ) == NULL )
 		{
 			cout<<" ERROR :: W+B "<<endl;
 			system("pause");
 			return 0;
 		}
 		
 		int n = 23;
 		
 		for(int i=0; i<n; i++)
 		{
 			S[i].ani=rand()%100;
 			S[i].media=rand()%10*1.357;
 		}
 		
	 	//  for (int i=0; i<5; i++)	  fprintf(fp, "%d %f\n", S[i].ani, S[i].media);
  		
  			
  		cout<<" sizeof(stud)  = "<<sizeof(stud)<<"\n sizeof(stud)*"<<n<<" = "<<sizeof(stud)*n<<endl;
  		
 		fwrite( S, sizeof(stud), n, fp);
 		
 		fclose(fp);
 		
 		if ( (fp = fopen ("file.txt", "r+b") ) == NULL )
 		{
 			cout<<" ERROR :: R+B "<<endl;
 			system("pause");
 			return 0;
 		}
 		
 		int N = fread(X, sizeof(stud), 100, fp );
 		
 		fprintf(stdout, "\n");
 		
 		for(int i=0; i<N; i++) fprintf(stdout, " %d %d %f \n",i, X[i].ani, X[i].media);
 		
 		return 0;
 	}
