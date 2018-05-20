#include "AUTOMOBIL.h"


class MINI : public AUTOMOBIL
{
    int tractiune_fata;///0-SPATE 1-FATA
public:
    MINI(string M=" ",int an_f=0,float litr=0.0,float lung=0.0,int tr_fat=1,float price=-1.0):AUTOMOBIL(M,an_f,litr,lung,price),tractiune_fata(tr_fat)
    {}
    MINI(MINI& M):AUTOMOBIL(M),tractiune_fata(M.tractiune_fata){}
    ~MINI(){}
    void afiss(ostream& out);
};


void MINI::afiss (ostream& out)
{
    if(Marca!= " ")
        {
        out<<"Marca : "<<Marca<<" | Anul: "<<an_fabr<<" | Lungime: "<<lungime<<"m | Litraj:  "<<litraj<<" L";
        if(tractiune_fata) out<<" | Tractiune: FATA";
        else out<<" | Tractiune: SPATE";
        out<<"\n|Tip: Mini";
        out<<" | PRET: "<<pret<<" EURO\n\n";
        }
}
