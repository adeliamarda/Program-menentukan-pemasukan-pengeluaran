#include <iostream>
using namespace std;
int main()
{
    int pengeluaran,pemasukan;
    cout<<"masukan pengeluaran"<<endl;
    cin>>pengeluaran;
    cout<<"masukan pemasukan"<<endl;
    cin>>pemasukan;
    if(pemasukan>pengeluaran)
    {
        cout<<"pemasukan besar"<<endl;
    }else
    cout<<"pemasukan kecil"<<endl;
    return 0;
}
