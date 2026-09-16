#include <iostream>
using namespace std;

char kodesatuan;
double nilaisuhu, F, C, K;
float SELISIH_KELVIN=273.15;

int main(){
    cout<<"KONVERSI DAN KATEGORI SUHU HARIAN"<<endl;
    
    cout<<"Masukkan nilai suhu: "<<endl;
    cin>>nilaisuhu;
    cout<<"Anda ingin melihat data dalam satuan apa? (C/F/K)"<<endl;
    cin>>satuan;

    kodesatuan = (kodesatuan >= 'a' && kodesatuan <= 'z') ? kodesatuan - ('a' - 'A') : kodesatuan;
    switch kodesatuan {
        case 'C':
            cout<<"Suhu dalam derajat Celsius: "<<suhu<<endl;
        case 'F':
            F=9/5.0*suhu+32;
            cout<<"Suhu dalam derajat Fahrenheit: "<<F<<endl;
        case 'K':
            K=suhu+273.15;
            cout<<"Suhu dalam Kelvin: "<<K<<endl;
        default:
            cout<<"KODE SATUAN TIDAK DIKENAL";
    }
}