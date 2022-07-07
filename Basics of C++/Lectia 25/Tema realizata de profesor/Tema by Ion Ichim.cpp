#include <iomanip>
#include <iostream> // cout si cin
#include <cstdlib> // <stdlib.h> rand srand exit
#include <ctime> // <time.h> time
#include <conio.h>
#include <cstring> // string.h

#include <windows.h>

using namespace std;

// Siruri de caractere

// char => '\0' int => 0

// Filtru de Litere mari min 2

int main()
{
	
srand( time(0) );
char pass[100];

int key, i=0, PE=0, FLM=0 ;

bool K=true;

cout<<" \n\n\t FLM["<<FLM<<"] Enter password ["<<PE+1<<"] :: ";

while(K)
{

key = _getch();

	if( key == 13 )
	{
		pass[i]='\0';

	  if( strcmp(pass,"sTEp") == 0 ) K=false;
		else
		{
			system("cls");
			cout<<" \n\n\t --- Error password ["<<PE+1<<"] max 3 --- "<<endl;
			system("pause");

			PE++;

	  if( PE == 3 )
	  {


		for(int i=0; i<20; i++)
		{
			system("cls");

			if( i < 10 )cout<<" \n\n\t --- Error password TIMER [00:00:0"<<i<<"] sec --- "<<endl;
			else cout<<" \n\n\t --- Error password TIMER [00:00:"<<i<<"] sec --- "<<endl;

			Sleep(1000);
		}

		PE=0;

	  }

	FLM=0;
	i=0;

	system("cls");
	cout<<" \n\n\t FLM["<<FLM<<"] Enter password ["<<PE+1<<"] :: ";


		}
	}
	
	else if( key == 8 )
	{
		if( i > 0 )
		{
			
		  if( pass[i-1]>=65 && pass[i-1]<91 )
		  {
		  	FLM--;

			system("cls");
			cout<<" \n\n\t FLM["<<FLM<<"] Enter password ["<<PE+1<<"] :: ";

			for(int j=0; j<i; j++)cout<<"*";

		  }

		cout<<"\b \b"; i--;

		}
	}
	
	else if( key == 27 )
	{
		exit(0);
	}
	
	else
	{

	pass[i] = key;

	cout<<"*";
	i++;

	  if( key>=65 && key<91 )
		{
		FLM++;

		system("cls");
		cout<<" \n\n\t FLM["<<FLM<<"] Enter password ["<<PE+1<<"] :: ";

		for(int j=0; j<i; j++)cout<<"*";

		}


	}

}

system("cls");

cout<<" password OK "<<endl;

return 0;
}
