#include <iostream>
using namespace std;

int main(){
    system("CLS");

// 1. OPERASI PENUGASAN
cout << "=== Operasi Penugasan ==="<< endl;
int a = 10;
int *p;
p = &a;

cout << "Nilai a = " << a << endl;
cout << "Alamatt &A = " << &a << endl;
cout << "isi pointer p = " << p << endl;
cout << "nilai *p = "<< *p << endl;

// 2.OPERASI ARITMATIKA
cout << "=== Operasi Aritmatika ==="<< endl;
int nilai [3];// array 3 angka
int *oke;

nilai[0] = 125;
nilai[1] = 345;
nilai[2] = 750;

oke = &nilai[0]; // sekarang menyimpan alamat nilai[0]
/*
ilustrasi =
nilai[0] --> alamat 1000 --> isi 125
nilai[0] --> alamat 1002 --> isi 345
nilai[0] --> alamat 1005 --> isi 750
*/

cout << "Nilai = " << *oke << ", ada dialamat = " << oke << endl;
cout<< "Nilai = " << *(oke+1) <<", ada dialamat = " <<(oke+1) <<endl;
cout<< "Nilai = " << *(oke+2) <<", ada dialamat = " <<(oke+2) <<endl;


// 2.OPERASI LOGIKA
cout << "=== Operasi Logika ==="<< endl;
int x = 5, y = 10;
int *p1 = &x;
int *p2 = &y;
int *p3 = &x;

if(p1 == p3){
    cout << " p1 dan p3 menunjuk alamat yang sama" << endl;
}
if(p1 != p2){
    cout <<" p1 dan p2 menunjuk alamat yang berbeda" <<endl;
}
int *p4 = NULL ; //POINTER TIDAK MENUNJUK KEMANA MANA 
if (p4 == NULL){
    cout <<" p4 adalah pointer null" << endl;
}

}