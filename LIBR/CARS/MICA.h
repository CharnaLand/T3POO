#include "MINI.h"
class MICA : public AUTOMOBIL
{
    int cutie_manuala; ///0-AUTOMATA, 1-MANUALA
public:
    MICA(string M=" ",int an_f=0,float litr=0.0,float lung=0.0,int cut_man=0,float price=-1.0):AUTOMOBIL(M,an_f,litr,lung,price),cutie_manuala(cut_man)
    {
        cutie_manuala=1;
    }
    MICA(MICA& mi):AUTOMOBIL(mi),cutie_manuala(mi.cutie_manuala){}
    ~MICA()
    {
        cutie_manuala=0;
    }
    MICA& operator= (MICA& mc);
    void citire(istream& in);
    void afisare(ostream& out);
    ///FRIEND
    friend istream& operator>> (istream&in, MICA& a);
    friend ostream& operator<< (ostream&out, MICA& a);
};

MICA& MICA::operator= (MICA& mc)
{
    AUTOMOBIL::operator=(mc);
    cutie_manuala=mc.cutie_manuala;
}


void MICA::citire (istream& in)
{
    cout<<"\nSe citesc date pentru Masina MICA:\nNumele: ";
    getline(in,Marca);
    cout<<"Anul fabricatiei | Capacitate rezervol | Lungimea masinii\n";
    in>>an_fabr>>litraj>>lungime;
    cout<<"Cutie de viteza: 1.MANUALA | 2. AUTOMATA\n";
    string trac;
    in>>trac;
    trac=UPPER(trac);
    if(trac=="1" || trac=="MANUALA") cutie_manuala=1;
    else if(trac=="0" || trac=="AUTOMATA") cutie_manuala=0;
    cout<<"PRETUL: ";
    in>>pret;
string n;
getline(in,n);
}

void MICA::afisare (ostream& out)
{
    if(Marca!= " ")
        {
        out<<"Marca : "<<Marca<<" | Anul: "<<an_fabr<<" | Lungime: "<<lungime<<"m | Litraj:  "<<litraj<<" L";
        if(cutie_manuala) out<<" | Cutie viteze: MANUALA";
        else out<<" | Cutie viteze: AUTOMATA";
        out<<"\n| Tip: Mica";
        out<<" | PRET: "<<pret<<" EURO\n\n";
        }
}


istream& operator>> (istream&in, MICA& mi)
{
    mi.citire(in);
    return in;
}
ostream& operator<< (ostream&out, MICA& mi)
{
    mi.afisare(out);
    return out;
}
