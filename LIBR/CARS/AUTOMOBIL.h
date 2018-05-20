#include "../de_inclus.h"

class AUTOMOBIL
{
protected:
    float lungime;
    float pret;
    float consum_benzina;
    int viteza_maxima;
    int cai_putere;
    int an_fabr;
    string Marca;
public:
    AUTOMOBIL(string M=" ",int an_f=0,int vit_max=0,int cai_put=0,float cons_suta=0.0,float lung=0.0,float price=-1.0):Marca(M),an_fabr(an_f),viteza_maxima(vit_max),cai_putere(cai_put),consum_benzina(cons_suta),lungime(lung),pret(price){}
    AUTOMOBIL(AUTOMOBIL& A):AUTOMOBIL(A.Marca,A.an_fabr,A.viteza_maxima,A.cai_putere,A.consum_benzina,A.lungime,A.pret){}
    ~AUTOMOBIL();
    virtual void afiss (ostream& out);
    ///string cc(string& desc);
    friend istream& operator>> (istream&in, AUTOMOBIL& a);
    friend ostream& operator<< (ostream&out, AUTOMOBIL& a);
};

void AUTOMOBIL::afiss (ostream& out)
{
    if(Marca!= " ")
        {
        out<<"Marca : "<<Marca<<" | Anul: "<<an_fabr<<" | Lungime: "<<lungime<<"m | Cai putere : "<<cai_putere<<" CP";;
        out<<"\n\r | Consum benzina : "<<consum_benzina<<" L/100km | Viteza maxima : "<<viteza_maxima<<" km/h | PRET: "<<pret<<" EURO\n\n";
        }

}

AUTOMOBIL::~AUTOMOBIL()
{
    Marca.clear();
}

/**
istream& operator>> (istream&in, AUTOMOBIL& a)
{

}*/
ostream& operator<< (ostream&out, AUTOMOBIL& a)
{
    a.afiss(out);
    return out;
}


/*
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
*/
