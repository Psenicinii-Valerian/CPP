 	#include <iostream>
 	#include <iomanip>
 	#include <cstdlib> // <stdlib.h>
 	#include <ctime>   // <time.h>
 	#include <cmath>   // <math.h>
 	#include <conio.h>
 	#include <windows.h>
 	
 	using namespace std;
 	
 	template <typename T>
 	void insertM(T M1[][100], int *n1,bool R, int tip)
 	{
     	FILE *fp;
 		fp = fopen("matrix.txt", ( R ? "w+" : "a+" ));
 		
 		fprintf(stdout, " Enter n= ");
 		fscanf(stdin, "%d",  n1);
 		fprintf(fp , " %d\n", *n1);
 		fprintf(stdout , "\n");
 		
  		for(int i=0; i<*n1; i++)
  		{
 			for(int j=0; j<*n1; j++)
 			{
 				switch(tip)
 				{
 					case 1: M1[i][j] = rand()%10;
 					fprintf(stdout, " %d ",  M1[i][j]);
				 	fprintf(fp , " %d ", M1[i][j]);
				 	break;
				 	
				 	case 2: M1[i][j] = rand()%10*1.357;
				 	fprintf(stdout, " %f ",  M1[i][j]);
				 	fprintf(fp , " %f ", M1[i][j]);
			 		break;
			 		
				 	case 3: M1[i][j] = 'a'+rand()%10;
				 	fprintf(stdout, " %c ",  M1[i][j]);
				 	fprintf(fp , " %c ", M1[i][j]);
				 	break; 
 				}
 			}
 			
 			cout<<endl;
 			fprintf(fp,"\n");
 		}
 		
 		fprintf(stdout , "\n");
 		fprintf(fp , "\n");
 		
 		fclose(fp);
 	}
 	
 	
 	int main()
 	{
 		srand(time(0));
 		
 		fprintf(stdout , " INSERT MATRIX ::\n\n");
	 	
 		
 		int M1[100][100], M1a[100][100],  n1a, n2a, n3a;
 		float M2[100][100], M2a[100][100];
 		char M3[100][100], M3a[100][100];
 		
 		int *n1 = new int;
 		int *n2 = new int;
 		int *n3 = new int;
 		
 		insertM(M1,n1,1,1);
 		insertM(M2,n2,0,2);
 		insertM(M3,n3,0,3);
 		
 		/*
 		
	 	FILE *fp;
	 	
	 	// ************ MATRICE DE TIP FLOAT ************ 
	 	
	 	fp = fopen("matrix.txt", "a+");
	 	
	 	fprintf(stdout, " Enter n2= ");
	 	fscanf(stdin, "%d", &n2);
	 	fprintf(fp , " %d\n ", n2);
	 	
	 	for(int i=0; i<n2; i++) 
	 	{
	 		for(int j=0; j<n2; j++)
	 		{
 				M2[i][j] = rand()%10*1.357;
	 			fprintf(stdout, " %f ",  M2[i][j]);
	 			fprintf(fp , " %f ", M2[i][j]);
	 		}
	 		
	 		cout<<endl;
	 		fprintf(fp,"\n");
	 	}
	 	
	 	cout<<endl;
	 	
	 	fprintf(fp,"\n");
	 	fclose(fp);
	 	
 		// ************ MATRICE DE TIP CHAR ************ 
 		
 		fp = fopen("matrix.txt", "a+");
 		
	 	fprintf(stdout, " Enter n3= ");
	 	fscanf(stdin, "%d", &n3);
	 	fprintf(fp , " %d\n ", n2);
	 	
	 	for(int i=0; i<n3; i++) 
	 	{
	 		for(int j=0; j<n3; j++)
		 	{
	 			M3[i][j] = rand()%22+100;
	 			fprintf(stdout, " %c ",  M3[i][j]);
 				fprintf(fp , " %c ", M3[i][j]);
		 	}
		 	
	 		cout<<endl;
	 		fprintf(fp,"\n");
	 	}
	 	
	 	cout<<endl;
	 	fprintf(fp,"\n");
 	 	fclose(fp); 
 	 	
 		*/
		 
	 	// ************ EXTRAGERE MATRICE DE TIP INT ************
		
	 	cout<<endl;
	 	
	 	fprintf(stdout , " SHOW MATRIX ::\n\n");
	 	
 		FILE *fp;
 		fp = fopen("matrix.txt", "r+");
 		
 		fscanf(fp, "%d", &n1a);
 		
 		for(int i=0; i<n1a; i++)
	 	{
 			for(int j=0; j<n1a; j++)
		 	{
 				fscanf(fp, " %d ", &M1a[i][j]);
 				fprintf(stdout, " %d ", M1a[i][j]);
 			}
 			
 		cout<<endl;
 		}
 		
	 	// ************ EXTRAGERE MATRICE DE fLOAT  ************
	 	
 		cout<<endl; 
 		
 		fscanf(fp, "%d", &n2a);
 		
 		for(int i=0; i<n2a; i++)
	 	{
 			for(int j=0; j<n2a; j++)
		 	{
 				fscanf(fp, " %f ", &M2a[i][j]);
 				fprintf(stdout, " %f ", M2a[i][j]);
 			}
 			
 		cout<<endl;
 		
	 	}
	 	
 		// ************ EXTRAGERE MATRICE DE CHAR  ************ 
 		
 		cout<<endl;
 
 		fscanf(fp, "%d", &n3a);
 
	 	for(int i=0; i<n3a; i++)
	 	{
		 	for(int j=0; j<n3a; j++)
		 	{
		 		fscanf(fp, " %c ", &M3a[i][j]);
		 		fprintf(stdout, " %c ", M3a[i][j]);
		 	}
		 	
	 		cout<<endl;
	 	} 
	 	
 		fclose(fp);
 		
	 	return 0;
 	}

