    #include <iostream>

    using namespace std;

    /*
        ****************************************PROGRAMAREA ORIENTATA OBIECT*****************************************

    -------------------------------------------------------MOSTENIREA---------------------------------------------------------

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

    -----------------------------------------MOSTENIREA MULTIPLA. OPERATORUL VIRTUAL---------------------------------------

        Mostenirea se imparte in 2 grupuri:
        1) mostenirea simpla - cand o clasa mosteneste o singura clasa
        2) mostenirea multipla - cand o clasa mosteneste mai multe clase direct

        Clasele virtuale ne permit sa nu redeclaram memoria unei clase deja declarate (utilizam virtual public)

        virtual public - la prima apelare operatorul preia informatia din clasa si o utilizeaza, iar la urmatoarele apelari - el
        nu o preia de la inceput (de la 0), dar o reutilizeaza pe cea existenta deja

        Daca mostenirea nu este directa, nu vom putea reapela constructorul

    ----------------------------------------------ZONA DE PROTECTIE PROTECTED----------------------------------------------

        protected - zona de protectie privata comuna in toate clasele mostenite

           -> C -> virtual A
        D
           -> B -> virtual A

   -----------------------------------------------TIPURI DE ACCES LA MOSTENIRE---------------------------------------------

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

    ---------------------------------------------FUNCTII VIRTUALE. POLIMORFIZM---------------------------------------------

        Daca in lanțul de moștenire se repeta dubluri de proprietati si metode, obiectul va accesa cel mai apropiat 
        nume de variabila sau metoda.

        O functie virtuala face parte din clasa de baza si este redefinita de o clasa derivata.

           -> ... -> 0x001 A 0x001
        D
           -> ... -> 0xaf2 A 0x001

        -> A -> 0xda1 f() 0xcb3 
        -> B -> 0xaf2 f() 0xcb3  
        -> C -> 0xcb3 f() 0xcb3 

    */

    
    class A
    {    
    public:

        int y = 777;
        int x = 1;
        virtual void f() { cout << " A " << endl; }
    };


    class B : public A
    {
    public:

        int y = 888;
        int x = 2;
        void f() { cout << " B " << endl; }
        virtual void ff() { cout << " B ff " << endl; }
    };


    class C : public B
    {
    public:
    
        int x = 3;
        void f() { cout << " C " << endl; }
        void ff() { cout << " C ff " << endl; }
    };


    int main()
    {
        A a;
        a.f();

        B b;
        b.f();

        C c;
        c.f();

        cout << endl;

        A *p = new A;
        p->f();

        p = &b;
        p->f();

        p = &c;
        p->f();

        cout << endl;

        B *n = new B;
        n->ff();

        n = &c;
        n->ff();
		
		cout<<endl;
        
        C xxx;
        xxx.f();

        cout << " xxx.x = " << xxx.x << endl;
        cout << " xxx.y = " << xxx.y << endl;

        cout << endl;

        xxx.A::f();
        cout << " xxx.A::x = " << xxx.A::x << endl;
        cout << " xxx.B::y = " << xxx.B::y << endl;
        
        cout << "\n  Pointeri ::" << endl << endl;

        C *yyy = new C;

        yyy->f();

        cout << " xxx->x = " << yyy->x << endl;
        cout << " xxx->y = " << yyy->y << endl;

        cout << endl;

        yyy->A::f();
        cout << " xxx->A::x = " << yyy->A::x << endl;
        cout << " xxx->B::y = " << yyy->B::y << endl;
        
   
        return 0;
    }
