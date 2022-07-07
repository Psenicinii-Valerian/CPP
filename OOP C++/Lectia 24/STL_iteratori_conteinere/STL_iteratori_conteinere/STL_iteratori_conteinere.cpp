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

    */

    int main()
    {
        srand(time(0));

        vector <int> v3(5, 123);

        cout << endl;

        // vector <int>::iterator itv3; -> s-a dus mai jos

        for (vector <int>::iterator itv3 = v3.begin(); itv3 != v3.end(); itv3++)
            *itv3 = rand() % 10;

        cout << " Vector cu iteratori simpli :: " << endl;

        for (vector <int>::iterator itv3 = v3.begin(); itv3 != v3.end(); itv3++)
            cout << " iterator * v3 = " << *itv3 << endl;

        cout << endl;
        cout << endl;


        // Iteratori de insertie

        cout << " Vector cu iteratori de insertie :: " << endl;

        cout << endl;


        // 1) back_inserter(conteiner)

        cout << " Back inserter :: " << endl;

        vector <int> v(3, 123);

        copy(v3.begin(), v3.end(), back_inserter(v));

        for (vector <int>::const_iterator itv = v.cbegin(); itv != v.cend(); itv++)
            cout << " const * v3 = " << *itv << endl;

        cout << endl;


        // 2) front_inserter(conteiner)

        deque <int> a, b, c;

        a.push_front(4);
        a.push_front(3);
        a.push_front(2);

        cout << "  Deque a :: " << endl;

        for (deque <int> ::const_iterator itv = a.begin(); itv != a.end(); itv++)
            cout << setw(3) << *itv;

        cout << endl;
        cout << endl;

        b.push_back(5);
        b.push_back(6);
        b.push_back(7);

        c.push_back(5);
        c.push_back(6);
        c.push_back(7);

        cout << "  Deque b :: " << endl;

        for (deque <int> ::const_iterator itv = b.begin(); itv != b.end(); itv++)
            cout << setw(3) << *itv;

        cout << endl;
        cout << endl;

        cout << "  Deque b + a (in fata) :: " << endl << endl;

        copy(a.rbegin(), a.rend(), front_inserter(b));

        for (deque <int> ::const_iterator itv = b.begin(); itv != b.end(); itv++)
            cout << setw(3) << *itv;

        cout << endl;
        cout << endl;


        // 3) inserter(conteiner)

        cout << "  Inserter :: " << endl;

        copy(c.begin(), c.end(), inserter(a, a.begin() + a.size()));

        for (deque <int> ::const_iterator itv = b.begin(); itv != b.end(); itv++)
            cout << setw(3) << *itv;

        cout << endl;
        cout << endl;


        // iteratori de flux

        // 1) ostream_iterator

        ostream_iterator <int> OUT(cout, " - "); // se poate si \n sau orice alta forma de delimitare a conteinerelor

        cout << "  ostream_iterator OUT :: " << endl;

        cout << "  ";

        copy(c.begin(), c.end(), OUT);

        cout << endl << endl;


        // 2) istream_iterator CTRL + Z - se opreste

        vector <string> vs;

        cout << " Enter string elemente vs :: " << endl;

        copy(istream_iterator<string>(cin), istream_iterator<string>(), back_inserter(vs));

        cout << endl;

        cout << " ostream_iterator vs :: " << endl;
        cout << " ";
        copy(vs.begin(), vs.end(), ostream_iterator <string>(cout, "\n "));

        cout << endl;

        // Liste dublu inlantuite (conteiner)

        list <int> LIST;

        LIST.push_back(1);
        LIST.push_back(2);
        LIST.push_back(3);
        LIST.push_front(0);

        cout << " LIST :: ";
        copy(LIST.begin(), LIST.end(), ostream_iterator <int>(cout, " "));

        cout << endl;

        cout << " size = " << LIST.size() << endl;

        cout << endl;


        // Conteinerul coada

        queue <int> C;

        cout << " Conteinerul coada :: " << endl;

        for (int i = 0; i < 10; i++)   C.push(rand() % 10);

        cout << endl;

        cout << " C.front() = " << C.front() << endl;
        cout << " C.back() = " << C.back() << endl;
        cout << " C.size() = " << C.size() << endl;

        cout << endl;

        int val;

        while (!C.empty())
        {
            val = C.front();

            cout << " val = " << val << endl;

            C.pop();
        }

        cout << endl;


        // Conteinerul stiva

        stack <int> S;

        cout << " Conteinerul stiva :: " << endl;

        cout << endl;

        for (int i = 0; i < 10; i++)    S.push(i);

        cout << " S.top() = " << S.top() << endl;
        cout << " S.size() = " << S.size() << endl;

        cout << endl;

        while (!S.empty())
        {
            val = S.top();

            cout << " val = " << val << endl;

            S.pop();
        }


        return 0;

    }