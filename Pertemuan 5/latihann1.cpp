#include <iostream>
#include <array>

using namespace std;

int main(){
    // Penjumlahan Matrix 2x2

    // int matriks1[2][2];
    // int matriks2[2][2];
    // int hasil[2][2];

    // // matriks 1
    // cout << "Matriks 1 : " << endl;
    // for(int i = 0; i < 2; i++){
    //     for(int j = 0; j < 2; j++){
    //         cout << "Masukan elemen baris " << i + 1 << " Kolom " << j + 1 << " : ";
    //         cin >> matriks1[i][j];
    //     }
    // }

    // // matriks 2 
    // cout << "Matriks 2 : " << endl;
    // for(int i = 0; i < 2; i++){
    //     for(int j = 0; j < 2; j++){
    //         cout << "Masukan elemen baris " << i + 1 << " Kolom " << j + 1 << " : ";
    //         cin >> matriks2[i][j];
    //     }
    // }

    // // hasil penjumlahan
    // cout << "Hasil Penjumlahan" << endl;
    // for(int i = 0; i < 2; i++){
    //     for(int j = 0; j < 2; j++){
    //         hasil[i][j] = matriks1[i][j] + matriks2[i][j];
    //         cout << hasil[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // string nama = "alya";
    // cout << nama[0] << endl;
    // cout << nama[2] << endl;
    
    // cout << nama.length(); // untuk menghitung jumlah karakter
//  string s1 = "Hello";
//  string s2 = "World";
// //  1. S1= s2
// s1 = s2;
// cout << "s1 sekarang = "<< s1 << endl;
// // 2. s1 = s1+s2
// s1 = "Hello" ;  // reset nilai
// cout <<"Hasil Gabungan = " << s1+s2 << endl;
// // 3.s1.length
// cout << s1.length() << endl;
// cout << (s1+s2).length() << endl;
// // 4.s1.subsstr(n,m) n mulai dari berapa, m itu panjang nya berapa
// cout << s1.substr(2,3 ) << endl;

// operator sizeof
// int angka = 10;
// cout << sizeof(angka);
// int nilai [] = {10, 20, 30, 40, 50};
// cout<< sizeof(nilai);

// array library

// misal array biasa floatt
array<float,5> nilai ={87.5, 90, 100, 95.7, 78.3};
cout << "Nilai : " ; 

for(int i= 0; i< nilai.size(); i++){
    cout << nilai[i]<< " ";
}
}