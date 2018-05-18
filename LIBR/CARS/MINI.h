#include "AUTOMOBIL.h"


class MINI : public AUTOMOBIL
{

public:
    MINI(string M=" ",int an_f=0,float lung=0.0,int litr=0):AUTOMOBIL(M,an_f,lung,litr)
    {
        try
        {
            if(lung<4.0) throw lung;
        }
        catch(float lung)
        {
            cout<<"NU e bine..\n";
        }
    }
    ~MINI(){}
};


