#include "CARS/MONOVOLUME.h"

template <class T>
class VANZARI
{
    int nr_stock;
    int nr_vandute;
    vector<T*> stock;
    vector<T*> vandute;
public:
    VANZARI(){nr_stock=nr_vandute=0;}
    ~VANZARI()
    {
        nr_stock=nr_vandute=0;
        stock.clear();
        vandute.clear();
    }
    void vinde (int i)
    {
        vandute.push_back(stock[i-1]);
        stock.erase(stock.begin(),i-1);
        nr_stock--;
        nr_vandute++;
    }
    void adaugare_stock()
    {
        T pt_tip;
        int n;
        cout<<"Numarul de Masini de tipul "<<pt_tip.tip()<<" de introdus: ";
        cin>>n;
        for(int i=0;i<n;i++)
        {
            T* elm=new T;
            cout<<"Elementul "<<i+1<<":";
            cin>>(*elm);
            ///try si catch
            stock.push_back(elm);
            nr_stock++;
        }
        ///s-au citit nu stiu cate elemente
    }
    void afis_stock()
    {
        for(int i=0;i<nr_stock;i++)
            cout<<*(stock[i]);
    }
    void afis_vandute()
    {
        T pt_tip;
        if(nr_vandute==0) cout<<"Nu s-au vandut inca masini de tipul "<<pt_tip.tip()<<".\n";
        else
        for(int i=0;i<nr_vandute;i++)
            cout<<*(vandute[i]);
    }
};

/**
class <unsigned> VANZARI
{
    int nr_stock;
    int nr_vandute;
    vector<T*> stock;
    vector<T*> vandute;
public:
    VANZARI(){nr_stock=nr_vandute=0;}
    ~VANZARI()
    {
        nr_stock=nr_vandute=0;
        stock.clear();
        vandute.clear();
    }


};
*/
