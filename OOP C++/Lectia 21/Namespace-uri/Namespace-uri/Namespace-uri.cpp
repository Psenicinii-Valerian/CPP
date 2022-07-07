    #include <iostream>
    #include <iomanip>
    
    using std::cout;
    using std::endl;
    
    //using namespace std;

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

    ----------------------------------------------------NAMESPACE-URI----------------------------------------------------
     
     Namespace - ne permite sa cream spatii izolate intre ele

    */

    // namespace 1
    namespace step_2022_13
    {
        int a = 321;
        int b = 777;
    }

    namespace step = step_2022_13;


    // namespace 2
    namespace step_2022_13_4321
    {
        int a = 4321;
    }

    namespace step2 = step_2022_13_4321;
    
    using namespace step;

    int main()
    {
        int a = 123;
        cout << " a = " << a << endl;
        cout << " step::a = " << step::a << endl;

        cout << endl;

             cout << " STEP 2022 1" << endl;
             cout << " STEP 2022 2" << endl;
        std::cout << " STEP 2022 3" << std::endl;         

        cout << endl;

        cout << " a = " << step2::a << endl;
        cout << " b = " << b << endl;

        return 0;
    }
