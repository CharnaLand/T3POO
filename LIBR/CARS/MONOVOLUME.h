#include "COMPACTA.h"

class MONOVOLUME : public AUTOMOBIL
{
    int tip; ///0-NOU, 1-SH
    int discout;
    bool reducere;///0-NU, 1-DA
public:
    MONOVOLUME(string M=" ",int an_f=0,float lung=0.0,int litr=0):AUTOMOBIL(M,an_f,lung,litr)
    {
        tip=discout=reducere=0;
    }
    ~MONOVOLUME(){}
};
