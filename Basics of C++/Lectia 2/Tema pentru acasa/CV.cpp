#include <iostream>
using namespace std;
int main ()
{
	int an,ap,v;
	char nume,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,b1,b2,b3,b4,b5,b6;
	double med;
	cout << "Care este numele tau?" << endl;
	cin >>a>>b>>c>>d>>e>>f>>g>>h>>i>>j; //Psenicinii
	cout << "\a\nBine, am inteles" << "\nDar care este prenumele tau?" <<endl;
    cin >>k>>l>>m>>n>>o>>p>>q>>r; //Valerian
	ap=2021;
	cout << "\nIn ce an te-ai nascut?" <<endl; 
	cin >>an; //2003
	v=ap-an; //2021-2003=18
	cout << "\nCe medie doresti sa ai la STEP?"<<endl;
	cin >>med; //9.8575471
	cout << "\nCe hobby-uri ai?"<<endl;
	cin >> a1>>a2>>a3>>a4>>a5>>a6>>a7>>a8>>a9>>a10>>a11 //Programarea
	>>b1>>b2>>b3>>b4>>b5>>b6; //jocuri
	cout << "\n      CV" <<"\nNume: "<<a<<b<<c<<d<<e<<f<<g<<h<<i<<j<<endl;
	cout << "Prenume: " <<k<<l<<m<<n<<o<<p<<q<<r<<"\nVarsta: "<<v<<endl;
	cout << "Media dorita de la STEP: " <<med 
	<<"\nHobby-uri: "<<a1<<a2<<a3<<a4<<a5<<a6<<a7<<a8<<a9<<a10<<a11<<", "
	<<b1<<b2<<b3<<b4<<b5<<b6;
	cout << "\n  Va multumesc pentru atentie!";
	return 0;
}
