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
		cout<<(char)201<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)203<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205	<<(char)203<<endl;	   	
	}
	
	void line2()
	{
	cout<<(char)204<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)206<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)206<<endl;
	}
	
	void line3()
	{
	 cout<<(char)204<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)206<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)206<<endl;
	}
	
	struct stud
	{
		char nume[256];
		int ani;
	    double media; 
	
	}S[100];
	 
	 int meniu()
	 { 
	    system("cls");	
	    
	    cout<<"\n\n\t *** MENIU STUDNET ***"<<endl;
	    cout<<"\t  1. Insert STUDNET  "<<endl;
		cout<<"\t  2. Show STUDNET  "<<endl;
		cout<<"\tESC. EXIT  "<<endl;
	
		return _getch(); 
	 }
	 
	 void insert(int *n) 
	 {
	    do
		{  
		 system("cls");
	   	 cout<<" Student ["<<(*n)+1<<"]"<<endl;
	   	 
	   	 cout<<" Enter nume  :: "; cin>>S[*n].nume;
	   	 cout<<" Enter ani   :: "; cin>>S[*n].ani;
	   	 cout<<" Enter media :: "; cin>>S[*n].media;
	    
	     (*n)++;
		 
		   cout<<" ESC - exit,  any key ...."<<endl;
		   
		 }while( _getch() != 27 );
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
{	system("cls");

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
	
	
	
	   
	    } else
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
		  //     1. insert struct
		  //     2. show struct 
		     
		  while(1)
		  {
		  	
		  	switch( meniu() )
		  	{
		  		
		  		case 49 :  insert(&n); system("pause"); break; 
		  		case 50 :  show(n); system("pause"); break; 
		  		
		  		case 27 : exit(0);
			}
		  	
		  }
		  
		    
		  
		  
	   return 0;   
    }
    
