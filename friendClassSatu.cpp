#include<iostream>
#include<string>
using namespace std;

class siswa;
class orang{
    private:
    string nama;
    public:
    void setNama(string pNama);
        friend class siswa;
};

class siswa{
    private:
        int id;
    public:
        void setId(int pId);
        void DisplayAll(orang &a);
};

void siswa::DisplayAll(orang &a){
    cout<<id<<endl;
}

void orang::setNama(string pNama){
    nama=pNama;
}

void siswa::setId(int pId){
    id =pId;
}

int main(){
    orang joko;
    joko.setNama("Joko Susilo");
    siswa joko_siswa;
    joko_siswa
}