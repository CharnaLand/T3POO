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
    void afiss(ostream& out);
};

void MICA::afiss (ostream& out)
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
