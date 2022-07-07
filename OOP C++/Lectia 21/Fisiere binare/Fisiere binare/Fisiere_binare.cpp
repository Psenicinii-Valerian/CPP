    #include <iostream>
    #include <ctime>
    #include <cstdlib>
    #include <iomanip>
    #include <fstream>   // ne permite sa accesam cele 3 clase de prelucrare a fisierelor

    using namespace std;

    /*
    ********************************************PROGRAMAREA ORIENTATA OBIECT*********************************************

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

     Fisierul binar inscrie informatia in format de memorie (ce nu poate fi extrasa). Ele se utilizeaza cand avem
     un volum mare de informatie (structuri, clase). 

     REGIMURI: b ios::binary
               r+b ios::in|ios::binary  - ifstream binar
               w+b ios::out|ios::binary - ofstream binar
               a+b ios::app|ios::binary - adaugarea binar
     
     Pentru a salva obiectele in fisier se va utiliza metoda write() care are 2 parametri:
     1) Se indica formatul blocului de memorie
     2) Memoria totala
     
    */

    class DOUBLE 
    {
        double value;

    public:

        DOUBLE(double value = NULL) : value(value) {}
        ~DOUBLE() {}

        void setDOUBLE(char* message)
        {
            cout << message;
            cin >> this->value;
        }

        void setDOUBLE()
        {
            this->value = rand() % 10 * 1.15;
        }

        inline const double getDOUBLE()const { return this->value; }
    };  


    class INT : public DOUBLE
    {
        int value;

    public:

        INT(int value = NULL) : value(value) {}
        ~INT() {}

        void setINT(char* message)
        {
            cout << message;
            cin >> this->value;
        }

        void setINT()
        {
            this->value = rand() % 100;
        }

        inline const int getINT()const { return this->value; }
    };


    int main()
    {
        srand(time(0));

        int size = 0;
        INT *A = new INT[10];

        for (int i = 0; i < 10; i ++ )
        {
            A[i].setINT();
            A[i].setDOUBLE();

            size += sizeof(A[i]);

            cout << " A[" << i << "] INT = " <<  A[i].getINT() 
                 << "    A[" << i << "] DOUBLE  = " << A[i].getDOUBLE()                
                 << "    size = " << size << endl;
        }

        cout << endl;

        // output file
        
        ofstream ofb("step_binar_1.step", ios::binary);
        fstream fb("step_binar_2.step", ios::out|ios::binary); // realizeaza acelasi lucru ca si ofstream ofb

            if ( ofb.fail() ) { cout << " Error W FILE " << endl; exit(0); }
                else { cout << " OK W FILE " << endl; }

            // fwrite (S, sizeof(S), NR, fp)

            ofb.write(reinterpret_cast<char*>(A), size);

        ofb.close();
        fb.close();


        // input file

        ifstream ifb("step_binar_1.step", ios::binary);
             fb.open("step_binar_2.step", ios::in | ios::binary); // realizeaza acelasi lucru ca si ifstream ifb

             if (ifb.fail()) { cout << " Error R FILE " << endl; exit(0); }
                else { cout << " OK R FILE " << endl; }

             cout << endl;

             // int n = fread(S, sizeof(S), 100, fp)

             ifb.seekg(ifb.beg, ifb.end); // metoda selecteaza blocurile de memorie ( in loc de ifb.beg poate fi si 0 )
                                          // asta este ca si cum am dat ctrl+a in fisier,
                                          // ducand cursorul la sfarsit de file

             int NLEN = ifb.tellg();      // intoarce lungimea informatiei selectate

             ifb.seekg(ifb.beg, ifb.beg); // ne duce inapoi cursorul la inceput de file

             int n = NLEN / sizeof(INT);  // ne afiseaza numarul de obiecte folosite
                                          // (total lungimea obiectelor / lungimea unui obiect)

             cout << " n = " << n << endl;

             INT *B = new INT[n];

             ifb.read(reinterpret_cast<char*>(B), NLEN);

             cout << endl;

             for (int i = 0; i < n; i++)
             {
                 cout << " B[" << i << "] = INT " << B[i].getINT()
                      << "    B[" << i << "] = DOUBLE " << B[i].getDOUBLE() << endl;
             }

        ifb.close();
        fb.close();


        return 0;
    }
