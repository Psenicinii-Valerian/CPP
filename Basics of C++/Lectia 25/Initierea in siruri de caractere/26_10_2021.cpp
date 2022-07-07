#include <iomanip>
#include <iostream>		// cout si cin
#include <cstdlib>		// <stdlib.h> rand srand exit
#include <ctime> 		// <time.h> time
#include <conio.h>
#include <cstring>  	//string.h
using namespace std;

//Siruri de caractere

int main()
{
srand( time(0) );

/*
char s1[]="step 2021";
cout<<" S1 = "<<s1<<endl;

char s2[10]="step 2021";
cout<<" S2 = "<<s2<<endl;

int x[]={123,321,123,321};
for (int i=0; i < 4; i++) cout<<" x["<<i<<"] = "<<x[i]<<endl;

char s3[]={'a','b','c','d'};
cout<<" S3 = "<<s3<<endl;

char s4[5]={'a','#','1',','};
cout<<" S4 = "<<s4<<endl;

for (int i=0; i<5; i++)
cout<<" S4["<<i<<"] = "<<s4[i]<<endl;

char sir[256];

cout<<" Enter sir = ";
cin>>sir;

cout<<" Sir = "<<sir<<endl;

// Sa se afiseze cate un simbol din sirul sir
// for ( int i=0; sir[i] != '\0'; i++) cout<<"sir["<<i<<"] = "<<sir[i]<<endl;
int i=0;
while ( sir[i] != '\0')

{
	cout<<" sir["<<i<<"] = "<<sir[i]<<endl;
	i++;
}

int CC=-1;
i=0;

while ( sir[i] != '\0')

{
	if ( sir[0] == sir [i] ) CC++;
	i++;
}

cout<<sir[0]<<" din sir se repeta de "<<CC<<" ori"<<endl; 

*/

/*

// getline

char sir[256];

cout<<" Enter sir = ";
cin.getline(sir,255);

cout<<" Sir = "<<sir<<endl;


// contor nr. spatii

int i=0, CC=0;

// 1 varianta
//while ( sir[i] != '\0')
//
//{
//	if ( sir[i] == ' ') CC++;
//	i++;
//}

// 2 varianta

while ( sir[i] != '\0')

{
	if ( int(sir[i]) == 32) CC++;
	i++;
}

cout<<" \' \' se repeta de "<<CC<<" ori"<<endl;

*/

/*

//string.h

// Functiile principale string.h (6)

// 1. strlen(sir) - functia returneaza numarul de simboluri din sir

	char s1[]="step 2021";
	cout<<" s1 = "<<s1<<endl<<endl;

	cout<<" 1. strlen s1 = "<<strlen(s1)<<endl;
	for ( int i=0; i < strlen(s1) ; i++) cout<<" - s1["<<i<<"] = "<<s1[i]<<endl;
	cout<<endl;

// 2. strcpy (s2,s1) - functia copie s1 in s2 ( din dreapta in stanga )
	char s2[10];
	strcpy(s2,"$");
//	strcpy(s2,s1);
	cout<<" 2. strcpy (s2,s1) = "<<s2<<" strlen="<<strlen(s2)<<endl;
	cout<<endl;
	
// 3. strcat (s2,s1) - functia de adaugare a sirului s1 la s2
	strcat(s2,"+");    //utilizam ghilimelele duble (" ") pentru ca lucram cu siruri si nu cu simboluri
	strcat(s2,s1);
	cout<<" 3. strcat (s2,s1) = "<<s2<<" strlen="<<strlen(s2)<<endl;
	
// 4. strcmp (s1,s2) - functia compara 2 siruri prin 2 pasi:
					   // 1 pas - verifica lungimea sirurilor (la coincidenta lungimilor)
					   // 2 pas - verificale simbol cu simbol
					   // s1 == s2 => 0; s1 < s2 => -1; s1 > s2 => 1	
	
	if ( strcmp (s1, "step 2021") == 0 ) cout<<" s1 == \"step2021\" "<<endl;
	else cout<<" s1 != \"step2021\" "<<endl;
	cout<<endl;
	
// 5. strchr (s1, 'a') - functia intoarce adevar daca simbolul 'a' s-a gasit in s1, minimum o data
	if ( strchr (s1, ' ') ) cout<<" s1 este \' \' "<<endl;
	else cout<<" s1 nu este \' \' "<<endl;
	
	if ( strchr (s1, 'a') ) cout<<" s1 este \' \' "<<endl;
	else cout<<" s1 nu este \'a\' "<<endl;
	
// 6. strstr (s1,s2) - daca sirul s2 se contine in s1 functia intoarce adevar
	if ( strstr (s1, s2) ) cout<<" s2 se contine in s1 "<<endl;
	else cout<<" s2 nu se contine in s1 "<<endl;
	
	if ( strstr (s1, " 20") ) cout<<" \" 20\" se contine s1 "<<endl;
	else cout<<" \" 20\" nu se contine s1 "<<endl;
	
*/
	
// sa se realizeze algoritmul de introducere a parolei - password 1234 ****
	
	char pass[100];
	bool K=true;
	int key, i=0;
	
	cout<<"\n\n\t Enter password :: ";
	
	while(K)
	{
		key=_getch();
		
		if ( key == 13 )
		{
			pass[i] = '\0';
			if ( strcmp(pass,"step") == 0 ) K=false;
				
				else
				{	
					system("cls");
					cout<<"\n\n\t ERROR password ! "<<endl;
					system("pause");
					
					system("cls");
					cout<<"\n\n\t Enter password :: ";
					i=0;
				}	    
		}
			
		else if ( key == 8 )
		{
			if( i > 0 ) { cout<<"\b \b"; i--; }
		}
		
		else 
		{
		 	pass[i] = key;
			cout<<"*";
			i++;
		}
	}
	
	system("cls");
	cout<<"Password OK"<<endl;
return 0;
}

