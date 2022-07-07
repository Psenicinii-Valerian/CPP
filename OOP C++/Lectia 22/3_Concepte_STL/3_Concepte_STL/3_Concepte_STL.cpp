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

    -----------------------------------------------PRELUCRAREA CU FISIERE------------------------------------------------

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


    -------------------------------------------------PROPRIETATI STATICE-------------------------------------------------

     Proprietatea statica - se declara (exista) intr-o singura copie pentru toate obiectele.
     Memoria pentru proprietatea statica se declara in afara clasei.
     Pentru a declara un parametru static se ultilizeaza operatorul static.


    ----------------------------------------------------METODE STATICE---------------------------------------------------

     Metode statice - prelucreaza doar proprietatile statice si nu are acces la pointerul this->.


    ----------------------------------------------------CLASE ABSTRACTE--------------------------------------------------

     Clasa abstracta - reprezinta un concept general al clasei. Clasa se considera abstracta daca contine functii
     virtuale pure. Aceasta este garantul minim al proiectarii (aceasta reprezinta o cerinta obligatorie de realizat).
     Nu putem crea obiecte cu ajutorul acestor clase.

    ----------------------------------------------------CLASE TEMPLATE---------------------------------------------------

    */


    class x
    {
        static int value;

    public:

        static void set(int x)
        {
            value = x;
        }

        static void get()
        {
            cout << " value = " << value << endl;
        }
    };

    int x::value;


    class masina
    {
    public:

        virtual void model() = 0;
        virtual void tip_motor() = 0;

    };

    class BMW : public masina
    {
    public:
        int x;
        void model() { cout << " BMW model" << endl; }
        void tip_motor() { cout << " BMW tip_motor" << endl; }
    };

    class VW : public masina
    {
    public:
        void model() { cout << " VW model" << endl; }
        void tip_motor() { cout << " VW tip_motor" << endl; }
    };


    template <class T>
    class var
    {
        T value;

    public:

        void set() { cout << " Enter value = "; cin >> this->value; }
        T get() { return this->value; }


    };


    template <class T0, class T1, class T2>
    class experiment
    {
        T0 value0;
        T1 value1;
        T2 value2;

    public:

        void set0() { cout << " Enter value0 = "; cin >> this->value0; }
        T0 get0() { return this->value0; }

        void set1() { T1 xxx; cout << " Enter value1 = "; cin >> xxx; this->value1 = xxx; }
        T1 get1() { return this->value1; }

        void set2() { cout << " Enter value2 = "; cin >> this->value2.x; }
        int get2() { return this->value2.x; }
  

    };


    int main()
    {
        /*
        
         // Metode statice exemplu

         A.value = 123;
         cout << " A.value = " << A.value << " B.value = " << B.value << " C.value = " << C.value << endl;
        
         C.value = 321;
         cout << " A.value = " << A.value << " B.value = " << B.value << " C.value = " << C.value << endl;

         B.value = 777;
         cout << " A.value = " << A.value << " B.value = " << B.value << " C.value = " << C.value << endl;


         // Metode statice exemplu

         x A, B, C;

         A.set(777);

         A.get();
         B.get();
         C.get();


         // Clase abstracte exemplu

         BMW w;

         w.model();
         w.tip_motor();

         cout << endl;

         VW y;

         y.model();
         y.tip_motor();

         
         // Clase template exemplu
         
         var <int> x;

         x.set();
         cout << " x = " << x.get() << endl;

         cout << endl;

         var <double> y;

         y.set();
         cout << " y = " << y.get() << endl;

         cout << endl;

         var <string> w;

         w.set();
         cout << " w = " << w.get() << endl;

         cout << endl;

         var <bool> q;

         q.set();
         cout << " q = " << q.get() << endl;

        */

         experiment <int, string, BMW> X;

         X.set0();
         cout << " X = " << X.get0() << endl;

         X.set1();
         cout << " X = " << X.get1() << endl;

         X.set2();
         cout << " X = " << X.get2() << endl;

         cout << endl;

         experiment <double, string, BMW> Y;

         Y.set0();
         cout << " Y = " << Y.get0() << endl;

         Y.set1();
         cout << " Y = " << Y.get1() << endl;

         Y.set2();
         cout << " Y = " << Y.get2() << endl;


         return 0;
    }