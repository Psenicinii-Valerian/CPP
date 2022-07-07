#include <iostream>
#include <cstdlib>
#include <ctime>
#include <conio.h>
using namespace std;
int main()
{
    int R=0, C=0;
    A:
    cout<<"\n1. Ce tip de date are raspunsul expresiei 2+2?"<<endl;
    cout<<"\t a. CHAR"<<endl;
    cout<<"\t b. DOUBLE"<<endl;
    cout<<"\t c. INT"<<endl;
    
    switch (_getch())
    {
    case 'a' : cout <<"ERROR!"<<endl;        break;  //sau case 97
    case 'b' : cout <<"ERROR!"<<endl;        break;  //sau case 98
    case 'c' : cout <<"CORRECT!"<<endl; R++; break;  //sau case 99
    default  : cout <<"ALEGE UNA DINTRE VARIANTELE POSIBILE (a,b sau c) !"<<endl; goto A;
    }
    C++;
    cout<<"Numarul de intrebari la care ati raspuns: "<<C<<" Raspunsuri corecte :"<<R<<endl;
   
    B:
    cout<<"\n2. Ce i se va intampla programului daca vom folosi break?"<<endl;
    cout<<"\t a. VA DA EROARE "<<endl;
    cout<<"\t b. SE VA INTRERUPE UN CORP"<<endl;
    cout<<"\t c. SE VA INCHIDE APLICATIA"<<endl;
    
    switch (_getch())
    {
    case 'a' : cout <<"ERROR!"<<endl;         break;  //sau case 97
    case 'b' : cout <<"CORRECT!"<<endl; R++;  break;  //sau case 98
    case 'c' : cout <<"ERROR!"<<endl;         break;  //sau case 99
    default  : cout <<"ALEGE UNA DINTRE VARIANTELE POSIBILE (a,b sau c) !"<<endl; goto B;
    }
    C++;
    cout<<"Numarul de intrebari la care ati raspuns: "<<C<<" Raspunsuri corecte :"<<R<<endl;
    
    
    C:  
    cout<<"\n3. switch este un..."<<endl;
    cout<<"\t a. OPERATOR LOGIC"<<endl;
    cout<<"\t b. OPERATOR CONDITIE"<<endl;
    cout<<"\t c. FUNCTIE"<<endl;
    
    switch (_getch())
    {
    case 'a' : cout <<"ERROR!"<<endl;         break;  //sau case 97
    case 'b' : cout <<"CORRECT!"<<endl; R++;  break;  //sau case 98
    case 'c' : cout <<endl;                   break;  //sau case 99
    default  : cout <<"ALEGE UNA DINTRE VARIANTELE POSIBILE (a,b sau c) !"<<endl; goto C;
    }
    C++;
    cout<<"Numarul de intrebari la care ati raspuns: "<<C<<" Raspunsuri corecte :"<<R<<endl;
    
    
    D:
    cout<<"\n4. Post-incrementare este in:"<<endl;
    cout<<"\t a. a++"<<endl;
    cout<<"\t b. b--"<<endl;
    cout<<"\t c. c-=1"<<endl;
    
    switch (_getch())
    {
    case 'a' : cout <<"CORRECT!"<<endl; R++;   break;  //sau case 97
    case 'b' : cout <<"ERROR!"<<endl;          break;  //sau case 98
    case 'c' : cout <<"ERROR!"<<endl;          break;  //sau case 99
    default  : cout <<"ALEGE UNA DINTRE VARIANTELE POSIBILE (a,b sau c) !"<<endl; goto D;
    }
    C++;
    cout<<"Numarul de intrebari la care ati raspuns: "<<C<<" Raspunsuri corecte :"<<R<<endl;
    
    
    E:
    cout<<"\n5. Functia rand() apartine bibliotecii:"<<endl;
    cout<<"\t a. <iostream>"<<endl;
    cout<<"\t b. <conio.h>"<<endl;
    cout<<"\t c. <cstdlib>"<<endl;
    
    switch (_getch())
    {
    case 'a' : cout <<"ERROR!"<<endl;          break;  //sau case 97
    case 'b' : cout <<"ERROR!"<<endl;          break;  //sau case 98
    case 'c' : cout <<"CORRECT!"<<endl; R++;   break;  //sau case 99
    default  : cout <<"ALEGE UNA DINTRE VARIANTELE POSIBILE (a,b sau c) !"<<endl; goto E;
    }
    C++;
    cout<<"Numarul de intrebari la care ati raspuns: "<<C<<" Raspunsuri corecte :"<<R<<endl;
   
   
    F:
    cout<<"\n6. In tabelul ASCII simbolul 'A' are valoarea: "<<endl;
    cout<<"\t a. 65"<<endl;
    cout<<"\t b. 97"<<endl;
    cout<<"\t c. 1"<<endl;
    
    switch (_getch())
    {
    case 'a' : cout <<"CORRECT!"<<endl; R++;    break;  //sau case 97
    case 'b' : cout <<"ERROR  !"<<endl;         break;  //sau case 98
    case 'c' : cout <<"ERROR!"<<endl;           break;  //sau case 99
    default  : cout <<"ALEGE UNA DINTRE VARIANTELE POSIBILE (a,b sau c) !"<<endl; goto F;
    }
    C++;
    cout<<"Numarul de intrebari la care ati raspuns: "<<C<<" Raspunsuri corecte :"<<R<<endl;
    
    
    G:
    cout<<"\n7. (double)int * int este: "<<endl;
    cout<<"\t a. O CONVERSIE EXPLICITA"<<endl;
    cout<<"\t b. O CONVERSIE IMPLICITA"<<endl;
    cout<<"\t c. O FUNCTIE"<<endl;
    
    switch (_getch())
    {
    case 'a' : cout <<"CORRECT!"<<endl; R++;      break;  //sau case 97
    case 'b' : cout <<"ERROR!"<<endl;            break;  //sau case 98
    case 'c' : cout <<"ERROR!"<<endl;            break;  //sau case 99
    default  : cout <<"ALEGE UNA DINTRE VARIANTELE POSIBILE (a,b sau c) !"<<endl; goto G;
    }
    C++;
    cout<<"Numarul de intrebari la care ati raspuns: "<<C<<" Raspunsuri corecte :"<<R<<endl;
   
   
    H:
    cout<<"\n8. Un comentariu liniar se realizeaza prin: "<<endl;
    cout<<"\t a. /* COMENTARIU */"<<endl;
    cout<<"\t b. // COMENTARIU"<<endl;
    cout<<"\t c. {COMENTARIU}"<<endl;
    
    switch (_getch())
    {
    case 'a' : cout <<"ERROR!"<<endl;            break;  //sau case 97
    case 'b' : cout <<"CORRECT!"<<endl;  R++;    break;  //sau case 98
    case 'c' : cout <<"ERROR!"<<endl;            break;  //sau case 99
    default  : cout <<"ALEGE UNA DINTRE VARIANTELE POSIBILE (a,b sau c) !"<<endl; goto H;
    }
    C++;
    cout<<"Numarul de intrebari la care ati raspuns: "<<C<<" Raspunsuri corecte :"<<R<<endl;
    
    
    I:
    cout<<"\n9. O valoare aleatorie din intervalul 10-20 se obtine din: "<<endl;
    cout<<"\t a. rand()%10-20"<<endl;
    cout<<"\t b. rand()%20"<<endl;
    cout<<"\t c. rand()%10+10"<<endl;
    
    switch (_getch())
    {
    case 'a' : cout <<"ERROR!"<<endl;            break;  //sau case 97
    case 'b' : cout <<"ERROR!"<<endl;            break;  //sau case 98
    case 'c' : cout <<"CORRECT!"<<endl;  R++;    break;  //sau case 99
    default  : cout <<"ALEGE UNA DINTRE VARIANTELE POSIBILE (a,b sau c) !"<<endl; goto I;
    }
    C++;
    cout<<"Numarul de intrebari la care ati raspuns: "<<C<<" Raspunsuri corecte :"<<R<<endl;


    J:
    cout<<"\n10. Biblioteca <conio.h> permite utilizarea operatiunii "<<endl;
    cout<<"\t a. _getch()"<<endl;
    cout<<"\t b. cout"<<endl;
    cout<<"\t c. if"<<endl;
    
    switch (_getch())
    {
    case 'a' : cout <<"CORRECT!"<<endl; R++;     break;  //sau case 97
    case 'b' : cout <<"ERROR!"<<endl;            break;  //sau case 98
    case 'c' : cout <<"ERROR!"<<endl;            break;  //sau case 99
    default  : cout <<"ALEGE UNA DINTRE VARIANTELE POSIBILE (a,b sau c) !"<<endl; goto J;
    }
    C++;
    cout<<"Numarul de intrebari la care ati raspuns: "<<C<<" Raspunsuri corecte :"<<R<<endl;
    
    cout<<"\nVa multumim pentru completarea testului!!!"<<endl;
    cout<<"Aveti "<<R<<" raspunsuri corecte si "<<10-R<<" raspunsuri gresite"<<endl;
    cout<<"Asadar, nota dumneavoastra este "<<R<<"/10"<<endl;
    

    return 0;
}
