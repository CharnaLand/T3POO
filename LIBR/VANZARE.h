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
    int operator-=(int i)
    {
        if(i>nr_stock) return 0;
        else
        {
            vinde(i);
            return 1;
        }
    }
    void vinde (int i)
    {
        vandute.push_back(stock[i-1]);
        stock.erase(stock.begin()+(i-1));
        nr_stock--;
        nr_vandute++;
    }
    void adaugare_stock()
    {
        T pt_tip;
        string sters;
        int n;
        cout<<"Numarul de Masini de tipul "<<pt_tip.tip()<<" de introdus: ";
        cin>>n;
        getline(cin,sters);
        for(int i=0;i<n;i++)
        {
            T* elm=new T;
            cout<<"\nElementul "<<i+1<<":";
            cin>>(*elm);
            ///try si catch
            stock.push_back(elm);
            nr_stock++;
        }
        ///s-au citit nu stiu cate elemente
    }

    void adaugare_stock_fisier(char* fis)
    {ifstream f (fis);
        T pt_tip;
        string sters;
        int n;
        f>>n;
        getline(f,sters);
        for(int i=0;i<n;i++)
        {
            T* elm=new T;
            f>>(*elm);
            ///try si catch
            stock.push_back(elm);
            nr_stock++;
        }
        ///s-au citit nu stiu cate elemente
    f.close();
    }

    void afis_stock()
    {cout<<"\n";
        T pt_tip;
        if(nr_stock==0) cout<<"Nu exista masini de tipul "<<pt_tip.tip()<<".\n";
        else
        {
        cout<<"\tMasini EXISTENTE de tipul "<<pt_tip.tip()<<":\n";
        for(int i=0;i<nr_stock;i++)
            cout<<*(stock[i]);
        }
    }
    void afis_vandute()
    {cout<<"\n";
        T pt_tip;
        if(nr_vandute==0) cout<<"Nu s-au vandut inca masini de tipul "<<pt_tip.tip()<<".\n";
        else
        {
        cout<<"\tMasini VANDUTE de tipul "<<pt_tip.tip()<<":\n";
        for(int i=0;i<nr_vandute;i++)
            cout<<*(vandute[i]);
        }

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
