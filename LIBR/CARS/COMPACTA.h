#include "MICA.h"

class COMPACTA : public AUTOMOBIL
{
protected:
    int senzori_parcare;///0-NU 1-DA
public:
    COMPACTA(string M=" ",int an_f=0,int vit_max=0,int cai_put=0,float cons_suta=0.0,float lung=0.0,int senz_par=1,float price=-1.0):AUTOMOBIL(M,an_f,vit_max,cai_put,cons_suta,lung,price),senzori_parcare(senz_par){}
    COMPACTA(COMPACTA& CP):AUTOMOBIL(CP),senzori_parcare(CP.senzori_parcare){}
    ~COMPACTA(){}
    virtual void afiss(ostream& out);
//    friend istream& operator>> (istream& in, COMPACTA& cp);
    friend ostream& operator<< (ostream& out, COMPACTA& cp);
};

void COMPACTA::afiss (ostream& out)
{
    if(Marca!= " ")
        {
        out<<"Marca : "<<Marca<<" | Anul: "<<an_fabr<<" | Lungime: "<<lungime<<"m | Cai putere : "<<cai_putere<<" CP";
        if(senzori_parcare) out<<" | Senzori de parcare";
        out<<"\n\r|Tip: Compact";
        out<<" | Consum benzina : "<<consum_benzina<<" L/100km | Viteza maxima : "<<viteza_maxima<<" km/h | PRET: "<<pret<<" EURO\n\n";
        }
}

ostream& operator<< (ostream& out, COMPACTA& cp)
{
    cp.afiss(out);
    return out;
}

class HATCHBACK: public COMPACTA
{
    int susp_portb;  ///0-NEAUTOMATE 1-AUTOMATE
public:
    HATCHBACK(string M=" ",int an_f=0,int vit_max=0,int cai_put=0,float cons_suta=0.0,float lung=0.0,int senz_par=0,int susp=0,float price=-1.0):COMPACTA(M,an_f,vit_max,cai_put,cons_suta,lung,senz_par,price),susp_portb(susp){}
    ~HATCHBACK(){}
    void afiss(ostream& out);
//    friend istream& operator>> (istream& in, HATCHBACK& hb);
    friend ostream& operator<< (ostream& out, HATCHBACK& hb);
};

void HATCHBACK::afiss (ostream& out)
{
    if(Marca!= " ")
        {
        out<<"Marca : "<<Marca<<" | Anul: "<<an_fabr<<" | Lungime: "<<lungime<<"m | Cai putere : "<<cai_putere<<" CP";
        if(senzori_parcare) out<<" | Senzori de parcare";
        if(susp_portb) out<<" | Deschidere hidraulica portbagaj";
        out<<"\n\r| Tip: Hatchback Compact";
        out<<" | Consum benzina : "<<consum_benzina<<" L/100km | Viteza maxima : "<<viteza_maxima<<" km/h | PRET: "<<pret<<" EURO\n\n";
        }
}

ostream& operator<< (ostream& out, HATCHBACK& hb)
{
    hb.afiss(out);
    return out;
}

class COMBI: public COMPACTA
{
    int scaune_rabatabile; ///0-NU 1-DA
public:
    COMBI(string M=" ",int an_f=0,int vit_max=0,int cai_put=0,float cons_suta=0.0,float lung=0.0,int senz_par=1,int sca_rab=0,float price=-1.0):COMPACTA(M,an_f,vit_max,cai_put,cons_suta,lung,senz_par,price),scaune_rabatabile(sca_rab){}
    ~COMBI()
    {
        scaune_rabatabile=0;
    }
    void afiss(ostream& out);
    friend istream& operator>> (istream& in, COMBI& cb);
    friend ostream& operator<< (ostream& out, COMBI& cb);
};

void COMBI::afiss (ostream& out)
{
    if(Marca!= " ")
        {
        out<<"Marca : "<<Marca<<" | Anul: "<<an_fabr<<" | Lungime: "<<lungime<<"m | Cai putere : "<<cai_putere<<" CP";
        if(senzori_parcare) out<<" | Senzori de parcare";
        if(scaune_rabatabile) out<<" | Scaune rabatabile";
        out<<"\n\r| Tip: Combi Compact";
        out<<" | Consum benzina : "<<consum_benzina<<" L/100km | Viteza maxima : "<<viteza_maxima<<" km/h | PRET: "<<pret<<" EURO\n";
        }
}

ostream& operator<< (ostream& out, COMBI& cb)
{
    cb.afiss(out);
    return out;
}

class SEDAN: public COMPACTA
{
    int motor_fata; ///0-MOTOR_SPATE 1-MOTOR_FATA
public:
    SEDAN(string M=" ",int an_f=0,int vit_max=0,int cai_put=0,float cons_suta=0.0,float lung=0.0,int senz_par=1,int motor_f=0,float price=-1.0):COMPACTA(M,an_f,vit_max,cai_put,cons_suta,lung,senz_par,price),motor_fata(motor_f){}
    ~SEDAN()
    {
        motor_fata=0;
    }
    void afiss(ostream& out);
    friend istream& operator>> (istream& in, SEDAN& sd);
    friend ostream& operator<< (ostream& out, SEDAN& sd);
};

void SEDAN::afiss (ostream& out)
{
    if(Marca!= " ")
        {
        out<<"Marca : "<<Marca<<" | Anul: "<<an_fabr<<" | Lungime: "<<lungime<<"m | Cai putere : "<<cai_putere<<" CP";
        if(senzori_parcare) out<<" | Senzori de parcare";
        if(motor_fata) out<<" | Portbagaj spate";
        else out<<" | Portbagaj frontal";
        out<<"\n\r| Tip: Sedan Compact";
        out<<" | Consum benzina : "<<consum_benzina<<" L/100km | Viteza maxima : "<<viteza_maxima<<" km/h | PRET: "<<pret<<" EURO\n\n";
        }
}

ostream& operator<< (ostream& out, SEDAN& sd)
{
    sd.afiss(out);
    return out;
}
