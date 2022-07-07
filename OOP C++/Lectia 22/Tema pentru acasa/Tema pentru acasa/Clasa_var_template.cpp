    #include <iostream>
    #include <iostream>
    #include <cstdlib>
    #include <ctime>
    #include <iomanip>
    #include <cstring>

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

    */

    template <class T>
    class var
    {
        T value;

    public:

        var<T>(T value = NULL) : value(value) {}
        var<T>(const var<T>& Obj) { cout << " &value = " << &value << endl; this->value = Obj.value; }

        ~var<T>() {}

        void setVALUE1(char* message)
        {
            cout << message;
            cin >> this->value;
        }

        void setINT()
        {
            this->value = rand() % 20;
        }

        void setDOUBLE()
        {
            this->value = rand() % 20 * 1.357;
        }

        void setCHAR()
        {
            this->value = char('a' + rand() % 26);
        }

        void setVALUE3(T y)
        {
            this->value = y;
        }

        T getVALUE()const { return this->value; }

        void operator++();
        void operator++(int);

        void operator--();
        void operator--(int);

        void operator+=(var <T>&);

        var <T>& operator=(var <T>&);
        var <T>& operator=(int);

        var <T>& operator+(var <T>&);
        var <T>& operator+(int);

        var <T>& operator-(var <T>&);
        var <T>& operator-(int);

        var <T>& operator*(var <T>&);
        var <T>& operator*(int);

        // ERROR friend void operator=(var&x,var&y);

        template <typename T1> friend ostream& operator<<(ostream&, var <T1>&);
        template <typename T1> friend istream& operator>>(istream&, var <T1>&);

        bool operator>(var <T>&);
        bool operator>=(var <T>&);
        bool operator==(var <T>&);

        // T operator!();
        T operator! ()
        {
            T x;
            x = this->value * (-1);
            return x;
        }

        template <typename T> friend T operator%(var <T>& OBJ, int);

        T operator[](int);

        T operator()();

        void operator() (int);
        void operator() (int, int);

        void a();

    };


    // combinatia este <<OBJ
    template <typename T>
    ostream& operator<<(ostream& COUT, var <T>& OBJ)
    {
        COUT << OBJ.value;

        return COUT;
    }

    // combinatia este >>OBJ
    template <typename T>
    istream& operator>>(istream& CIN, var <T>& OBJ)
    {
        CIN >> OBJ.value;

        return CIN;
    }

    // ++var
    template <class T>
    void var <T> ::operator++() { this->value++; }

    // var++
    template <class T>
    void var <T>::operator++(int) { this->value++; }

    // --var
    template <class T>
    void var <T> ::operator--() { this->value--; }

    // var--
    template <class T>
    void var <T>::operator--(int) { this->value--; }

    // var += var
    template <class T>
    void var <T>::operator+=(var <T>& y)
    {
        this->value += y.value;
    }

    // var = var
    template <class T>
    var <T>& var <T>::operator=(var <T>& y)
    {
        this->value = y.value;
        return *this;
    }

    // var = int
    template <class T>
    var <T>& var <T>::operator=(int y)
    {
        this->value = y;
        return *this;
    }

    // var + var
    template <class T>
    var <T>& var <T>::operator+(var <T>& y)
    {
        this->value += y.value;
        return *this;
    }

    // var + int
    template <class T>
    var <T>& var <T>::operator+(int y)
    {
        this->value += y;
        return *this;
    }

    // var - var
    template <class T>
    var <T>& var <T>::operator-(var <T>& y)
    {
        this->value -= y.value;
        return *this;
    }

    // var - int
    template <class T>
    var <T>& var <T>::operator-(int y)
    {
        this->value -= y;
        return *this;
    }

    // var * var
    template <class T>
    var <T>& var <T>::operator*(var <T>& y)
    {
        this->value *= y.value;
        return *this;
    }

    // var * int
    template <class T>
    var <T>& var <T>::operator*(int y)
    {
        this->value *= y;
        return *this;
    }

    // bool operator >
    template <class T>
    bool var <T>::operator > (var <T>& x)
    {
        return this->value > x.value ? true : false;
    }

    // bool operator >=
    template <class T>
    bool var <T>::operator >= (var <T>& x)
    {
        return this->value >= x.value ? true : false;
    }

    // bool operator ==
    template <class T>
    bool var <T>::operator == (var <T>& x)
    {
        return this->value == x.value;
    }

    // aici era T operator!(), dar am decis sa fac un exemplu cu functia in interiorul clasei 
    /*
    
     // T operator!();
     template <typename T>
     T operator! (var <T>& OBJ)
     {
        T x;
        x = OBJ.value * (-1);
        return x;
     }
      
    */

    // T operator%(int);
    template <typename T>
    T operator % (var <T>& OBJ, int x)
    {
        T v = OBJ.value;
        for (int i = 1; i < x; i++) v *= OBJ.value  ;
        return v;
    }

    // T operator[](int);
    template <typename T>
    T var <T>::operator[] (int x)
    {
        return this->value * x;
    }

    // T operator()();
    template <typename T>
    T var<T>::operator()()
    {
        return this->value;
    }

    // void operator() (int);
    template <class T>
    void var <T>::operator()(int x)
    {
        switch (x)
        {
        case 1: cout << " OBJECT(int) = " << this->value << " int = " << x << endl; break;
        case 2: cout << " OBJECT(int) = " << this->value << " int = " << x << endl; break;
        case 3: cout << " OBJECT(int) = " << this->value << " int = " << x << endl; break;
        }
    }

    // void operator() (int,int);
    template <class T>
    void var <T>::operator()(int x, int y)
    {
        switch (x)
        {
        case 1: cout << " OBJECT(int,int) = " << this->value << " int = " << x << " int = " << y << endl; break;
        case 2: cout << " OBJECT(int,int) = " << this->value << " int = " << x << " int = " << y << endl; break;
        case 3: cout << " OBJECT(int,int) = " << this->value << " int = " << x << " int = " << y << endl; break;
        }

    }

    // void a()
    template <class T>
    void var <T>::a() { cout << " a( a(aaa) ) " << endl; }


    int main()
    {
        srand(time(0));

        var <double> a;
        var <double> b;
        var <double> c;

        a.setDOUBLE();
        b.setVALUE3(5.7);

        //cout << "\n Enter a = ";
        //cin >> a;

        b += a;

        cout << " a = " << a << endl;

        cout << " b = " << b << endl;

        cout << " c = " << (c = a) + a << endl;

        cout << endl;

        if (b > a) cout << " " << b << " > " << a << endl;
        else cout << " " << b << " nu este > " << a << endl;

        if (b >= a) cout << " " << b << " >= " << a << endl;
        else cout << " " << b << " nu este >= " << a << endl;

        if (b == a) cout << " " << b << " == " << a << endl;
        else cout << " " << b << " nu este == " << a << endl;

        cout << endl;

        cout << " c = " << c << "\n c = " << !c << endl;
        
        cout << "\n c%3 = " << c % 3 << endl;

        cout << "\n c = " << c << "\n c[3] = " << c[3] << endl;

        cout << "\n c() = " << c() << endl;

        cout << endl;

        a.a();

        cout << " a() = " << a() << endl;

        cout << endl;

        a(1);
        a(2);
        a(3);

        cout << endl;

        a(1, 321);
        a(2, 3210);
        a(3, 32101);

        return 0;
    }
