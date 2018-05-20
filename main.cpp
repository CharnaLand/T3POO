#include "LIBR/FISIERE.h"


int main()
{
VANZARI<MINI> Mgz_mini;
Mgz_mini.adaugare_stock_fisier("date.in");
Mgz_mini.vinde(1);
Mgz_mini.vinde(2);
Mgz_mini.afis_stock();
Mgz_mini.afis_vandute();
return 0;
}
