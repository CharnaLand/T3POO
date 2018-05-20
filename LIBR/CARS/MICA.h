#include "MINI.h"
class MICA : public AUTOMOBIL
{
    int cutie_manuala; ///0-AUTOMATA, 1-MANUALA
public:
    MICA(string M=" ",int an_f=0,int vit_max=0,int cai_put=0,float cons_suta=0.0,float lung=0.0,int cut_man=0,float price=-1.0):AUTOMOBIL(M,an_f,vit_max,cai_put,cons_suta,lung,price),cutie_manuala(cut_man)
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
        out<<"Marca : "<<Marca<<" | Anul: "<<an_fabr<<" | Lungime: "<<lungime<<"m | Cai putere : "<<cai_putere<<" CP";
        if(cutie_manuala) out<<" | Cutie viteze: MANUALA";
        else out<<" | Cutie viteze: AUTOMATA";
        out<<"\n\r| Tip: Mica";
        out<<" | Consum benzina : "<<consum_benzina<<" L/100km | Viteza maxima : "<<viteza_maxima<<" km/h | PRET: "<<pret<<" EURO\n\n";
        }
}
