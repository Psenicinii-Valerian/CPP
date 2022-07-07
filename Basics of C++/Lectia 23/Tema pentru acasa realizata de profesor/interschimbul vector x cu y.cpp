	#include <iomanip>
    #include <iostream>   //  cout si cin 
    #include <cstdlib>  // <stdlib.h>   rand srand exit
    #include <ctime>    // <time.h>  time 
    #include <conio.h> 
    #include <cmath> 
    using namespace std;
 // 1.  vector 
    //  tip_date nume_multime[Nr_maximal_valori];    [x]
    // element - nume_multime[pozitia sau index sau nr.ordine]; 
 // 2. matrice
 //  tip_date nume_multime[Nr_maximal_lenii][Nr_maximal_coloane];     [x][y] 
 //  elem. -  nume_multime[poz._x_lenie][poz._y_coloana];    
    int main() 
 {   
   srand( time(0) );
  /* 
   // 3D
   // tip_date nume_multime[Nr_max_de_matrici][Nr_maximal_lenii][Nr_maximal_coloane];     [z][x][y] 
     //  elem. -  nume_multime[nr_matricei][poz._x_lenie][poz._y_coloana];  
   int CUB[50][100][100];
 for(int z=0; z<50; z++)
   {
    for(int i=0; i<10; i++)
    {
      for(int j=0; j<10; j++)
      {
     CUB[z][i][j] = rand()%10;
    } 
  }
   } 
     for(int z=0; z<50; z++)
   {
     cout<<" Matricea ["<<z+1<<"] "<<endl;
    for(int i=0; i<2; i++)
    {
      for(int j=0; j<2; j++)
      {
     cout<<setw(3)<<CUB[z][i][j];
    }
    cout<<endl; 
  }
   } 
  // 1. suma per matrice
 for(int z=0, s; z<50; z++)
   {
     s=0; 
    for(int i=0; i<2; i++)
    {
      for(int j=0; j<2; j++)
      {
     s+=CUB[z][i][j];
    } 
  }
    cout<<" suma ["<<z+1<<"]="<<s<<endl;
   } 
        // 2. max per matrice
 for(int z=0, max; z<50; z++)
   {
       //max = INT_MIN;  
     //max = -1;
       max = CUB[z][0][0];
    for(int i=0; i<2; i++)
    {
      for(int j=0; j<2; j++)
      {
     if( max < CUB[z][i][j] ) max=CUB[z][i][j];
    } 
  }
    cout<<" max ["<<z+1<<"]="<<max<<endl;
   } 
       */
   ///    n [] nr. elme. random  
  int TAB[500][1000],n;
  cout<<" Enter nr. vectori =";
  cin>>n;
   for(int i=0; i < n; i++ )
   {
     //cout<<" Pentru V"<<i+1<<" Enter nr. elemnete = ";
     //cin>>TAB[i][0];
     TAB[i][0] = rand()%10+10;
     for(int j=1; j <= TAB[i][0] ; j++)
     {
      //cout<<" Enter val. V"<<i+1<<"["<<j<<"]= ";
        //cin>>TAB[i][j];
         TAB[i][j] = rand()%10+10; 
     }
   }
   cout<<endl;
  for(int i=0; i < n; i++ )
   {
     cout<<"  V"<<i+1<<"["<<TAB[i][0]<<"] :: ";
      for(int j=1; j <= TAB[i][0] ; j++)
     {
        cout<<setw(3)<<TAB[i][j];
     }
      cout<<endl;
   }
   cout<<endl;
    //  4 . vx[] <=> vy[] , x,y enter user   
  int x=1, y=2, W1, W2;
  bool X;
     cout<<"1.  X"<<x+1<<"["<<TAB[x][0]<<"] :: ";
      for(int j=1; j <= TAB[x][0] ; j++)
     {
        cout<<setw(3)<<TAB[x][j];
     }
      cout<<endl;
    cout<<"1.  Y"<<y+1<<"["<<TAB[y][0]<<"] :: ";
      for(int j=1; j <= TAB[y][0] ; j++)
     {
        cout<<setw(3)<<TAB[y][j];
     }
      cout<<endl;
  // 4 1 2 3 4
  // 2 1 2 ? ?
   if( TAB[x][0] >= TAB[y][0] ){   X=true; W1=TAB[x][0]; W2=TAB[y][0];} 
    else {  X=false; W1=TAB[y][0]; W2=TAB[x][0]; }
   if( X ) 
   {
     for(int j=0, temp; j <= W1 ; j++)
     {
     if( j <= W2 )
 {
      temp = TAB[x][j];
        TAB[x][j] = TAB[y][j];
        TAB[y][j] = temp; 
 }
  else
  {
    TAB[y][j] = TAB[x][j];  
  } 
     }
   }
    else
    {
     for(int j=0, temp; j <= W1 ; j++)
     {
     if( j <= W2 )
 {
      temp = TAB[y][j];
        TAB[y][j] = TAB[x][j];
        TAB[x][j] = temp; 
 }
  else
  {
    TAB[x][j] = TAB[y][j];  
  } 
     }
   }
   cout<<endl;
     cout<<"2.  X"<<x+1<<"["<<TAB[x][0]<<"] :: ";
      for(int j=1; j <= TAB[x][0] ; j++)
     {
        cout<<setw(3)<<TAB[x][j];
     }
      cout<<endl;
    cout<<"2.  Y"<<y+1<<"["<<TAB[y][0]<<"] :: ";
      for(int j=1; j <= TAB[y][0] ; j++)
     {
        cout<<setw(3)<<TAB[y][j];
     }
      cout<<endl;
  return 0;  
 }
