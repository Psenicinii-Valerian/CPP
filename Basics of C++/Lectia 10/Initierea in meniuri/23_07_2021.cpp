#include <iostream>
#include <cstdlib>
#include <ctime>
#include <conio.h>
using namespace std;
int main()
{
    /*
	srand( time(0) );
    /// ASCII 
    cout<<" int A = "<<(int)'A'<<" char 65 = "<<char(65)<<endl;
    cout<<" int a = "<<(int)'a'<<" char 97 = "<<char(97)<<endl;
         char KEY;  
    ASCII:
     KEY = _getch();
     cout<<" CHAR key= "<<KEY<<" INT key= "<<int(KEY)<<endl; 
    goto ASCII;
	*/
//	
////	int x;
//	
//	X:
//	cout<<"Enter [0..3] x = ";
//	cin>>x;
	
//	     if (x==0) cout <<"Zero ["<<x<<"]"<<endl;
//	else if (x==1) cout <<"Unu ["<<x<<"]"<<endl;
//	else if (x==2) cout <<"Doi ["<<x<<"]"<<endl;
//	else if (x==3) cout <<"Trei ["<<x<<"]"<<endl;
//	else cout<<"["<<x<<"]"<<" > 3 "<<endl;
//	goto X;

//	switch (_getch())
//	{
//	case 48 : cout <<"Zero"<<endl; 	break;
//	case 49 : cout <<"Unu"<<endl;   break;
//	case 50 : cout <<"Doi"<<endl;   break;
//	case 51 : cout <<"Trei"<<endl;  break;
//    case 27 : exit(0);
//	}
//    goto X;
  int C=0, R=0;
  X:
    cout<<"\n1. Ce tip de date are raspunsul expresiei 2+2?"<<endl;
    cout<<"\t a. CHAR"<<endl;
    cout<<"\t b. DOUBLE"<<endl;
    cout<<"\t c. INT"<<endl;
    
    switch (_getch())
    {
    case 'a' : cout <<"ERROR!"<<endl;    break;  //sau case 97
    case 'b' : cout <<"ERROR!"<<endl;    break;  //sau case 98
    case 'c' : R++ && cout <<"CORRECT!"<<endl;  break;  //sau case 99
    default  : cout <<"ALEGE UNA DINTRE VARIANTELE POSIBILE (a,b sau c) !"<<endl;
    } 
    C++;
    cout<<"C="<<C<<" Raspunsuri corecte:"<<R<<endl;
    if (C<10)goto X;

	return 0;
}
