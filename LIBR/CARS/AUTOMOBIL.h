#include "../de_inclus.h"

class AUTOMOBIL
{
    float lungime;
    int litraj;
    int an_fabr;
    vector<string> caract;
    string Marca;
public:
    AUTOMOBIL(string M=" ",int an_f=0,float lung=0,int litr=0,float price=-1.0):Marca(M),an_fabr(an_f),lungime(lung),litraj(litr){}
    AUTOMOBIL(AUTOMOBIL& A):AUTOMOBIL(A.Marca,A.an_fabr,A.lungime,A.litraj){}
    ~AUTOMOBIL();
    void afiss ();
    string cc(string& desc);
    friend istream& operator>> (istream&in, AUTOMOBIL& a);
    friend ostream& operator<< (ostream&out, AUTOMOBIL& a);
};

istream& operator>> (istream&in, AUTOMOBIL& a)
    {
        in>>a.Marca>>a.an_fabr>>a.lungime>>a.litraj;
    }

ostream& operator<< (ostream&out, AUTOMOBIL& a)
{
    if(a.Marca!= " ")
            out<<"Marca : "<<a.Marca<<" | Anul: "<<a.an_fabr<<" | Lungime: "<<a.lungime<<"m | Litraj: "<<a.litraj<<"L\n";
    else out<<"Date nestocate\n";
}

string AUTOMOBIL::cc(string& desc)
{
    if(desc=="ORAS") return "Masina de oras";
    if(desc=="DRUM_LUNG") return "Masina de drum lung";
    if(desc=="VAN") return "Automobil tip VAN";
    if(desc=="SH") return "Second hand";
    if(desc=="57_LOCURI") return "5-7 locuri";
    return desc;
}

void AUTOMOBIL::afiss ()
{
    if(Marca!= " ")
        cout<<"Marca : "<<Marca<<" | Anul: "<<an_fabr<<" | Lungime: "<<lungime<<" | Litraj: "<<litraj<<"L\n";
    else cout<<"Date nestocate\n";
}

AUTOMOBIL::~AUTOMOBIL()
{
    Marca.clear();
    litraj=lungime=an_fabr=0;
}

