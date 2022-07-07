#include <iomanip>
    #include <iostream>   //  cout si cin 
    #include <cstdlib>  // <stdlib.h>   rand srand exit
    #include <ctime>    // <time.h>  time 
    #include <conio.h> 
    #include <cstring>  // string.h
    #include <windows.h>
    using namespace std;
 //  functii  
 /*
    returnare_tip_date   nume_functie(param1, param2, ... , paramN)
    {
     COD_FUNCTIE
     return returnare_nume_variabila;
 }
  */
  //  ierahia de functii
  // prototipul functiei - func. fara corp
  // returnare_tip_date   nume_functie(param1, param2, ... , paramN);
  void f2(int param1);
  void f1(int param1);
  int insertINT(char mess[256])
  {
   cout<<mess;
   int x;  
   cin>>x;
   return x; 
  }
  int insertINTrand(int X)
  {
    return rand()%X; 
  }
  void show(char mess[256], int x)
  {
     cout<<mess<<x<<endl; 
  }
  int abc(int a , int b , int c )
  {
   return a+b-c;
  }
  int suma(int s, int R)
  {
   return s+R;
  }
  int maximum(int max, int R)
  {
     return max < R ? R : max;
  }
    int main() 
 {   
    // a+b-c 
    // 1. fun. insert INT
    // 2. fun. show
    // 3. fun. calcul
 /*   
    int a,b,c;
    cout<<" Enter a,b,c ";
    cin>>a>>b>>c;
    cout<<" a= "<<a<<" b= "<<b<<" c= "<<c<<endl;
    int R = a+b-c;
    cout<<" R = a+b-c= "<<R<<endl;
 */
 /*
    int a = insertINT("Enter a="), b = insertINT("Enter b=");   
    int c = insertINT("Enter c=");
    show(" a = ",a);
    show(" b = ",b);  
    show(" c = ",c);
     int R = abc(a,b,c);
    show(" R = a+b-c = ",R);
    */  
     //  a+b-c, n
     // 1. a,b,c rand()
     // 2. suma R
 // 3. R max 
     int a,b,c, n , R , s=0 , max = INT_MIN ;
     n = insertINT(" Enter n= "); 
     for(int i=0; i<n; i++ )
 {
         a = insertINTrand(10); 
         b = insertINTrand(10); 
         c = insertINTrand(10); 
         show("\n i = ",i+1);
         show("  a = ",a);
         show("  b = ",b);
         show("  c = ",c);
         R = abc(a,b,c);
         show(" R = a+b-c =  ",R);
         s = suma(s,R) ; 
         max = maximum(max, R);
 }
 show("\n\n suma =  ",s);
 show("  max =  ",max);
    return 0;   
    }
    void f2(int param1)
       {
        param1++;
       cout<<" f2() "<<param1<<endl;
    f1(123); 
       } 
      void f1(int param1)
      {
       param1++;
       cout<<" f1() "<<param1<<endl;
       }
