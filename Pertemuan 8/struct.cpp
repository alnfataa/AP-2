#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Alamat{
 string jalan; 
 string kota;
 int kodePos;
};
struct Mahasiswa {
   string nama;
   int umur;
   float ipk;
   Alamat alamat; // nested struct 

};


int main(){
    system("CLS");

    Mahasiswa mhs1;

    // mhs1.alamat.jalan = "Jalan Ringroad";
    // mhs1.alamat.kota = "Jakaerta";
    // mhs1.alamat.kodePos = 20011;

    // cout << "Alamat : " << mhs1.alamat.jalan<< " " << mhs1.alamat.kota<<" " << mhs1.alamat.kodePos <<endl;

    vector<Mahasiswa> mahasiswa;
    int n;
    cout << "Masukan banyak mahasiswa : ";
    cin >> n;

    for(int i = 0; i<n; i++){
        cout<< "Mahasiswa " << i+1 << endl;
        cin.get();
        cout << "Masukan Nama : ";
        getline(cin, mhs1.nama);

        cout<<"Masukan Umur : ";
        cin >> mhs1.umur;

        
        cout<<"Masukan ipk : ";
        cin >> mhs1.ipk;

        mahasiswa.push_back(mhs1);

    }

    for (int i = 0; i<n; i++ ){
        cout<<"Mahasiswa "<< i + 12 <<endl;
        cout <<"Nama : " << mahasiswa[i].nama <<endl;
        cout <<"Umur : " << mahasiswa[i].umur <<endl;
        cout <<"Ipk : " << mahasiswa[i].ipk <<endl;

    }

}