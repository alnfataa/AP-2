#include <iostream>
using namespace std;

//fungsi untuk pointer sebagai parameter
void ubahNilai(int *p){ // p menerima alamat x
    *p = 20; // ubah isi alamat
}


int main(){
    system("CLS");

    // 1. Pointer Dalam Pointer
    cout << "=== Pointer Dalam Pointer ==="<< endl;
    int a = 64;
    int *p = &a;
    int **pp = &p;// pointer ke pointer p

    cout << "Nilai a    = "<< a << endl;
    cout << "Nilai *p   = "<< *p<<endl;
    cout <<"Nilai **pp = "<< **pp << endl;

        // 2. Pointer Dalam Array
    cout << "=== Pointer Dalam Array ==="<< endl;
    int arr[3] = {3, 2, 1};
    int *ptr =arr;
    cout << "Elemen 1 = "<<*ptr<<endl;
    cout << "Elemen 2 = "<<*(ptr+1)<<endl;
    cout << "Elemen 3 = "<<*(ptr+2)<<endl;

        // 3. Pointer Dalam String
    cout << "=== Pointer Dalam String ==="<< endl;
    char *org = "Ilmu Komputer Laboratory Center";
    cout << "Awal = "<<org<<endl;

    org += 5; //geser pointer
    cout <<"Geser = "<<org<<endl;

          // 3. Pointer Sebagai Parameter
    cout << "=== Pointer Sebagai Parameter ==="<< endl;
    int x = 5;
    cout <<"Sebelum = "<< x <<endl;

    ubahNilai(&x);

    cout<<"Sesudah = " << x << endl;

}