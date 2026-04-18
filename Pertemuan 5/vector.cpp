#include <iostream>
#include <vector>
using namespace std;
int main(){
    // vector declartion dan initz
    vector<string> nama_karyawan = {"Alya", "Parul", "Hana", "Dewi", "Padil"};

    // menampilkan data ascending
    // for(int i = 0; i< nama_karyawan.size(); i++){
    //     cout << nama_karyawan[i] << endl;}
    
    // add data to vector
    // nama_karyawan.push_back("edric");

    //  for(int i = 0; i< nama_karyawan.size(); i++){
    //     cout << nama_karyawan[i] << endl;
    // }

    // delete data from vector
    nama_karyawan.pop_back();
    nama_karyawan.erase(nama_karyawan.begin() + 2);
     for(int i = 0; i< nama_karyawan.size(); i++){
        cout << nama_karyawan[i] << endl;
    }


}