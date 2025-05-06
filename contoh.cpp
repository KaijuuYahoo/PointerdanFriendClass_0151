#include<iostream>
using namespace std;

class PersgiPanjang{
    public: //akses modifier
        int panjang,lebar;
    public:
    void input(){
        cout<< "Masukkan Panjang : " ;
        cin >> panjang;
        cout << "Masukkan Lebar : ";
        cin >> lebar;
    }

    int LuasPp(int a, int b){
        return a*b;
    }

    //Lingkaran ol;
    
};