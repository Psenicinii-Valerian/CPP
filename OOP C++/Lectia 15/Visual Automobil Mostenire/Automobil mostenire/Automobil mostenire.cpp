#include <iostream>

using namespace std;

/*
    ****************************************PROGRAMAREA ORIENTATA OBIECT*****************************************

----------------------------------------------------MOSTENIREA-------------------------------------------------------

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

--------------------------------------------MOSTENIREA MULTIPLA. OPERATORUL VIRTUAL--------------------------------------------

Mostenirea se imparte in 2 grupuri:
1) mostenirea simpla - cand o clasa mosteneste o singura clasa
2) mostenirea multipla - cand o clasa mosteneste mai multe clase direct

Clasele virtuale ne permit sa nu redeclaram memoria unei clase deja declarate (utilizam virtual public)

virtual public - la prima apelare operatorul preia informatia din clasa si o utilizeaza, iar la urmatoarele apelari - el
nu o preia de la inceput (de la 0), dar o reutilizeaza pe cea existenta deja

Daca mostenirea nu este directa, nu vom putea reapela constructorul

--------------------------------------------------ZONA DE PROTECTIE PROTECTED--------------------------------------------------

protected - zona de protectie privata comuna in toate clasele mostenite

*/

class roti
{
protected:

    string anvelope;
    string jante;

public:
    roti(string anvelope = "\0", string jante = "\0") : anvelope(anvelope), jante(jante)
    {
        cout << " Constructor class roti" << endl;
    }

    ~roti() { cout << " Destructor clasa roti" << endl; }

    string getANVELOPE() { return this->anvelope; }
    string getJANTE() { return this->jante; }
};


class motor
{
protected:

    float volum;
    int cai;
    float stage;
    string producator;
    string alimentare;

public:

    motor(int cai = NULL, float volum = NULL, float stage = NULL, string producator = "\0", string alimentare = "\0")
        : cai(cai), volum(volum), stage(stage), producator(producator), alimentare(alimentare)
    {
        cout << " Constructor class motor" << endl;
    }

    ~motor() { cout << " Destructor class motor" << endl; }

    int getCAI() { return this->cai; }
    float getSTAGE() { return this->stage; }
    float getVOLUM() { return this->volum; }
    string getPRODUCATOR() { return this->producator; }
    string getALIMENTARE() { return this->alimentare; }
};


class caroserie
{
protected:

    int locuri;
    string tip;

public:

    caroserie(int locuri = NULL, string tip = "\0") : locuri(locuri), tip(tip)
    {
        cout << " Constructor class caroserie" << endl;
    }

    ~caroserie() { cout << " Destructor class caroserie" << endl; }

    int getLOCURI() { return this->locuri; }
    string getTIP() { return this->tip; }
};

class automobil : virtual public caroserie, virtual public motor, virtual public roti
{
    float uzura;
    float pret;
    int anul;
    string prod;
    string model;
    string tara;
    string culoare;
    string tractiune;
    string cutie;
    string stare;

public:

    automobil(string prod = "\0", string model = "\0", string stare = "\0", float stage = NULL, float pret = NULL,
        int anul = NULL, string cutie = "\0", string culoare = "\0", string tara = "\0", string tractiune = "\0",
        string tip = "\0", int locuri = NULL, float uzura = NULL, string producator = "\0", string alimentare = "\0",
        int cai = NULL, float volum = NULL, string jante = "\0", string anvelope = "\0")
        : prod(prod), model(model), pret(pret), stare(stare), cutie(cutie), culoare(culoare), tara(tara), anul(anul),
        tractiune(tractiune)

    {
        this->tip = tip;
        this->locuri = locuri;
        this->stage = stage;
        this->uzura = uzura;
        this->producator = producator;
        this->alimentare = alimentare;
        this->cai = cai;
        this->volum = volum;
        this->jante = jante;
        this->anvelope = anvelope;

        cout << " Constructor class automobil" << endl;
    }

    ~automobil() { cout << " Destructor class automobil" << endl; }

    string getPROD() { return this->prod; }
    string getMODEL() { return this->model; }
    string getTARA() { return this->tara; }
    string getCULOARE() { return this->culoare; }
    string getTRACTIUNE() { return this->tractiune; }
    string getCUTIE() { return this->cutie; }
    string getSTARE() { return this->stare; }
    float getUZURA() { return this->uzura; }
    int getANUL() { return this->anul; }
    float getPRET() { return this->pret; }
};


int main()
{
    automobil X("Volkswagen", "Golf 7 GTI", "nou", 3, 19640, 2014, "automata", "alb", "Germania", "din fata", "hatchback",
        5, 37700, "VAG", "benzina", 400, 2000, "Volkswagen Golf", "Michelin");

    cout << endl;
    cout << " Caracteristici automobil " << endl;
    cout << " Producator :: " << X.getPROD() << endl;
    cout << " Model :: " << X.getMODEL() << endl;
    cout << " Stare :: " << X.getSTARE() << endl;
    cout << " Stage :: " << X.getSTAGE() << endl;
    cout << " Pret :: " << X.getPRET() << " $" << endl;
    cout << " Anul fabricarii :: " << X.getANUL() << endl;
    cout << " Tip cutie de viteze :: " << X.getCUTIE() << endl;
    cout << " Culoarea :: " << X.getCULOARE() << endl;
    cout << " Tara de origine :: " << X.getTARA() << endl;
    cout << " Tipul tractiuni :: " << X.getTRACTIUNE() << endl;
    cout << " Tipul caroseriei :: " << X.getTIP() << endl;
    cout << " Numarul de locuri :: " << X.getLOCURI() << endl;
    cout << " Uzura automobilului :: " << X.getUZURA() << " km" << endl;
    cout << " Producatorul motorului :: " << X.getPRODUCATOR() << endl;
    cout << " Combustibilul pentru alimentare :: " << X.getALIMENTARE() << endl;
    cout << " Numarul de cai putere :: " << X.getCAI() << endl;
    cout << " Volumul motorului :: " << X.getVOLUM() << " cm3" << endl;
    cout << " Producatorul jantelor :: " << X.getJANTE() << endl;
    cout << " Producatorul anvelopelor :: " << X.getANVELOPE() << endl;
    cout << endl;

    // link :: https://999.md/ru/75936368

    return 0;
}