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

     O clasa template este un concept ce ne permite sa folosim mai multe tipuri de date pentru un obiect.

    ----------------------------------------------STANDART TEMPLATE LIBRARY----------------------------------------------

     Standart Template Library (STL) este alcatuit din 3 tehnologii:

     1) conteiner - este o portiune de memorie in care putem memora informatie (date) ce trebuie sa fie prelucrata 
        in aplicatie. Intr-un singur conteiner nu exista limita de memorie.

     2) iteratori - este un pointer inteligent. Reprezinta o clasa pentru a parcurge (prelucra) conteinerele.

     3) algoritm - reprezinta o biblioteca de baza ce contine functii cu diferiti algoritmi deja predefiniti.

    */

    int main()
    {
        srand(time(0));
       /*
       
        vector <int> v1;

        vector <int> v2(10);

        vector <int> v3(10, 123);

        for (int i = 0; i < v3.size(); i++) cout << " v3[" << i << "] = " << v3[i] << endl;

        cout << endl;

        cout << " v3 size " << v3.size() << endl;
        cout << " v3 capacity " << v3.capacity() << endl;
        cout << " v3 max_size " << v3.max_size() << endl;

        cout << endl;

        v3.resize(15);

        for (int i = 0; i < v3.size(); i++) cout << " v3[" << i << "] = " << v3[i] << endl;

        cout << endl;

        for (int i = 0; i < v3.size(); i++) v3[i] = rand() % 10; 

        for (int i = 0; i < v3.size(); i++) cout << " v3[" << i << "] = " << v3[i] << endl;

        cout << endl;

        cout << " v3 size " << v3.size() << endl;
        cout << " v3 capacity " << v3.capacity() << endl;
        cout << " v3 max_size " << v3.max_size() << endl;

        cout << endl;

        for (int i=0; i < 10; i++) v1.push_back(rand() % 10);

        for (int i = 0; i < v1.size(); i++) cout << " v1[" << i << "] = " << v1[i] << endl;

        cout << endl;

        cout << " v1 size " << v1.size() << endl;
        cout << " v1 capacity " << v1.capacity() << endl;
        cout << " v1 max_size " << v1.max_size() << endl;

        cout << endl;

        v1.pop_back();
        for (int i = 0; i < v1.size(); i++) cout << " v1[" << i << "] = " << v1[i] << endl;

        cout << endl;

        v1.insert(v1.begin() + 3, 777); // aici se utilizeaza v1.size() si v1.end()

        for (int i = 0; i < v1.size(); i++) cout << " v1[" << i << "] = " << v1[i] << endl;

        cout << endl;

        cout << " front = " << v1.front() << " - back = " << v1.back() << endl;
        */

        vector <int> v1;

        vector <int> v2(10);

        vector <int> v3(5, 123);

        // for (int i = 0; i < v3.size(); i++) v3[i] = rand() % 10;

        cout << endl;

        // vector <int>::iterator itv3; -> s-a dus mai jos

        for (vector <int>::iterator itv3 = v3.begin(); itv3 != v3.end(); itv3++)
            *itv3 = rand() % 10;

        cout << " Vector cu iteratori simpli :: " << endl;
        for ( vector <int>::iterator itv3 = v3.begin(); itv3 != v3.end(); itv3++ )
        cout<< " iterator * v3 = " << *itv3 << endl;

        cout << endl;

        cout << " Vector cu iteratori reverse: " << endl;
        for (vector <int>::reverse_iterator itv3 = v3.rbegin(); itv3 != v3.rend(); itv3++)
            cout << " reverse * v3 = " << *itv3 << endl;

        cout << endl;

        cout << " Vector cu iteratori const :: " << endl;

       /*
        for (vector <int>::const_iterator itv3 = v3.cbegin(); itv3 != v3.cend(); itv3++)
            *itv3 = rand() % 10; // Iteratorul constant doar afiseaza informatie!!!
       */

        for (vector <int>::const_iterator itv3 = v3.cbegin(); itv3 != v3.cend(); itv3++)
            cout << " const * v3 = " << *itv3 << endl;

        cout << endl;

        v3.erase(v3.begin() + 3, v3.end());

        cout << " Metoda erase ::" << endl;

        for (vector <int>::const_iterator itv3 = v3.cbegin(); itv3 != v3.cend(); itv3++)
            cout << " const * v3 = " << *itv3 << endl;

        vector <int>::iterator it = v3.begin();

        cout << endl;

        cout << " *it = " << *it << endl;


        return 0;

    }