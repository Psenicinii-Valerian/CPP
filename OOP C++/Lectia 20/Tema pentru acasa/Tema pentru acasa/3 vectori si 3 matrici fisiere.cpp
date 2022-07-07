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


    void afisare(int v[], double d[], char c[], int N1, int N2, int N3, 
                 int NN1, int MM1, int NN2, int MM2, int NN3, int MM3,
                 int V[][10], double D[][10], char C[][10])                            
    {
        cout << "\n -----COUT VECTOR----- " << endl;

        // cout console int vector

        cout << " \n v[" << N1 << "] :: ";
        for (int i = 0; i < N1; i++)
            cout << setw(3) << v[i];

        // cout console double vector

        cout << " \n d[" << N2 << "] :: ";
        for (int i = 0; i < N2; i++)
            cout << setw(6) << d[i];

        // cout console char vector

        cout << " \n c[" << N3 << "] :: ";
        for (int i = 0; i < N3; i++)
            cout << setw(3) << c[i];

        cout << endl;

        cout << "\n -----COUT MATRIX----- " << endl;

        // cout console int matrix

        cout << " \n  V[" << NN1 << "][" << MM1 << "] :: " << endl;
        for (int i = 0; i < NN1; i++)
        {
            for (int j = 0; j < MM1; j++)
                cout << setw(3) << V[i][j];

            cout << endl;
        }

        cout << endl;

        // cout console double matrix

        cout << " \n  D[" << NN2 << "][" << MM2 << "] :: " << endl;
        for (int i = 0; i < NN2; i++)
        {
            for (int j = 0; j < MM2; j++)
                cout << setw(6) << D[i][j];

            cout << endl;
        }

        cout << endl;

        // cout console char matrix

        cout << " \n  C[" << NN3 << "][" << MM3 << "] :: " << endl;
        for (int i = 0; i < NN3; i++)
        {
            for (int j = 0; j < MM3; j++)
                cout << setw(3) << C[i][j];

            cout << endl;
        }

        cout << endl;
    }

    void output()
    {
        // output file

        fstream fp("TEMA_VM.step", ios::out);

        if (fp.fail()) { cout << " ERROR OUT " << endl; exit(0); }
        else { cout << " OK OUT " << endl; }


        // int vector

        int n1 = rand() % 10 + 5;

        fp << n1 << endl;

        for (int i = 0; i < n1; i++)
            fp << rand() % 10 << endl;

        fp << endl;


        // double vector

        int n2 = rand() % 10 + 7;

        fp << n2 << endl;

        for (int i = 0; i < n2; i++)
            fp << rand() % 10 * 1.03 << endl;

        fp << endl;


        // char vector

        int n3 = rand() % 10 + 10;

        fp << n3 << endl;

        for (int i = 0; i < n3; i++)
            fp << char('a' + rand() % 26) << endl;

        fp << endl;


        // int matrix

        int nn1 = rand() % 5 + 3, mm1 = rand() % 4 + 2;

        fp << nn1 << " x " << mm1 << endl;

        for (int i = 0; i < nn1; i++)
        {
            for (int j = 0; j < mm1; j++)
                fp << rand() % 10 << ' ';

            fp << endl;
        }

        fp << endl;


        // double matrix

        int nn2 = rand() % 6 + 3, mm2 = rand() % 5 + 4;

        fp << nn2 << " x " << mm2 << endl;

        for (int i = 0; i < nn2; i++)
        {
            for (int j = 0; j < mm2; j++)
                fp << rand() % 10 * 1.03 << ' ';

            fp << endl;
        }

        fp << endl;


        // char matrix

        int nn3 = rand() % 5 + 4, mm3 = rand() % 4 + 4;

        fp << nn3 << " x " << mm3 << endl;

        for (int i = 0; i < nn3; i++)
        {
            for (int j = 0; j < mm3; j++)
                fp << char('a' + rand() % 26) << ' ';

            fp << endl;
        }

        fp << endl;

        fp.close();
    }

    void input()
    {
        // read vector

        int v[20], N1, N2, N3;
        double d[20];
        char c[20];

        // read matrix

        int V[10][10], NN1, NN2, NN3, MM1, MM2, MM3;
        double D[10][10];
        char C[10][10], X;

        fstream fp("TEMA_VM.step", ios::in);

        if (fp.fail()) { cout << " ERROR IN " << endl; exit(0); }
        else { cout << " OK IN" << endl; }

        // read int vector

        fp >> N1;

        for (int i = 0; i < N1; i++)
            fp >> v[i];

        // read double vector

        fp >> N2;

        for (int i = 0; i < N2; i++)
            fp >> d[i];

        // read char vector

        fp >> N3;

        for (int i = 0; i < N3; i++)
            fp >> c[i];

        // read int matrix

        fp >> NN1;
        fp >> X;
        fp >> MM1;

        for (int i = 0; i < NN1; i++)
        {
            for (int j = 0; j < MM1; j++)
                fp >> V[i][j];
        }

        // read double matrix

        fp >> NN2;
        fp >> X;
        fp >> MM2;

        for (int i = 0; i < NN2; i++)
        {
            for (int j = 0; j < MM2; j++)
                fp >> D[i][j];
        }

        // read char matrix

        fp >> NN3;
        fp >> X;
        fp >> MM3;

        for (int i = 0; i < NN3; i++)
        {
            for (int j = 0; j < MM3; j++)
                fp >> C[i][j];
        }

        fp.close();

        afisare(v, d, c, N1, N2, N3, NN1, MM1, NN2, MM2, NN3, MM3, V, D, C);
    }

   

    int main()
    {
        srand(time(0));

        output();

        input();
        
        return 0;
    }
