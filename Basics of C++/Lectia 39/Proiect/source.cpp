	 
 	void insert(int *n) 
 	{
 	    do
 		{  
		 	system("cls");
	   	 	cout<<" Student ["<<(*n)+1<<"]"<<endl;
	   	 
	  	 	cout<<" Enter nume  :: "; cin>>S[*n].nume;
	   		cout<<" Enter ani   :: "; cin>>S[*n].ani;
	   	 
	   		// cout<<" Enter media :: "; cin>>S[*n].media;
	   	 
	  	 	do
	   		{
	   	 		cout<<" Enter nota ["<<S[*n].NrNOTE+1<<"]   :: "; cin>>S[*n].NOTE[ S[*n].NrNOTE ].NOTA;
	   	 	
	   	 		S[*n].media += S[*n].NOTE[  S[*n].NrNOTE  ].NOTA;
	   	 		
	   	 		S[*n].NrNOTE++;
	   	 		
	   	 		cout<<"   --   NOTE   --   ESC - exit, any key ...."<<endl;
	   	 	 	
	     	} while( _getch() != 27 );
	     
 		S[*n].media = S[*n].media / S[*n].NrNOTE;
	    
 		(*n)++;
		 
 		cout<<" ESC - exit,  any key ...."<<endl;
		   
 		} while( _getch() != 27 );
 	}
	 
	 
 	void show(int n)
 	{
	 	// x- stud per pagina
	 	// in - inceput
	 	// sf - sfirsit
	 	
	 	int x=2, in=0, sf=x;
	 	bool EXIT=0;
	 	
	   	if( n > 0 )
	   	{
        
 			while(1)		
	  		{
	 	 		system("cls");

	 			line1();cout<<(char)186<<setw(5)<<"ID"<<(char)186<<setw(15)<<"NUME"<<(char)186<<setw(10)<<"ANI"<<setw(10)<<"MEDIA"<<endl;line2();
	
	 			for(int i=in; i < sf ; i++)
		 		{
	 				cout<<(char)186<<setw(5)<<i+1
		   			<<(char)186<<setw(15)<<S[i].nume
				 	<<(char)186<<setw(10)<<S[i].ani
		 			<<(char)186<<setw(10)<<S[i].media<<endl;
		  			line3();
	 			}
		
		 		switch(_getch())
		 		{
		 			case 43 : in+=x; sf+=x; if( sf > n ){ in=n-2; sf=n; } break;
		 			case 45 : in-=x; sf-=x; if( in < 0 ){ in=0;   sf=x; } break;
		 			case 27 : EXIT=true;  
	 			}
	
		 		if( EXIT ) break;
 			}	
 		} 
		
 		else
 		{ 
		 system("cls");
		 cout<<" Nu sunt studenti pentru afisare"<<endl;	
 		}
 	}
	 
	 
 	void save(int n)
 	{
 		FILE *fp;
 		
 		if ( (fp = fopen (FNS, "w+b") ) == NULL )
 		{
 			cout<<" ERROR :: W+B "<<endl;
 			system("pause");
 			return;
 		}
 		
 		fwrite(S, sizeof(stud), n, fp);
 		
 		fclose(fp);
 	}
 	
 	
 	int load()
 	{
 		FILE *fp;
 		
 		if ( (fp = fopen (FNL, "r+b") ) == NULL )
 		{
 			cout<<" ERROR :: R+B "<<endl;
 			system("pause");
 			return 0;
 		}
 		
 		int n = fread(S, sizeof(stud), 1000, fp);
 		
 		fclose(fp);
 		
 		return n;
 	}
