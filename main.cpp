#include "LIBR/FISIERE.h"


int main()
{
HATCHBACK hb("ceva acolo",2010,65,5,1,1,2500),hbb(hb);
MONOV_NOU mvn("Mono Poly",2000,66.5,5.4,0,12.5,2500), mvvv(mvn);
MONOV_SH mvs("Adidash",2006,85,5.5,3,2000), mvss(mvs);
cout<<mvvv<<mvss;
return 0;
}
