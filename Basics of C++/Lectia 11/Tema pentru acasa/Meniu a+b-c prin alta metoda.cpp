#include <iomanip>
#include <iostream>   //  cout si cin 
#include <cstdlib>   // <stdlib.h>   rand srand exit
#include <ctime>    // <time.h>  time 
#include <conio.h> 
using namespace std;
int main() 

 { 
   srand( time(0) );
     int a=NULL, b=NULL, c=NULL, R=NULL;
 X: 
 system("cls");
     cout<<"\n\n\t MENIU " <<endl;
     cout<<"\t  1. Enter valoarea a " <<endl;
     cout<<"\t  2. Enter valoarea b " <<endl;
     cout<<"\t  3. Enter valoarea c " <<endl;
     cout<<"\t  4. Caluleaza a+b-c " <<endl;
     cout<<"\t  5. Afisati rezultatul " <<endl;
     cout<<"\tESC. Exit"<<endl ;
     switch( _getch() )
     {
      case 49: cout<<" Enter a="; cin>>a; R=NULL; break;
      case 50: cout<<" Enter b="; cin>>b; R=NULL; break;
      case 51: cout<<" Enter c="; cin>>c; R=NULL; break;
      case 52:  
     if( a == NULL) cout<<"  Error:: Enter a !"<<endl; 
     if( b == NULL ) cout<<" Error:: Enter b !"<<endl; 
     if( c == NULL ) cout<<" Error:: Enter c !"<<endl; 
     if( a!=NULL && b!=NULL&& c!=NULL)
     { 
       cout<<"Sa calculat a+b-c  "<<endl;
    R = a+b-c; 
   }
  break;
      case 53: 
         if( R==NULL ) cout<<" Error:: Executati punctul 4 din meniu !"<<endl; 
     else cout<<setw(3)<<a<<"+"<<setw(3)<<b<<"-"<<setw(3)<<c<<"="<<setw(3)<<R<<endl;
 break;
      case 27: exit(0); 
 }
     system("pause");
 goto X;
     // prin alte 3 algoritmi 
  return 0;  
 }

