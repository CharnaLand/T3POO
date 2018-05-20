#include "COMPACTA.h"

class MONOVOLUME : public AUTOMOBIL
{
protected:
    int deschidere_usi;///0-OBISNUITE 1-PIVOTARE 2-CULISANTA
public:
    MONOVOLUME(string M=" ",int an_f=0,float litr=0.0,float lung=0.0,int desch_usi=0,float price=-1.0):AUTOMOBIL(M,an_f,litr,lung,price),deschidere_usi(desch_usi)
    {}
    MONOVOLUME(MONOVOLUME& mo):AUTOMOBIL(mo),deschidere_usi(mo.deschidere_usi){}
    ~MONOVOLUME(){}
};

class MONOV_NOU: public MONOVOLUME
{
    float dicout_inteprinderi;
public:
    MONOV_NOU(string M=" ",int an_f=0,float litr=0.0,float lung=0.0,int desch_usi=0,float disc=0.0,float price=-1.0):MONOVOLUME(M,an_f,litr,lung,desch_usi,price),dicout_inteprinderi(disc)
    {}
    MONOV_NOU(MONOV_NOU& mvn):MONOVOLUME(mvn),dicout_inteprinderi(mvn.dicout_inteprinderi){}
    ~MONOV_NOU();
};

class MONOV_SH: public MONOVOLUME
{
    float discout_vechime;
    bool reducere;  ///CEVA CU VARA
public:
    MONOV_SH(string M=" ",int an_f=0,float litr=0.0,float lung=0.0,int desch_usi=0,float disc_vec=0.0,bool red=0.0,float price=-1.0):MONOVOLUME(M,an_f, litr,lung,desch_usi,price),discout_vechime(disc_vec),reducere(red)
    {}
    MONOV_SH(MONOV_SH& mvsh):MONOVOLUME(mvsh),discout_vechime(mvsh.discout_vechime),reducere(mvsh.reducere){}
    ~MONOV_SH();
};
