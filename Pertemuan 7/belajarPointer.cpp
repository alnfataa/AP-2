#include <iostream>
using namespace std;

int main(){
system("CLS");

// POINTER DECLARATION
 int number = 35;
 int *pointer_number = &number;

 cout << "isi variable number = " << number << endl;
 cout << "Alamat dari variable number = " << &number << endl;
 cout <<"Isi variable pointer_Number = "<< pointer_number << endl;
 cout <<"Isi Variabel yang ditunjuk oleh pointer_number = " << *pointer_number << endl;
 cout << "Alamat memori variabel = " << &pointer_number << endl;
}