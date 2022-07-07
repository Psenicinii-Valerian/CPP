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

    virtual public - la prima apelare operatorul preia informatia din clasa si o utilizeaza, iar la urmatoarele apelari 
    - el nu o preia de la inceput (de la 0), dar o reutilizeaza pe cea existenta deja

    Daca mostenirea nu este directa, nu vom putea reapela constructorul

--------------------------------------------------ZONA DE PROTECTIE PROTECTED---------------------------------------------

    protected - zona de protectie privata comuna in toate clasele mostenite

       -> C -> virtual A
    D
       -    > B -> virtual A

-----------------------------------------------TIPURI DE ACCES LA MOSTENIRE-----------------------------------------------

    tip mostenire  ::
    1. public ::      class derivata : public clasa_de_baza
       public     ->  public
       protected  ->  protected
       private    ->  nu se mosteneste

    2. protected ::   class derivata : protected clasa_de_baza
       public     ->  protected
       protected  ->  protected
       private    ->  nu se mosteneste

    3. privat ::      class derivata :  private clasa_de_baza (se mosteneste doar o singura data)
       public     ->  private
       protected  ->  private
       private    ->  nu se mosteneste

*/

    
    class A
    {
        int a;
        string a1;

    public:

        A( int a=NULL, string a1="\0" ) : a(a), a1(a1) { cout << " constructor clasa A" << endl; }

        ~A() { cout << " destructor clasa A" << endl; }

        void fA() { cout << " Clasa A :: fA()" << endl; }

        int getA() { return this->a; }
        string getA1() { return this->a1; }

    protected:

        int xA;
    };


    class B : public A
    {
        double b;

    public:

        B( int a = NULL, string a1 = "\0", double b=NULL ) : b(b), A(a,a1) { this->xA =123; cout << " constructor clasa B" << endl; }

        ~B() { cout << " destructor clasa B" << endl; }

        void fB() { cout << " Clasa B :: fB()" << endl; }

        void fxA() { cout << " xA = " << this->xA << endl; }

        double getB() { return this->b; }

    protected:

        int xB;
    };
    


    class C
    {
         int c;
         double c1;
         string c2;

    public:

         C( int c=NULL, double c1=NULL, string c2="\0") : c(c), c1(c1), c2(c2) { cout << " constructor clasa C" << endl; }

         ~C( ) { cout << " destructor clasa C" << endl; }

         void fC() { cout << " Clasa C :: fC()" << endl; }

         int getC() { return this->c; }
         double getC1() { return this->c1; }
         string getC2() { return this->c2; }

    protected:

         int xC;
    };


    class D : protected C
    {
         string d;

    public:

         D (int c = NULL, double c1 = NULL, string c2 = "\0", string d = "\0") : C(c, c1, c2), d(d) 
            { cout << " constructor clasa D" << endl; }
         
         ~D() { cout << " destructor clasa D" << endl; }

         void fD() { cout << " Clasa D :: fD()" << endl; }



    protected:

         int xD;
    };

    class X : protected D 
    {

    public:

         X( int c = NULL, double c1 = NULL, string c2 = "\0", string d = "\0" ) : D(c,c1,c2,d)
            { cout << " Constructor clasa X" << endl; }

         ~X() { cout << " destructor clasa X" << endl; }

         void fX() { this->fX(); cout << " Clasa X :: fX()" << endl; }

         int xgetC()  { return this->getC(); }
         double xgetC1() { return this->getC1(); }
         string xgetC2() { return this->getC2(); }
         void xfD() { this->fD(); }
         void setxC() { cout << " Dati xC = "; cin >> this->xC; }
         int getxC() { return this->xC; }

         

    protected:

        int xX;
    };
    


    class E
    {
        int e;

    public:

        E() { cout << " constructor clasa E" << endl; }

        ~E() { cout << " destructor clasa E" << endl; }

        void fE() { cout << " Clasa E :: fE()" << endl; }

        void setE() { cout << " E = "; cin >> this->e; }
        int getE() { return this->e; }

    protected:

        int xE;
    };


    class F : private E
    {
        int f;

    public:

        F() { cout << " constructor clasa F" << endl; }

        ~F() { cout << " destructor clasa F" << endl; }

        void fF() { this->setE();  cout << " Clasa F :: fF() = " << this->getE() << endl; }
        int getEE() { return this->getE(); }

    protected:

        int xF;
    };

    class G : private F
    {
        float g;

     public:

         G( float g=NULL ) : g(g) { cout << " constructor clasa G" << endl; }

         ~G() { cout << " destructor clasa G" << endl; }

         void setxF() { cout << " Dati xF = "; cin >> this->xF; }
         int getxF() { return this->xF; }

         void fG() { cout << " Clasa G :: "; this->fF(); }
         float getG() { return this->g; }
         int getGEE() { return this->getEE(); }

    };


    int main()
    {   
        B x(777, "Jorel", 4.55);

        x.fxA();
        cout << " A = " << x.getA()<<endl;
        cout << " A1 = " << x.getA1() << endl;
        cout << " B = " << x.getB() << endl;

        cout << endl;

        X xx(555, 5.77, "Mihai", "LPS2115ro");;
        cout << " C = " << xx.xgetC() << endl;
        cout << " C1 = " << xx.xgetC1() << endl;
        cout << " C2 = " << xx.xgetC2() << endl;
        xx.xfD();
        xx.setxC();
        cout << " xC = " << xx.getxC() << endl;

        cout << endl;

        
        F xxx;

        xxx.fF();
        cout << " x.getEE() = " << xxx.getEE() << endl;

        cout << endl;

        G yyy(9.875);
        cout << " G = " << yyy.getG() << endl;
        yyy.setxF();        
        cout << " xF = " << yyy.getxF() << endl << endl;      
        yyy.fG();
        cout << " getGEE() = " << yyy.getGEE() << endl;

        cout << endl;

        

        return 0;
    }