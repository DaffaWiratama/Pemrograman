/*
    Nama           : Muhammad Daffa Wiratama
    NIM            : 26/581146/PA/24366
    Program Studi  : Ilmu Komputer
    Kelas          : PRG4
*/


#include <iostream>
using namespace std;

char kodesatuan;
double nilaisuhu, F, C, K;
float SELISIH_KELVIN=273.15;

int main(){
    cout<<"KONVERSI DAN KATEGORI SUHU HARIAN"<<endl;
    
    cout<<"Masukkan nilai suhu: "; cin>>nilaisuhu;
    cout<<endl<<"Apa kode satuan suhu yang anda pakai? (C/F/K) "; cin>>kodesatuan; cout<<endl;

    kodesatuan = (kodesatuan >= 'a' && kodesatuan <= 'z') ? kodesatuan - ('a' - 'A') : kodesatuan;
    switch (kodesatuan) {
        case 'C':
            C=nilaisuhu;
            if (C<(-273.15)){
                cout<<"ERR: SUHU TIDAK MUNGKIN"<<endl;
                return 0;
            }
            break;
        case 'F':
            C=(nilaisuhu-32)*5/9.0;
            if (C<(-273.15)){
                cout<<"ERR: SUHU TIDAK MUNGKIN"<<endl;
                return 0;
            }
            break;
        case 'K':
            C=nilaisuhu-SELISIH_KELVIN;
            if (C<(-273.15)){
                cout<<"ERR: SUHU TIDAK MUNGKIN"<<endl;
                return 0;
            }
            break;
        default:
            cout<<"ERR: KODE SATUAN TIDAK DIKENAL";
            return 0;
    }

    cout<<"Suhu dalam derajat Celsius: "<<C<<endl;
    F=9/5.0*C+32;
    cout<<"Suhu dalam derajat Fahrenheit: "<<F<<endl;
    K=C+SELISIH_KELVIN;
    cout<<"Suhu dalam Kelvin: "<<K<<endl;
    
    if (C<10){
        cout<<"Kategori suhu: DINGIN"<<endl;
    } else if (C>=10 && C<25){
        cout<<"Kategori suhu: Sejuk"<<endl;
    } else if (C>=25 && C<32){
        cout<<"Kategori suhu: HANGAT"<<endl;
    } else if (C>=32){
        cout<<"Kategori suhu: PANAS"<<endl;
    }

    C<=0?cout<<"AIR MEMBEKU":cout<<"AIR TIDAK MEMBEKU"
}