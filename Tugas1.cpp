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

    C<=0?cout<<"AIR MEMBEKU":cout<<"AIR TIDAK MEMBEKU";
}

/*
    Penjelasan
    1. Alur program:
       - Meminta pengguna untuk memasukkan nilai suhu dan kode satuan
       - Melakukan konversi suhu berdasarkan kode satuan yang dimasukkan
       - Menampilkan suhu dalam tiga satuan: Celsius, Fahrenheit, dan Kelvin
       - Menentukan kategori suhu berdasarkan nilai Celsius
       - Menampilkan apakah air membeku atau tidak berdasarkan nilai Celsius
    2. Variabel:
       - nilaisuhu: menyimpan nilai suhu yang dimasukkan pengguna
       - kodesatuan: menyimpan kode satuan suhu yang dimasukkan pengguna
       - C, F, K: menyimpan nilai suhu dalam Celsius, Fahrenheit, dan Kelvin
       - SELISIH_KELVIN: konstanta untuk konversi Kelvin ke Celsius
    3. Percabangan:
       - Menggunakan switch-case untuk menentukan konversi suhu berdasarkan kode satuan
       - Menggunakan if-else untuk menentukan kategori suhu dan apakah air membeku atau tidak
    4. Contoh eksekusi:
       - Input: 89.2 F
         Output: 
         Suhu dalam derajat Celsius: 31.7778
         Suhu dalam derajat Fahrenheit: 89.2
         Suhu dalam Kelvin: 304.928
         Kategori suhu: HANGAT
         AIR TIDAK MEMBEKU
       - Input: -300 K
         Output:
         ERR: SUHU TIDAK MUNGKIN
       - Input: 25 X
         Output:
         ERR: KODE SATUAN TIDAK DIKENAL
    5. Catatan:
       - Saya awalnya membuat program jauh jauh lebih panjang dari ini karena memasukkan
         fungsi konversi nilai suhu menjadi celsius pada setiap switch case, juga memasukkan  
         pengecekan kondisional di dalam switch-case
       - Saya memutuskan untuk memindahkan kondisional ke luar switch-case.
       - Saya awalnya mengalami kebingungan ketika ingin menggunakan global variable
       - Saya juga mengalami kebingungan ketika membuat struktur atau urutan untuk 
         melakukan konversi nilai suhu kedalam celsius
*/