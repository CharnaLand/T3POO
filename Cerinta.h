/**
Dintr-un parc auto se poate cumpăra o gama variata de
automobile din urmatoarele clase:
        *MINI (mașini de oraș de mic litraj, de obicei sub 4m lungime),
        *MICA (mașini de oraș, cu spațiu interior mai mare decât MINI și lungime intre 3.85 și 4.1),
        *COMPACTA (mașini ușor de folosit atât de oraș cât și la drum lung, de dimensiune 4.2 – 4.5m;
modelele vin sub forma de
    hatchback,
    combi
    sedan) și
        *MONOVOLUME (automobile sub forma de van ce pot transporta 5-7 persoane).
Monovolumele pot și achizitionate atât noi cât și second hand.
La cele achizitionate sh se percepe un discount proportional cu numărul de ani vechime și, în lunile
de vara, beneficiaza de zile promotionale cu reducere fixa de 10% din preț.

Cerinta suplimentara:
- Să se adauge campurile și metodele necesare pentru implementarea
corecta;
- Să se construiasca clasa template Vanzare care sa conțină nr total de
mașini în stoc (decrementat automat la vanzarea unei masini), nr de
mașini vândute (incrementat automat) și doi vectori de pointeri la obiecte
de tip masina, alocati dinamic, prin care să se gestioneze automobilele din
stoc și cele vandute. Sa se supraincarce operatorul -= care sa
reactualizeze datele din clasa la vanzarea unei mașini, indiferent de tipul
acesteia.
- Sa se construiasca o specializare pentru tipul unsigned care sa
conțină și sa afiseze gestioneze doar MONOVOLUMELE.*/

/**
clasa VANZARE
*/
