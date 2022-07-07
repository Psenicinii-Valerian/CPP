    #include <iostream>
    #include <ctime>
    #include <cstdlib>
    #include <iomanip>

    #include <exception> // avem accesul la clasa de exceptie
    #include <string>    // avem accesul la clasa string

    #include <stdexcept> // ne permite sa ne scriem mesajul de eroare cu runtime_error

    #include <typeinfo>  // ne permite sa depistam tipul de date a informatiei

    #include <fstream>   // ne permite sa accesam cele 3 clase de prelucrare a fisierelor

    using namespace std;

    /*
    ****************************************PROGRAMAREA ORIENTATA OBIECT*****************************************

    -------------------------------------------------------MOSTENIREA----------------------------------------------------

     Mostenirea este un proces care transmite proprietatile si metodele de la o clasa de baza unei clase derivate

     clasa de baza - clasa existenta din care preluam metodele si proprietatile
     clasa derivata - clasa noua care primeste proprietatile si metodele din clasa de baza

     Mostenirea nu permite sa accesam constructorii si destructorii pemtru ca ei poarta numele clasei

     In momentul crearii clasei derivate se executa intii constructorii clasei/claselor de baza
     Destructorii se acceseaza invers

     Mostenirea se adauga dupa :

     Nume_clasa derivata : tip_mostenire nume_clasa_de_baza
     class B{}
     class D : public B
     {}

    -----------------------------------------MOSTENIREA MULTIPLA. OPERATORUL VIRTUAL-------------------------------------

     Mostenirea se imparte in 2 grupuri:
     1) mostenirea simpla - cand o clasa mosteneste o singura clasa
     2) mostenirea multipla - cand o clasa mosteneste mai multe clase direct

     Clasele virtuale ne permit sa nu redeclaram memoria unei clase deja declarate (utilizam virtual public)

     virtual public - la prima apelare operatorul preia informatia din clasa si o utilizeaza, iar la urmatoarele apelari
     - el nu o preia de la inceput (de la 0), dar o reutilizeaza pe cea existenta deja

     Daca mostenirea nu este directa, nu vom putea reapela constructorul

    ----------------------------------------------ZONA DE PROTECTIE PROTECTED--------------------------------------------

     protected - zona de protectie privata comuna in toate clasele mostenite

       -> C -> virtual A
     D
       -> B -> virtual A

    -----------------------------------------------TIPURI DE ACCES LA MOSTENIRE------------------------------------------

     tip mostenire  ::
     1. public ::        class derivata : public clasa_de_baza
        public     ->  public
        protected  ->  protected
        private    ->  nu se mosteneste

     2. protected ::     class derivata : protected clasa_de_baza
        public     ->  protected
        protected  ->  protected
        private    ->  nu se mosteneste

     3. privat ::        class derivata :  private clasa_de_baza (se mosteneste doar o singura data)
        public     ->  private
        protected  ->  private
        private    ->  nu se mosteneste

    ----------------------------------------------FUNCTII VIRTUALE. POLIMORFIZM------------------------------------------

     Daca in lanțul de moștenire se repeta dubluri de proprietati si metode, obiectul va accesa cel mai apropiat
     nume de variabila sau metoda.

     O functie virtuala face parte din clasa de baza si este redefinita de o clasa derivata.

        -> ... -> 0x001 A 0x001
     D
        -> ... -> 0xaf2 A 0x001

     -> A -> 0xda1 f() 0xcb3
     -> B -> 0xaf2 f() 0xcb3
     -> C -> 0xcb3 f() 0xcb3

    -------------------------------------------------PRELUCRAREA EXCEPTIILOR---------------------------------------------

     exceptie - o situatie neprevazuta in momentul executarii unui algoritm (program). Exceptiile se prelucreaza cu
     ajutorul a 2 blocuri: try, catch

     blocul try - contine codul algoritmului posibil vulnerabil;
     blocul catch - incearca sa rezolve exceptia aparuta in try;
     throw - generator de exceptii;

     try
     {
        bloc cod
     }

     catch()
     {
        bloc cod dupa executie
     }

     Catch-ul poate sa fie redeclarat pentru un singur bloc try;
     Numarul de blocuri catch este nelimitat.

     catch(...) - operator ce ne permite sa prelucram orice exceptie care poate sa apara (include in sine toate
                  exceptiile posibile).

    -----------------------------------------------PRELUCRAREA CU FISIERE-----------------------------------------------

     Pentru prelucrarea fisierelor in poo se utiizeaza biblioteca <fstream>, in care se gasesc 3 clase:

        ofstream -> ne permite sa cream obiecte numai pentru salvarea informatiei in fisier;
        (output file stream)

        ifstream -> creeaza obiect care ne permite sa realizam doar extragere (citirea) informatiei din fisier;
        (intput file stream)

        fstream->ne permite sa cream obiect,care are nevoie sa i se indice regimul de prelucrare a fisierului.
        fstream mosteneste ifstream si ofstream.

     REGIMURI fstream: ios::in  -> ifstream
                       ios::out -> ofstream
                       ios::app -> adaugarea

    */

    int main()
    {   
        srand(time(0));
        
        // output file stream

       /*
        ofstream ofs;

        ofs.open("POOfile.txt");

            cout << " STEP 2022" << endl;
    
            ofs<< "STEP 2022" << endl;

        ofs.close();

        // input file stream

        char sir[256];

        ifstream ifs;

        ifs.open("POOfile.txt");

            ifs >> sir;
            cout << " ifs 1 = " << sir << endl;

            ifs >> sir;
            cout << " ifs 2 = " << sir << endl;

        ifs.close();

        cout << endl;

        // sa se creeze un fisier numele caruia este dat de utilizator. In fisier este inscrisa informatia 
        // din 3 siruri : Nume, Prenume, Patronimic. Sa se extraga informatia din fisier


        string fn, ext, A, B, C;

        cout << " Enter file name :: ";
        cin >> fn;

        ofstream ofst;

        cout << " Enter extensie :: ";
            cin >> ext;

            fn += '.';
            fn += ext;
        
            cout << endl;

            ofst.open(fn);

            cout << " Enter nume = ";
            cin >> A;

            cout << " Enter prenume = ";
            cin >> B;

            cout << " Enter patronimic = ";
            cin >> C;

            ofst << A << endl;
            ofst << B << endl;
            ofst << C << endl;

        ofst.close();
    
        cout << endl;

        char N[256], PR[256], PT[256];

        ifstream ifst; 

        ifst.open(fn);

            ifst >> N;

            ifst >> PR;

            ifst >> PT;
        
        ifst.close();

        cout << " NUME = " << N << endl;
        cout << " PRENUME = " << PR << endl;
        cout << " PATRONIMIC = " << PT << endl;

        cout << endl;

       */

        // fstream

       /*
        fstream fp;

        fp.open("step2022.txt", ios::out);

            if (fp.fail()) { cout << " ERROR OUT " << endl; exit(0); }
               else { cout << " OK OUT" << endl; }

            fp << "1 itSTEP 2022 STEP" << endl;
            fp << "2 itSTEP 2022 STEP" << endl;
            fp << "3 itSTEP 2022 STEP" << endl;

        fp.close();


        fp.open("step2022.txt", ios::in);

             if (fp.fail()) { cout << " ERROR IN " << endl; exit(0); }
                else { cout << " OK IN " << endl; }

             char sir[256];
             char SIR[4][256];
             int i = 0, j = 0;
       */

        //   1 posibilitate citire

            /*             
             while (!fp.eof())
             {
                 sir[i] = fp.get();
                 i++;
             }

             sir[i] = '\0'; // sau sir[i] = 0;
             
             fp.close();

             cout << " sir :: "<< endl;
             cout << sir;
            */

         //  2 posibilitate citire 1 singur rand

            /*
             fp.getline( sir, sizeof(sir) );
             
             fp.close();

             cout << " sir :: " << endl;
             cout << sir;
            */

         //  3 posibilitate citire in forma de matrice

            /*
             while (!fp.eof())
             {
                 fp.getline(SIR[i], 256);
                 i++;
             }

             fp.close();

             for (int i = 0; i < 3; i++)
             {
                 cout << ' ' << SIR[i] << endl;
             }
            */

          // 4 posibilitate citire in forma de matrice

            /*
             while (!fp.eof())
             {
                 SIR[i][j] = fp.get();
                 if (SIR[i][j] == '\n')
                 {
                     SIR[i][j] = 0;
                     i++;
                     j = -1;
                 }

                 j++;

             }

             fp.close();

             cout << endl;

             for (int i = 0; i < 3; i++)
             {
                 cout << ' ' << SIR[i];
                 cout << endl;
             }

            */
       

        // alt fstream
        
        int n = rand() % 10+10;

        fstream fp("step_.step", ios::out);

            if (fp.fail()) { cout << " ERROR OUT " << endl; exit(0); }
                else { cout << " OK OUT " << endl; }

            fp << n << endl;
            
            for (int i = 0; i < n; i++)
                fp << rand() % 10 << endl;

        fp.close();

        int v[1000], N;

        fp.open("step_.step", ios::in);

        if (fp.fail()) { cout << " ERROR IN " << endl; exit(0); }
        else { cout << " OK IN" << endl; }

        fp >> N;

        for (int i = 0; i < n; i++)
            fp >> v[i];

        fp.close();

        cout << " \n v[" << N << "] :: ";
        for (int i = 0; i < N; i++)
            cout << setw(3) << v[i];

        cout << endl;
       
        return 0;
    }
