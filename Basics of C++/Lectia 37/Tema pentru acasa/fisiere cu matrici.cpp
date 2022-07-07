 	#include <iostream>
 	#include <iomanip>
 	#include <cstring>
 	#include <cstdlib>
 	#include <ctime>
 	using namespace std;
 	
 	int main()
 	{
 		srand(time(0));
 		
 		///   [][]  int   float   char 
     	// 	1. save [][] matrix.txt 
     	//  2. load [][] matrix.txt
     	
     	int M1[100][100];
     	float M2[100][100];
     	char M3[256][256];
     	
     	int n1, m1, n2, m2, n3, m3, n4, m4, n5, m5, n6, m6;
     	
     	int Mload1[100][100];
 		float Mload2[100][100]; 
	 	char Mload3[256][256];
	 	
     	FILE *fp;
 				
 				
 		// 1 int
 		
 		// save integer
 		
 		fprintf( stdout , "\n INTEGER INSERT::\n\n " );
 		
 		fp = fopen("Matrix.txt","w+"); 
 		
 		fprintf( stdout , "Enter  n = " );
  		fscanf(  stdin , "%d",&n1);
  		
  		fprintf( stdout , " Enter  m = " );
  		fscanf(  stdin , "%d",&m1);
  		
  		cout<<endl;
 		
  		fprintf( fp , "%d x ",n1);
  		fprintf( fp , "%d\n\n",m1);
  		
  		
 		for(int i=0;i<n1;i++)
 		{
 			for(int j=0; j<m1; j++)
 			{	 
   				M1[i][j] = rand()%100;
    	 		fprintf( stdout, " M1[%d][%d] = %d \n",i,j,M1[i][j]);
     			fprintf( fp , "%d  ",M1[i][j]);
		 	}
		 	
		 	fprintf( fp , "\n");
  		}
  		
 		fclose(fp);
	
 		cout<<endl;
 		
 		
 		// 2 float 
 			
 		// save float
 		
 		fprintf( stdout , "\n FLOAT INSERT ::\n\n " );
 		
 		fp = fopen("Matrix.txt","a+"); 
 		
 		fprintf( stdout , "Enter  n = " );
  		fscanf(  stdin , "%d",&n2);
  		
  		fprintf( stdout , " Enter  m = " );
  		fscanf(  stdin , "%d",&m2);
  		
  		cout<<endl;
 		
  		fprintf( fp , "\n\n%d x ",n2);
  		fprintf( fp , "%d\n\n",m2);
  		
  		
 		for(int i=0; i < n2; i++)
 		{
 			for(int j=0; j < m2; j++)
 			{	 
   				M2[i][j] = rand()%100*1.357;
    	 		fprintf( stdout, " M2[%d][%d] = %f \n", i, j, M2[i][j]);
     			fprintf( fp , "%f  ",M2[i][j]);
		 	}
		 	
		 	fprintf( fp , "\n");
  		}
 		
 		cout<<endl;
 		
 		fclose(fp);
 		
 		
 		// 3 char
 		
 		// save char
 		
 		fprintf( stdout , "\n CHAR INSERT ::\n\n " );
 		
 		fp = fopen("Matrix.txt","a+"); 
 		
 		fprintf( stdout , "Enter  n = " );
  		fscanf(  stdin , "%d",&n3);
  		
  		fprintf( stdout , " Enter  m = " );
  		fscanf(  stdin , "%d",&m3);
  		
  		cout<<endl;
 		
  		fprintf( fp , "\n\n%d x ",n3);
  		fprintf( fp , "%d\n\n",m3);
  		
  		
 		for(int i=0; i < n3; i++)
 		{
 			for(int j=0; j < m3; j++)
 			{	 
   				M3[i][j] = 'a' + rand()%26;
    	 		fprintf( stdout, " M3[%d][%d] = %c \n", i, j, M3[i][j]);
     			fprintf( fp , "%c  ",M3[i][j]);
		 	}
	
		 	fprintf( fp , "\n");
  		}
 		
 		cout<<endl;
 		
 		fclose(fp);
 		
 		
 		// 1 integer
 		
 		// load integer
 		
 		fprintf( stdout , "\n INTEGER SHOW::\n\n" );
 		
 		fp = fopen("Matrix.txt", "r+");
 		fscanf( fp , "%d x %d", &n4, &m4);
 		
 		for( int i=0; i < n4; i++)
 		{
 			for(int j=0; j < m4; j++)
 			{			 
   				fscanf( fp , "%d", &Mload1[i][j]);
   				fprintf( stdout, " Mload1[%d][%d] = %d \n", i, j ,Mload1[i][j]);
		 	}
		 	
		 	fprintf( fp , "\n");
 		}
 		
 		
 		// 2 float
 		
     	// load float
     	
     	fprintf( stdout , "\n\n FLOAT SHOW::\n\n" );
 		
 		fscanf( fp , "%d x %d", &n5, &m5);
 		
 		for( int i=0; i < n5; i++)
 		{
 			for(int j=0; j < m5; j++)
 			{			 
   				fscanf( fp , "%f", &Mload2[i][j]);
   				fprintf( stdout, " Mload2[%d][%d] = %f \n", i, j,Mload2[i][j]);
		 	}
		 	
		 	fprintf( fp , "\n");
 		}
 		
 		
 		// 3 char
 		
 		// load char
     	
     	fprintf( stdout , "\n\n CHAR SHOW::\n\n" );
 		
 		fscanf( fp , "%d x %d", &n6, &m6);
 		
 		for( int i=0; i < n6; i++)
 		{
 			for(int j=0; j < m6; j++)
 			{			 
   				fscanf( fp , "\n\n%c", &Mload3[i][j]);
   				fprintf( stdout, " Mload3[%d][%d] = %c \n", i, j, Mload3[i][j]);
		 	}
		 	
		 	fprintf( fp , "\n");
 		}
     	
     	fclose(fp);
 		
 		return 0;
 	}
