    #include <iostream>
    #include <iomanip>
    #include <string>
    #include <ctime>
    #include <cstdlib>

    #include <vector>    // STL
    #include <iterator>  // STL
    #include <algorithm> // STL
    #include <deque>     // STL
    #include <list>      // STL
    #include <queue>     // STL
    #include <stack>     // STL
    #include <set>       // STL
    #include <map>       // STL

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

    ------------------------------------------------ITERATORI DE INSERTIE------------------------------------------------

     1) back_inserter(conteiner) - inlocuieste metoda push_back().
        Pentru el se foloseste biblioteca  #include <algorithm>.

     2) front_inserter(conteiner) - inlocuieste metoda push_front().
        Pentru el se foloseste biblioteca  #include <deque>.

     3) inserter(conteiner) - inlocuieste meotda insert().

    --------------------------------------------------ITERATORI DE FLUX--------------------------------------------------

     1) ostream_iterator(conteiner) - iterator de inserare a fluxului.

     2) istream_iterator(conteiner) - iterator de afisare a fluxului.

    ------------------------------------------------LISTE DUBLU INLANTUITE-----------------------------------------------

     lista dublu inlantuinta - conteiner in care fiecare element cunoaste adresa urmatorului element si precedentului
     element. Aceasta se parcurge consecutiv: element cu element (de la 1 pana la sfarsitul listei).
     Pentru acestea se foloseste biblioteca #include <list>.

    --------------------------------------------------CONTEINERUL COADA--------------------------------------------------

     queue (coada) - conteiner ce se bazeaza pe regulile FIFO (first in, first out ).
     Pentru conteinerul coada se utilizeaza biblioteca #include <queue>.

    --------------------------------------------------CONTEINERUL STIVA--------------------------------------------------

     stack (stiva) - conteiner ce se bazeaza pe regulile LIFO (last in, first out ).
     Pentru conteinerul stiva se foloseste biblioteca #include <stack>.

    ---------------------------------------------------CONTEINERUL SET---------------------------------------------------
     
     set - conteiner ce ne permite sa cream un vector automat sortat. Prin set se vor afisa valorile in ordine 
     crescatoare , dar doar cele care nu se repeta. Cu ajutorul multiset aranjam in ordine crescatoare valorile,
     indiferent daca acestea se repeta sau nu. Pentru conteinerul set se foloseste biblioteca #include <set>.

    ---------------------------------------------------CONTEINERUL MAP---------------------------------------------------

     map - conteiner care ne permite sa inregistram valoare atat in locul ID-ului (pozitiei), cat si pentru valoare.
     Map nu ne permite sa avem ID-uri (pozitii) cu aceeasi valoare. Prin intermediul multimap putem utiliza ID-uri
     cu aceleasi valori. Pentru conteinerul map se foloseste biblioteca #include <map>.

    */

    int main()
    {
        srand(time(0));

       /*

        // set - vector sortat - valori unicale

        set <int> v;

        for (int i = 0; i < 10; i++) v.insert(rand() % 10);

        cout << " set v :: ";
        copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));

        cout << endl << endl;

        v.erase(1);

        int x;

        cout << " Enter x = ";
        cin >> x;

        if (v.find(x) != v.end())
        {
            cout << " FIND OK = " << x << endl;
            v.erase(x);
        }

        else
        {
            cout << " FIND ERROR = " << x << endl;
        }

        cout << endl;

        cout << " erase set v :: ";
        copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));

        cout << endl << endl;

        // multiset - vector sortat - valori multiple

        multiset <int> V;

        for (int i=0; i<10; i++) V.insert(rand() % 10);

        cout << " multiset V :: ";
        copy(V.begin(), V.end(), ostream_iterator<int>(cout, " "));

        cout << endl;

        V.erase(1);

        cout << " erase multiset V :: ";
        copy(V.begin(), V.end(), ostream_iterator<int>(cout, " "));

        cout << endl << endl;

       */

        // map - vector in care inseram valoare per ID si per VALOARE, valoarea ID - unical

        map <int, int> m;

        cout << " MAP :: " << endl;

        for (int i = 0; i < 10; i++)
        {
            m[i + rand() % 10 + 20] = rand() % 10 + 10;

            // m.insert(pair<int, int>(i + rand() % 10 + 20, rand() % 10 + 10));
        }

        map <int, int>::iterator ITM;

        for (ITM = m.begin(); ITM != m.end(); ITM++)
            cout << " m[" << ITM->first << "] = " << ITM->second << endl;

        cout << endl << endl;


        // multimap - vector in care inseram valoare per ID si per VALOARE, valoarea ID - poate fi si multipla

        multimap <char, int> M;

        cout << " MULTIMAP :: " << endl;

        for (char i = 'a'; i < 'd'; i++)
        {
            // M[i] = rand() % 10 + 10 - in multimap asta nu merge

            M.insert(pair<int, int>(i, rand() % 10 + 10));
        }

        for (char i = 'a'; i < 'd'; i++)
        {
            // M[i] = rand() % 10 + 10 - in multimap asta nu merge

            M.insert(pair<int, int>(i, rand() % 10 + 10));
        }

        multimap <char, int>::iterator ITMM;

        for (ITMM = M.begin(); ITMM != M.end(); ITMM++)
            cout << " M[" << ITMM->first << "] = " << ITMM->second << endl;


        return 0;

    }