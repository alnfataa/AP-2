#include <iostream>
#include <string>
#include <array>

using namespace std;

int main (){
    // array declaration
    
    //  cara 1 : array kosong
    // string nama[5];
    // nama[0] = "alya" ;
    // nama[1] = "parul" ;
    // nama[2] = "hana" ;
    // nama[3] = "dewi" ;
    // nama[4] = "padil" ;
   
    //   cara 2 : array lgsg diisi

    // string nama [5] = {"Alya", "Parul", "Hana", "Dewi", "Padil"};
    // string nama [] = {"Alya", "Parul", "Hana", "Dewi", "Padil"};


// menampilkan cara 1 
//  cout << nama[0] << endl;
//  cout << nama[3] << endl;

// mengunakan looping ascending
// for(int i = 0; i<5; i++){
//     cout << nama[i] << endl;
// }

// //  looping descending
// for(int i = 4; i>=0; i--){
//     cout << nama[i] << endl;
// }

// multideminsional array
// 1 2 3
// 4 5 6
   int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
   for (int i = 0; i<2; i++){ //baris
    for(int j = 0; j < 3; j++ ){
        cout << matrix[i][j] << " ";
    }
    cout << endl;
   }
}