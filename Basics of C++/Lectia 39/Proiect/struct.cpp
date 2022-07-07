
 	struct user
 	{
 		char email[250];
 		char password[50];
 		
 	}U[100];	


 	struct stud
 	{
 		char nume[256];
 		int ani;
 		
 		double media=0; 
	    
 		int NrNOTE = 0;
 		struct note
 		{
 			char DIS[256];
 			char PROF[256];
 			int NOTA;
 			
	 	}NOTE[100];
		
 	}S[1000];
 	
 	
 	char FNS[250];
 	char FNL[250];
