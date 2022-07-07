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

--------------------------------------------MOSTENIREA MULTIPLA. OPERATORUL VIRTUAL---------------------------------------

    Mostenirea se imparte in 2 grupuri:
    1) mostenirea simpla - cand o clasa mosteneste o singura clasa
    2) mostenirea multipla - cand o clasa mosteneste mai multe clase direct

    Clasele virtuale ne permit sa nu redeclaram memoria unei clase deja declarate (utilizam virtual public)

    virtual public - la prima apelare operatorul preia informatia din clasa si o utilizeaza, iar la urmatoarele apelari - el
    nu o preia de la inceput (de la 0), dar o reutilizeaza pe cea existenta deja

    Daca mostenirea nu este directa, nu vom putea reapela constructorul

--------------------------------------------------ZONA DE PROTECTIE PROTECTED---------------------------------------------

    protected - zona de protectie privata comuna in toate clasele mostenite

       -> C -> virtual A
    D
       -    > B -> virtual A

-----------------------------------------------TIPURI DE ACCES LA MOSTENIRE-----------------------------------------------

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

*/

    /*
    class A
    {
        int a;

     public:

        A() { cout << " constructor clasa A" << endl; }

        ~A() { cout << " destructor clasa A" << endl; }

        void fA() { cout << " Clasa A :: fA()" << endl; }

     protected:

        int xA;
    };

    
    class B : public A
    {
        int b;

     public:

        B() { this->xA =123; cout << " constructor clasa B" << endl; }

        ~B() { cout << " destructor clasa B" << endl; }

        void fB() { cout << " Clasa B :: fB()" << endl; }

     protected:

        int xB;
    };  
    
    
    /*
    class A
    {
         int a;

     public:

         A() { cout << " constructor clasa A" << endl; }

         ~A() { cout << " destructor clasa A" << endl; }

         void fA() { cout << " Clasa A :: fA()" << endl; }

     protected:

         int xA;
    };


    class B : protected A
    {
         int b;

     public:

         B() { cout << " constructor clasa B" << endl; }

         ~B() { cout << " destructor clasa B" << endl; }

         void fB() { this->fA(); cout << " Clasa B :: fB()" << endl; }

     protected:

         int xB;
    };
    */


    class A
    {
         int a;

     public:

         A() { cout << " constructor clasa A" << endl; }

         ~A() { cout << " destructor clasa A" << endl; }

         void fA() { cout << " Clasa A :: fA()" << endl; }

         void setA() { cout << " A = "; cin >> this->a; }
         int getA() { return this->a; }

     protected:

         int xA;
    };


    class B : private A
    {
         int b;

     public:

         B() { cout << " constructor clasa B" << endl; }

         ~B() { cout << " destructor clasa B" << endl; }

         void fB() { this->setA();  cout << " Clasa B :: fB() = " << this->getA() << endl; }
         int getAA() { return this->getA(); }

     protected:

         int xB;
    };


    int main()
    {
         B x;

         x.fB();
         cout<<" x.getAA() = "<<x.getAA()<<endl;

         return 0;
    }