#include <iostream>
#include <conio.h>
using namespace std;
int main(){
    string nama;
    char kom, jenisKelamin;
    int nim;
    float ip;

    cout<<"hello worldd"<<endl;
    cout<<"masukan nama : ";
    // cin >> nama;
    getline(cin,nama);


    cout<<"Masukan Kom :";
    cin>> kom  ;

    cout<<"Masukan nim :";
    cin>> nim   ;
    cout<<"Masukan ip :";
    cin>> ip  ;
    cout<<"Masukan jenis kelamin(L/P) :";
    jenisKelamin = getche();

    // output
    cout<<"\n"<<nama<<endl;
    cout<<kom<<endl;
    cout<<nim<<endl;
    cout<<ip<<endl;
    // cout<<jenisKelamin<<endl;
     putchar(jenisKelamin);

     getch(); //karakter diketik tdk nampak dilayar
}