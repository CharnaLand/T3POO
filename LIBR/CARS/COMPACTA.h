#include "MICA.h"

class COMPACTA : public AUTOMOBIL
{
    int forma;///1- HATCHBACK, 2-COMBI, 3-SEDAN
public:
    COMPACTA(string M=" ",int an_f=0,float lung=0.0,int litr=0,int form=0):AUTOMOBIL(M,an_f,lung,litr),forma(form){}
    ~COMPACTA(){}
};
