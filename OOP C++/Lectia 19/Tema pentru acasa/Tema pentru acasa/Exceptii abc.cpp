    #include <iostream>
    #include <ctime>
    #include <cstdlib>
    
    /*
    #include <exception> // avem accesul la clasa de exceptie
    #include <string>    // avem accesul la clasa string

    #include <stdexcept> // ne permite sa ne scriem mesajul de eroare cu runtime_error

    #include <typeinfo>  // ne permite sa depistam tipul de date a informatiei
    */

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


    class ABC
    {
        int a, b, c, R;

    public:

        ABC(int a = NULL, int b = NULL, int c = NULL, int R = NULL) : a(a), b(b), c(c), R(R) { }

        void abc();
    };

    void ABC::abc()
    {
        try
        {
            cout << " Enter a = ";
            cin >> this->a;
            
            if (this->a == 2 || this->a == 5 || this->a == 9) { cout << " Eroare :: a = "; throw this->a; }

            cout << " Enter b = ";
            cin >> this->b;

            if (this->b == 5 || this->b == 9) { cout << " Eroare :: b = "; throw this->b; }

            cout << " Enter c = ";
            cin >> this->c;

            if (this->c == 2 || this->c == 4 || this->c == 5) { cout << " Eroare :: c = "; throw this->c; }

            R = this->a + this->b - this->c;
            cout << " R = " << this->a << "+" << this->b << "-" << this->c << " = " << this->R << endl;
        }

        catch (int x)
        {
            cout << x << " este o valoare interzisa!" << endl;
        }

        catch (...)
        {
            cout << " UNKNOWN ERROR!!! " << endl;
        }

        // alte prelucrari de ex pentru parametri tip double sau char ???

        /*
        metoda what() se foloseste de obicei independent? :: try {throw(metoda)}  + catch(exception&x) {x.what()} ?
        metoda what() a fost utilizata de noi in clasa de data trecuta pentru a arata polimorfizmul? 
        */
    }


    int main()
    {
        srand(time(0));

        cout << endl;

        int n = rand() % 8 + 2;
        cout << " Total iteratii :: " << n << endl;

        cout << endl;

        cout << " Valori interzise!" << endl;
        cout << " a :: 2, 5 sau 9" << endl;
        cout << " b :: 5 sau 9" << endl;
        cout << " c :: 2, 4 sau 5" << endl;
        cout << endl;

        ABC error;
        
        
        for (int i = 0; i < n; i++)
        {
            cout << " Iteratia " << i + 1 << " ::" << endl;
            error.abc();
  
            cout << endl;
        }
        
        return 0;
    }


