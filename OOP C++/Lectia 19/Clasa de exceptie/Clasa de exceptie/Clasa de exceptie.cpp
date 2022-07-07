    #include <iostream>
    #include <ctime>
    #include <cstdlib>

    #include <exception> // avem accesul la clasa de exceptie
    #include <string>    // avem accesul la clasa string

    #include <stdexcept> // ne permite sa ne scriem mesajul de eroare cu runtime_error

    #include <typeinfo>  // ne permite sa depistam tipul de date a informatiei

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

    */
    
    template <typename T>
    T suma(T v[], int n)
    {
        T s = 0;

        char x = *typeid(T).name();

        switch ( x )
        {
            case 'i': for (int i = 0; i < n; i++) s += v[i]; break;

            case 'd': for (int i = 0; i < n; i++) s += v[i]; break;
        }

        return s;

    }

    class ABC
    {
    public: 

        virtual void f() {};
    };


    class exceptie : public exception
    {
    public:

        const char* what()const throw() { return "Eroare prin OBJECT "; }

    }ERR;

    int main()
    {
        srand(time(0));

        cout << endl;

    /*
        try
        {
            int* p = new int[9999999999999];
            cout << " Alocare cu succes " << endl;
        }

        catch (exception& x)
        {
            cout << " Eroare :: " << x.what() << endl;
        }
        

        try
        {
            string S;

            S.resize(-1);

            cout << " Resetare cu succes " << endl;
        }

        catch(exception&x)
        {
            cout << " Eroare :: " << x.what() << endl;
        }  
    

        try
        {
            throw runtime_error("Eroare de executie");
        }

        catch (exception& x)
        {
            cout << " Eroare :: " << x.what() << endl;
        }
    
        int x;
        
        cout << " Tip date int = " << typeid(x).name() << endl;

        char y;

        cout << " Tip date char = " << typeid(y).name() << endl;

        double w, *p;

        cout << " Tip date double = " << typeid(w).name() << endl;
        cout << " Tip date adresa double = " << typeid(p).name() << endl;
    
        cout << endl;
    
    
        int v[] = { 1,2,3,4 };

        cout << " suma int = " << suma(v, 4) << endl;

        double y[] = { 6.6, 8.4, 9.0, 10.3, 11.1 };

        cout << " suma double = " << suma(y, 5) << endl;

        char w[] = { '1', '2', '3', '4' };

        cout << " suma char = " << suma(w, 4) << endl;

        cout << endl;

        ABC *pp = new ABC;
        cout << " Tip date OBIECT 1 = " << typeid(*pp).name() << endl;

        try
        {
            ABC *ppp = 0;
            cout << " Tip date OBIECT 2 = " << typeid(*ppp).name() << endl;
        }

        catch (exception& x)
        {
            cout << " Eroare :: " << x.what() << endl;
        }
    */

        try
        {
            throw ERR;
        }

        catch(exception&x)
        {
            cout << " CLASA derivata - Eroare :: " << x.what() << endl;
            cout << " CLASA de baza  - Eroare :: " << x.exception::what() << endl;
        }

        catch (...)
        {
            cout << " EROARE ..." << endl;
        }

        return 0;
    }

        
