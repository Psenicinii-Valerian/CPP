    #include <iostream>
    #include <iomanip>
    #include <string>
    #include <ctime>
    #include <cstdlib>

    #include <vector>   // STL
    #include <iterator> // STL

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

     Daca in lantul de mostenire se repeta dubluri de proprietati si metode, obiectul va accesa cel mai apropiat
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

     O clasa template este un concept ce ne permite sa folosim mai multe tipuri de date pentru un obiect.

    ----------------------------------------------STANDART TEMPLATE LIBRARY----------------------------------------------

     Standart Template Library (STL) este alcatuit din 3 tehnologii:

     1) conteiner - este o portiune de memorie in care putem memora informatie (date) ce trebuie sa fie prelucrata
        in aplicatie. Intr-un singur conteiner nu exista limita de memorie.

     2) iteratori - este un pointer inteligent. Reprezinta o clasa pentru a parcurge (prelucra) conteinerele.

     3) algoritm - reprezinta o biblioteca de baza ce contine functii cu diferiti algoritmi deja predefiniti.

    */

    class var
    {
        int a;
        int b;
        int c;
        int R;

    public:

        var (int a = NULL, int b = NULL, int c = NULL, int R = NULL) : a(a), b(b), c(c), R(R) {}
        ~var() {}

        int setA();
        int setB();
        int setC();


        int getA() { return this->a; }
        int getB() { return this->b; }
        int getC() { return this->c; }
        int getR() { return this->a + this->b - this->c; }

    };

    int var :: setA()
    {
        return this->a = rand() % 100;
    }

    int var::setB()
    {
        return this->b = rand() % 70+15;
    }

    int var::setC()
    {
        return this->c = rand() % 55+5;
    }


    int main()
    {
        srand(time(0));

        // a+b-c cu vectori

        var value;

        vector <int> v(10);

        cout << endl;

        cout << " v size " << v.size() << endl;
        cout << " v capacity " << v.capacity() << endl;
        cout << " v max_size " << v.max_size() << endl << endl;

        cout << " a+b-c cu vectori :: " << endl << endl;

        for (int i = 0; i < v.size(); i++)
        {
            value.setA();
            value.setB();
            value.setC();

            cout << " a = " << value.getA() << "   b = " << value.getB() << "   c = " << value.getC() << endl;

            v[i] = value.getR();
        }

        cout << endl;

        for (int i = 0; i < v.size(); i++)
        {
            cout << " v[" << i << "] = " << v[i] << endl;
        }

        cout << endl << endl;

        // a+b-c cu iteratori

        var x;

        vector <int> w(15);

        cout << " a+b-c cu iteratori :: " << endl << endl;

        for (vector <int>::iterator itw = w.begin(); itw != w.end(); itw++)
        {
            x.setA();
            x.setB();
            x.setC();

            cout << " a = " << x.getA() << "   b = " << x.getB() << "   c = " << x.getC() << endl;

            *itw = x.getR();
        }

        cout << endl;

        for (vector <int>::const_iterator itw = w.cbegin(); itw != w.cend(); itw++)
            cout << " const itw = " << *itw << endl;

        cout << endl;

        for (vector <int>::reverse_iterator itw = w.rbegin(); itw != w.rend(); itw++)
            cout << " reverse itw = " << *itw << endl;



        return 0;

    }
