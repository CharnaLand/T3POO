#include "AUTOMOBIL.h"


class MINI : public AUTOMOBIL
{
    int tractiune_fata;///0-SPATE 1-FATA
public:
    MINI(string M=" ",int an_f=0,int vit_max=0,int cai_put=0,float cons_suta=0.0,float lung=0.0,int tr_fat=1,float price=-1.0):AUTOMOBIL(M,an_f,vit_max,cai_put,cons_suta,lung,price),tractiune_fata(tr_fat)
    {}
    MINI(MINI& M):AUTOMOBIL(M),tractiune_fata(M.tractiune_fata){}
    ~MINI(){}
    void afiss(ostream& out);
};


void MINI::afiss (ostream& out)
{
    if(Marca!= " ")
        {
        out<<"Marca : "<<Marca<<" | Anul: "<<an_fabr<<" | Lungime: "<<lungime<<"m | Cai putere : "<<cai_putere<<" CP";
        if(tractiune_fata) out<<" | Tractiune: FATA";
        else out<<" | Tractiune: SPATE";
        out<<"\n\r|Tip: Mini";
        out<<" | Consum benzina : "<<consum_benzina<<" L/100km | Viteza maxima : "<<viteza_maxima<<" km/h | PRET: "<<pret<<" EURO\n\n";
        }
}
