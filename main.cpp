#include "LIBR/FISIERE.h"


int main()
{

VANZARI<AUTOMOBIL> V;
VANZARI<unsigned> M;
int op=1;
while(op)
{

    cout<<"1.ADAUGARE 'n' AUTOMOBILE IN STOCK\n";
    cout<<"2.ADAUGARE 'n' MONOVOLUME IN STOCK\n";
    cout<<"3.VANZARE AUTOMOBILE\n";
    cout<<"4.VANZARE MONOVOLUME\n";
    cout<<"5.AFISARE AUTOMOBILE\n";
    cout<<"6.AFISARE MONOVOLUME\n";
    cout<<"0.TERMINARE PROGRAM\n";
    cin>>op;
    switch(op)
    {
    case 1:
        {
            V.adaugare_stock();
            break;
        }
    case 2:
        {
            M.adaugare_stock();
            break;
        }
    case 3:
        {
            V.afis_stock();
            cout<<"ALEGETI UN NUMAR DE LA 1 LA "<<V.cate_stock<<": ";
            int ii;
            cin>>ii;
            V.vinde(i);
            break;
        }
    case 4:
        {
            M.afis_stock();
            cout<<"ALEGETI UN NUMAR DE LA 1 LA "<<M.cate_stock<<": ";
            int ii;
            cin>>ii;
            M.vinde(i);
            break;
        }
    case 5:
        {
            int op1;
            cout<<"\t1.AFISARE STROC\n";
            cout<<"\t2.AFISARE VANDUTE\n";
            cin>>op1;
            if(op1==1) V.afis_stock();
            if(op==2) V.afis_vandute();
            break;
        }
    case 6:
        {
            int op1;
            cout<<"\t1.AFISARE STROC\n";
            cout<<"\t2.AFISARE VANDUTE\n";
            cin>>op1;
            if(op1==1) M.afis_stock();
            if(op==2) M.afis_vandute();
            break;
        }
    case 0:
        {
            break;
        }
    }

}

return 0;
}
