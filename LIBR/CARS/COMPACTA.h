#include "MICA.h"

class COMPACTA : public AUTOMOBIL
{
protected:
    int senzori_parcare;///0-NU 1-DA
public:
    COMPACTA(string M=" ",int an_f=0,float litr=0.0,float lung=0.0,int senz_par=1,float price=-1.0):AUTOMOBIL(M,an_f,litr,lung,price),senzori_parcare(senz_par){}
    COMPACTA(COMPACTA& CP):AUTOMOBIL(CP),senzori_parcare(CP.senzori_parcare){}
    ~COMPACTA(){senzori_parcare=0;}
    virtual string tip () {return "COMPACTA";}
    COMPACTA& operator= (COMPACTA& cp);
    virtual void citire(istream& in);
    virtual void afisare(ostream& out);
    friend istream& operator>> (istream& in, COMPACTA& cp);
    friend ostream& operator<< (ostream& out, COMPACTA& cp);
};


class HATCHBACK: public COMPACTA
{
    int susp_portb;  ///0-NEAUTOMATE 1-AUTOMATE
public:
    HATCHBACK(string M=" ",int an_f=0,float litr=0.0,float lung=0.0,int senz_par=0,int susp=0,float price=-1.0):COMPACTA(M,an_f,litr,lung,senz_par,price),susp_portb(susp){}
    ~HATCHBACK(){susp_portb=0;}
    string tip () {return "HATCHBACK COMPACT";}
    HATCHBACK& operator= (HATCHBACK& hb);
    void citire(istream& in);
    void afisare(ostream& out);
    friend istream& operator>> (istream& in, HATCHBACK& hb);
    friend ostream& operator<< (ostream& out, HATCHBACK& hb);
};



class COMBI: public COMPACTA
{
    int scaune_rabatabile; ///0-NU 1-DA
public:
    COMBI(string M=" ",int an_f=0,float litr=0.0,float lung=0.0,int senz_par=1,int sca_rab=0,float price=-1.0):COMPACTA(M,an_f,litr,lung,senz_par,price),scaune_rabatabile(sca_rab){}
    ~COMBI()
    {scaune_rabatabile=0;}
    string tip () {return "COMBI COMPACT";}
    COMBI& operator= (COMBI& cb);
    void citire(istream& in);
    void afisare(ostream& out);
    friend istream& operator>> (istream& in, COMBI& cb);
    friend ostream& operator<< (ostream& out, COMBI& cb);
};


class SEDAN: public COMPACTA
{
    int motor_fata; ///0-MOTOR_SPATE 1-MOTOR_FATA
public:
    SEDAN(string M=" ",int an_f=0,float litr=0.0,float lung=0.0,int senz_par=1,int motor_f=0,float price=-1.0):COMPACTA(M,an_f,litr,lung,senz_par,price),motor_fata(motor_f){}
    ~SEDAN()
    {motor_fata=0;}
    string tip () {return "SEDAN COMPACT";}
    SEDAN& operator= (SEDAN& sd);
    void citire(istream& in);
    void afisare(ostream& out);
    friend istream& operator>> (istream& in, SEDAN& sd);
    friend ostream& operator<< (ostream& out, SEDAN& sd);
};


COMPACTA& COMPACTA::operator= (COMPACTA& cp)
{
    AUTOMOBIL::operator=(cp);
    senzori_parcare=cp.senzori_parcare;
    return *this;
}
HATCHBACK& HATCHBACK::operator= (HATCHBACK& hb)
{
    COMPACTA::operator=(hb);
    susp_portb=hb.susp_portb;
    return *this;
}
COMBI& COMBI::operator= (COMBI& cb)
{
    COMPACTA::operator=(cb);
    scaune_rabatabile=cb.scaune_rabatabile;
    return *this;
}

SEDAN& SEDAN::operator= (SEDAN& sd)
{
    COMPACTA::operator=(sd);
    motor_fata=sd.motor_fata;
    return *this;
}


void COMPACTA::citire (istream& in)
{
    cout<<"\nSe citesc date pentru Masina COMPACTA:\nNumele: ";
    getline(in,Marca);
    cout<<"Anul fabricatiei | Capacitate rezervol | Lungimea masinii\n";
    in>>an_fabr>>litraj>>lungime;

    cout<<"Senzori de parcare: 1.DA | 2.NU\n";
    string sir;
    in>>sir;
    sir=UPPER(sir);
    if(sir=="1" || sir=="DA") senzori_parcare=1;
    else if(sir=="2" || sir=="NU") senzori_parcare=0;

    cout<<"PRETUL: ";
    in>>pret;
string n;
getline(in,n);
}
void HATCHBACK::citire (istream& in)
{
    cout<<"\nSe citesc date pentru Masina HATCHBACK COMPACT:\nNumele: ";
    getline(in,Marca);
    cout<<"Anul fabricatiei | Capacitate rezervol | Lungimea masinii\n";
    in>>an_fabr>>litraj>>lungime;

    cout<<"Senzori de parcare: 1.DA | 2.NU\n";
    string sir;
    in>>sir;
    sir=UPPER(sir);
    if(sir=="1" || sir=="DA") senzori_parcare=1;
    else if(sir=="2" || sir=="NU") senzori_parcare=0;

    cout<<"Suspensii automate portbagaj: 1.DA | 2.NU\n";
    in>>sir;
    sir=UPPER(sir);
    if(sir=="1" || sir=="DA") susp_portb=1;
    else if(sir=="2" || sir=="NU") susp_portb=0;

    cout<<"PRETUL: ";
    in>>pret;
string n;
getline(in,n);
}
void COMBI::citire (istream& in)
{
    cout<<"\nSe citesc date pentru Masina COMBI COMPACT:\nNumele: ";
    getline(in,Marca);
    cout<<"Anul fabricatiei | Capacitate rezervol | Lungimea masinii\n";
    in>>an_fabr>>litraj>>lungime;

    cout<<"Senzori de parcare: 1.DA | 2.NU\n";
    string sir;
    in>>sir;
    sir=UPPER(sir);
    if(sir=="1" || sir=="DA") senzori_parcare=1;
    else if(sir=="2" || sir=="NU") senzori_parcare=0;

    cout<<"Scaune rabatabile spate: 1.DA | 2.NU\n";
    in>>sir;
    sir=UPPER(sir);
    if(sir=="1" || sir=="DA") scaune_rabatabile=1;
    else if(sir=="2" || sir=="NU") scaune_rabatabile=0;

    cout<<"PRETUL: ";
    in>>pret;
string n;
getline(in,n);
}
void SEDAN::citire (istream& in)
{
    cout<<"\nSe citesc date pentru Masina SEDAN COMPACT:\nNumele: ";
    getline(in,Marca);
    cout<<"Anul fabricatiei | Capacitate rezervol | Lungimea masinii\n";
    in>>an_fabr>>litraj>>lungime;

    cout<<"Senzori de parcare: 1.DA | 2.NU\n";
    string sir;
    in>>sir;
    sir=UPPER(sir);
    if(sir=="1" || sir=="DA") senzori_parcare=1;
    else if(sir=="2" || sir=="NU") senzori_parcare=0;

    cout<<"Plasare motor: 1.FATA | 2.SPATE\n";
    in>>sir;
    sir=UPPER(sir);
    if(sir=="1" || sir=="FATA") motor_fata=1;
    else if(sir=="2" || sir=="SPATE") motor_fata=0;

    cout<<"PRETUL: ";
    in>>pret;
    string n;
    getline(in,n);
}

void COMPACTA::afisare (ostream& out)
{
    if(Marca!= " ")
        {
        out<<"Marca : "<<Marca<<" | Anul: "<<an_fabr<<" | Lungime: "<<lungime<<"m | Litraj:  "<<litraj<<" L";;
        if(senzori_parcare) out<<" | Senzori de parcare";
else out<<" | Fara senzori de parcare";
        out<<"\n|Tip: Compact";
        out<<" | PRET: "<<pret<<" EURO\n\n";
        }
}

void HATCHBACK::afisare (ostream& out)
{
    if(Marca!= " ")
        {
        out<<"Marca : "<<Marca<<" | Anul: "<<an_fabr<<" | Lungime: "<<lungime<<"m | Litraj:  "<<litraj<<" L";;
        if(senzori_parcare) out<<" | Senzori de parcare";
else out<<" | Fara senzori de parcare";
        if(susp_portb) out<<" | Deschidere hidraulica portbagaj";
        out<<"\n| Tip: Hatchback Compact";
        out<<" | PRET: "<<pret<<" EURO\n\n";
        }
}

void COMBI::afisare (ostream& out)
{
    if(Marca!= " ")
        {
        out<<"Marca : "<<Marca<<" | Anul: "<<an_fabr<<" | Lungime: "<<lungime<<"m | Litraj:  "<<litraj<<" L";;
        if(senzori_parcare) out<<" | Senzori de parcare";
else out<<" | Fara senzori de parcare";
        if(scaune_rabatabile) out<<" | Scaune rabatabile";
        out<<"\n| Tip: Combi Compact";
        out<<" | PRET: "<<pret<<" EURO\n\n";
        }
}

void SEDAN::afisare (ostream& out)
{
    if(Marca!= " ")
        {
        out<<"Marca : "<<Marca<<" | Anul: "<<an_fabr<<" | Lungime: "<<lungime<<"m | Litraj:  "<<litraj<<" L";
        if(senzori_parcare) out<<" | Senzori de parcare";
else out<<" | Fara senzori de parcare";
        if(motor_fata) out<<" | Motor plasat FATA";
        else out<<" | Motor plasat SPATE";
        out<<"\n| Tip: Sedan Compact";
        out<<" | PRET: "<<pret<<" EURO\n\n";
        }
}



istream& operator>> (istream&in, COMPACTA& cp)
{
    cp.citire(in);
    return in;
}
ostream& operator<< (ostream&out, COMPACTA& cp)
{
    cp.afisare(out);
    return out;
}

istream& operator>> (istream& in, HATCHBACK& hb)
{
    hb.citire(in);
    return in;
}
ostream& operator<< (ostream& out, HATCHBACK& hb)
{
    hb.afisare(out);
    return out;
}

istream& operator>> (istream& in, COMBI& cb)
{
    cb.citire(in);
    return in;
}
ostream& operator<< (ostream& out, COMBI& cb)
{
    cb.afisare(out);
    return out;
}

istream& operator>> (istream& in, SEDAN& sd)
{
    sd.citire(in);
    return in;
}
ostream& operator<< (ostream& out, SEDAN& sd)
{
    sd.afisare(out);
    return out;
}
