#include <iomanip>
#include <iostream> // cout si cin
#include <cstdlib> // <stdlib.h> rand srand exit
#include <ctime> // <time.h> time
#include <conio.h>
#include <cmath>
using namespace std;
// 1. vector
// tip_date nume_multime[Nr_maximal_valori]; [x]
// element - nume_multime[pozitia sau index sau nr.ordine];

// 2. matrice
// tip_date nume_multime[Nr_maximal_lenii][Nr_maximal_coloane]; [x][y]
// elem. - nume_multime[poz._x_lenie][poz._y_coloana];

//1 ora - > 1min ... 2... ... 10
//[0][0][][] -> [1][][] ... [9][][]
//2 ora - > 1min ... 2... ... 10
//[1][0][][] -> [1][][] ... [9][][]
//...
//24 ora - > 1min ... 2... ... 10
//[24][0][][] -> [1][][] ... [9][][]
//SET CUB1ora, CUB2ora,... CUB24ora

int main()
{
srand( time(0) );
// 3D
// tip_date nume_multime[Nr_max_de_matrici][Nr_maximal_lenii][Nr_maximal_coloane]; [z][x][y]
// elem. - nume_multime[nr_matricei][poz._x_lenie][poz._y_coloana];

// SET de CUB3D
// tip_date nume_multime[Nr_max_de_CUBuri][Nr_max_de_matrici][Nr_maximal_lenii][Nr_maximal_coloane]; [q][z][x][y]
// 1 elem. - nume_multime[nr_cub][nr_matricei][poz._x_lenie][poz._y_coloana];

int SET[24][10][10][10];

int qn, zn, n, m;
cout<<" Enter nr. cub = ";
cin>> qn;
cout<<" Enter nr. matrix = ";
cin>> zn;
cout<<" Enter nr. linii = ";
cin>> n;
cout<<" Enter nr. coloane = ";
cin>> m;
for(int q=0; q<qn; q++)
{
for(int z=0; z<zn; z++)
{
for(int i=0; i<n; i++)
{
for(int j=0; j<m; j++)
{
SET[q][z][i][j] = rand()%10;
}
}
}
}

for(int q=0; q<qn; q++)
{
cout<<" CUB ["<<q+1<<"] "<<endl;
for(int z=0; z<zn; z++)
{
cout<<" Matricea ["<<z+1<<"] "<<endl;
for(int i=0; i<n; i++)
{
for(int j=0; j<m; j++)
{
cout<<setw(3)<<SET[q][z][i][j];
}
cout<<endl;
}
cout<<endl;
}
}
// 1. x(enter user) max, din 1 vector din 1 cub SET[0][0][0][j]

// pas. 1. alg. max
// pas. 2. max de x ori
// pas. 3. depistam poz. max.
// pas. 4. salvarea in vector a poz elem. max
// pas. 5. verificam daca poz. elem. max nu a fost depistat anterior
// pas. 6. excluderea elem. max

// x=3
//poz 0 1 2 3 4 5 6
//val 3 5 2 3 5 5 3
// max1 = 5 poz = 1
// max2 = 5 poz = 4
// max3 = 5 poz = 5
cout<<endl;
for(int q=0; q<qn; q++)
{ cout<<" vectorul["<<q<<"] ::";
for(int j=0; j<m; j++)
{
cout<<setw(3)<<SET[q][0][0][j];
}
cout<<endl;
}
int x, max, k=0, poz;
int vpoz[24][10];
bool verificare;
cout<<" Enter nr. maximuri = ";
cin>> x;
for(int q=0; q<qn; q++)
{
k=0;
while( k < x )
{
max = INT_MIN;
for(int j=0; j<m; j++)
{
if( max < SET[q][0][0][j] )
{
verificare=true;
for(int i=0; i < k; i++)
{
if( vpoz[q][i] == j ){ verificare=false; break; }
}
if( verificare )
{
max = SET[q][0][0][j];
poz = j;
}
}
}
cout<<k<<" max="<<max<<" poz = "<<poz<<endl;
vpoz[q][k]=poz;
k++;
}
cout<<endl;
}
for(int i=0; i<qn; i++)
{
cout<<"\n vectorul["<<i<<"] ::";
for(int j=0; j<x; j++)
{
cout<<setw(3)<<vpoz[i][j];
}
}

// cubX <=> cubY , X, Y enter user
// x(enter user) max, din 1 vector pentru fiecare cub
return 0;
}
