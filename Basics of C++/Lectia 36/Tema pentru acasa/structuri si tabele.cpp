 	#include <iomanip>
 	#include <iostream>   //  cout si cin 
 	#include <cstdlib>  // <stdlib.h>   rand srand exit
 	#include <ctime>    // <time.h>  time 
 	#include <conio.h> 
 	#include <cstring>  // string.h   
 	#include <windows.h>
	    
 	using namespace std;
	
 	//   Structuri de date
	
	
 	/*	
 	struct nume_tip_date_user
 	{
		tip_date var1;
		tip_date var2;
		tip_date var3;
		....
		tip_date varN;
 	}....;
	
 	*/ 	 
 	
 	// student  =>  nume, grupa , ani, media .......... N info
	
 	void line1()
 	{
 		cout<<(char)201<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)203<<(char)205
	 	    <<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205
		    <<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)203<<(char)205
			<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205
			<<(char)205<<(char)203<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205
			<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)187<<endl;	   	
 	}
	
 	void line2()
 	{
 		cout<<(char)204<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)206<<(char)205
	 	    <<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205
		    <<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)206<<(char)205
			<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205
			<<(char)205<<(char)206<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205
			<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)185<<endl;
 	}
	
 	void line3()
 	{
 		cout<<(char)200<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)202<<(char)205
	 	    <<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205
		    <<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)202<<(char)205
			<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205
			<<(char)205<<(char)202<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205
			<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)188<<endl;
			
 	}
	
 	struct stud
 	{
 		char nume[256];
 		int ani;
 		double media=0; 
 		double new_media=0;
	    
 		int NrNOTE = 0;
 		int new_NrNOTE = 0;
 		
 		struct note
 		{
 			char DIS[256];
 			char PROF[256];
 			int NOTA;
 			
	 	}NOTE[100];
	
 	} S[100];
	 
	 
 	int meniu()
 	{ 
 		system("cls");	
	    
 		cout<<"\n\n\t *** MENIU STUDENT ***"<<endl;
 		cout<<"\t  1. Insert STUDENT  "<<endl;
 		cout<<"\t  2. Show STUDENT  "<<endl;
 		cout<<"\t  3. Cautare student dupa nume  "<<endl;
 		cout<<"\tESC. EXIT  "<<endl;
	
 		return _getch(); 
 	}
 	
 	
 	int meniu_note()
 	{
 		cout<<"\n\n\t *** MENIU EDITARE NOTE *** "<<endl;
		cout<<"\t 1. Continuare introducere note (temporar nu functioneaza) "<<endl;
 		cout<<"\t 2. Reintroducerea note "<<endl;
 		
 		return _getch(); 
 	}
	
	
 	void edit_info_nume(int *n)
 	{	
 		system("cls");

	 	cin.getline(S[*n].nume,255);
	 		
	 	char replace_nume[256];
	 	
	 	cout<<"\n Cu ce nume doriti sa schimbati numele studentului ales ? :: ";
	 	cin.getline(replace_nume,255);	
		
 		strcpy(S[*n].nume, replace_nume);
	 	
	 	cout<<endl;
 	}
 	
 	
 	void edit_info_varsta(int *n)
 	{ 
 		system("cls");
 		
 		int replace_varsta;

	 	cout<<"\n Cu ce varsta doriti sa schimbati varsta de "<<S[*n].ani<<" ani ?  :: ";
	 	cin>>replace_varsta;	
		
	 	S[*n].ani = replace_varsta;
	 	cout<<endl;
 	}
 	
 	
 	void edit_note(int *n)
 	{
 		system("cls");
 		
 		switch( meniu_note() )
 		{	
 			case 50 : 
 			{			
			 	cout<<endl;	 
			 	S[*n].media = 0; S[*n].NrNOTE = 0; 
	 	
	 			do
	   			{
	   	 			cout<<"\t Enter nota ["<<S[*n].NrNOTE+1<<"]   :: "; cin>>S[*n].NOTE[ S[*n].NrNOTE ].NOTA;
	   	 	
	   	 			S[*n].media += S[*n].NOTE[  S[*n].NrNOTE  ].NOTA;
	   	 		
	   	 			S[*n].NrNOTE++;
	   	 		
	   	 			cout<<"\t --   NOTE   --   ESC - exit, any key ...."<<endl;
	   	 	 	
	     		} 	while( _getch() != 27 );
	     		
	     		S[*n].media = S[*n].media / S[*n].NrNOTE;
	      	   			
	     	} break;
	     	
//	     	case 49 :
//	     	{
//	     		
//	 			cout<<"\n\n Media curenta este :: "<<S[*n].media<<endl<<endl;
//	 			
//	     		do
//	   			{
//	   	 			cout<<" Enter nota ["<<S[*n].NrNOTE+1<<"]   :: "; cin>>S[*n].NOTE[ S[*n].new_NrNOTE].NOTA;
//	   	 	
//	   	 			S[*n].new_media += S[*n].NOTE[  S[*n].new_NrNOTE  ].NOTA;
//	   	 		
//	   	 			S[*n].new_NrNOTE++;
//	   	 			
//	   	 			S[*n].NrNOTE++;
//	   	 		
//	   	 			cout<<"   --   NOTE   --   ESC - exit, any key ...."<<endl;
//	   	 	 	
//	     		} 	while( _getch() != 27 );
//	     		
//	     		S[*n].new_media = S[*n].new_media/S[*n].new_NrNOTE;
//	     		
//	     		S[*n].media = ( S[*n].media + S[*n].new_media )/2;
//	     		
//	     	} break;
		}
 	}
 	
 	
 	
 	int meniu_stud()
 	{ 
 		cout<<endl;
 		system("pause");	
	    
 		cout<<"\n\n\t *** MENIU STUDENT ALES ***"<<endl;
 		cout<<"\t  1. Editare Informatie Nume  "<<endl;
 		cout<<"\t  2. Editare Informatie Varsta  "<<endl;
 		cout<<"\t  3. Editare Note  "<<endl;
 		cout<<"\tESC. EXIT  "<<endl;
	 	
	 	return _getch(); 
 	}
	
	
 	void nume_stud(int *n)
 	{	
 		do
 		{
	 		system("cls");
	 		S[*n].nume;
	 	
 			char stud[256];
 			cout<<"\n Dati numele student cautat :: ";
 			cin>>stud;
 		
	 		
 			for (int i=0; i<*n; i++)
 			{				
 					if ( strcmp(S[i].nume, stud) == 0 )
 					{
 						do
 						{	 
	 						line1();cout<<(char)186<<setw(3)<<"ID"<<setw(3)<<(char)186<<setw(10)<<"NUME"
				 					<<setw(6)<<(char)186<<setw(7)<<"ANI"<<setw(4)<<(char)186
							 		<<setw(8)<<"MEDIA"<<setw(3)<<(char)186<<endl;line2();
	
	 						cout<<(char)186<<setw(3)<<i+1
		   						<<setw(3)<<(char)186<<setw(9)<<S[i].nume
				 				<<setw(7)<<(char)186<<setw(6)<<S[i].ani
		 						<<setw(5)<<(char)186<<setw(8)<<S[i].media
		 						<<setw(3)<<(char)186<<endl;
						 		
		  						line3();		  				
					 							 
		  						switch( meniu_stud() )
		  						{
		  							case 49 : edit_info_nume(&i); break;
				 		 			case 50 : edit_info_varsta(&i); break;
				 		 			case 51 : edit_note(&i); break;
				 		 			case 27 : break;
					 			}
					 			
					 	} while( _getch() != 27 ); 	
		 			
			 		}	
			 	
		 	} 
					
	 	} while( _getch() != 27 );
		
 	}
 	
 	
 	void insert(int *n) 
 	{
 	    do
 		{  
		 	system("cls");
		 	cout<<endl;
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

	 			line1();cout<<(char)186<<setw(3)<<"ID"<<setw(3)<<(char)186<<setw(10)<<"NUME"
				 			<<setw(6)<<(char)186<<setw(7)<<"ANI"<<setw(4)<<(char)186
						 	<<setw(8)<<"MEDIA"<<setw(3)<<(char)186<<endl;line2();
	
	 			for(int i=in; i < sf ; i++)
		 		{
	 				cout<<(char)186<<setw(3)<<i+1
		   				<<setw(3)<<(char)186<<setw(9)<<S[i].nume
				 		<<setw(7)<<(char)186<<setw(6)<<S[i].ani
		 				<<setw(5)<<(char)186<<setw(8)<<S[i].media
					 	<<setw(3)<<(char)186<<endl;
					 	if (i<sf-1)
		  				line2();
	 			}
	 			
	 			line3();
		
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
	 
	 
 	int main() 
 	{   
	   	srand(time(0));
	    
	 	int n=0;     
	 
 		// meniu
		  
 		// 1. structura student cu minim 4 elem.
 		// 2. meniu. 
 		//    1. insert struct
 		//    2. show struct 
		     
	 	while(1)
	 	{	
		  	switch( meniu() )
		  	{
		  		
		  		case 49 :  insert(&n); system("pause"); break; 
		  		case 50 :  show(n); system("pause"); break; 
		  		
		  		case 51 :  nume_stud(&n); system("pause"); break;

		  		case 27 :  exit(0);
		 	}
		  	
	 	}
	 	
	 	
	   	return 0;   
 	}
    
