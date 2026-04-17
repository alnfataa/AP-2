#include <iostream>

using namespace std;
int main ()
{
    int nilai;
    system("CLS");
    cout << "masukan nilai : ";
    cin >> nilai;
// if statement
    // if (nilai >= 65 ){
    //     cout << " tidak lulus" << endl ;

    // }
    // if else statement
    // if (nilai <= 65 ){
    //     cout << " tidak lulus" << endl ;
    // } else {
    //     cout << " lulus " << endl;
    // }

    // if else if statement
    // if ( nilai == 100 ){
    //     cout << "nilai sempurna" << endl;
    // }
    //    else if (nilai <= 65 ){
    //     cout << " tidak lulus" << endl ;
    // } else {
    //     cout << " lulus " << endl;
    // }
    // nested if 
//     if (nilai <= 65 ){
//         cout << " tidak lulus" << endl ;

//     } else {
//     if (nilai == 100){
//        cout << " anda lulus dan hebat " << endl;
//     } else {
//        cout << " anda lulus" << endl;
// }

// switch case statement
// switch (nilai)
// {
//  case 1 :
//  cout << "senin "<< endl;
//     break;
//     case 2 : 
//     cout << "selasa" << endl;
//     break;
//     case 3 : 
//     cout << "rabu" << endl;
//     break;
//     case 4 : 
//     cout << " kamis " << endl;
//     break;
//     case 5 : 
//     cout << " jummat " << endl;
//     break;
//     case 6 : 
//     cout << "sabtu" << endl;
//     break ;
//     case 7 :
//     cout << "minggu" << endl;
//     break;

//     default : 
//     cout << " inputan salah " << endl;
//     break;
// }

// switch range
// switch (nilai){
// case 85 ... 100: cout << "Nilai A " << endl; break;
// case 80 ... 84: cout << "Nilai B+ " << endl; break;
// case 75 ... 79: cout << "Nilai B " << endl; break;
// case 70 ... 74: cout << "Nilai C+ " << endl; break;
// case 65 ... 69: cout << "Nilai C " << endl; break;
// case 60 ... 64: cout << "Nilai D " << endl; break;

// default :
// cout << "Inputan Salah " << endl; break;

// }

// ternary operator

// if ( nilai % 2 == 0){
//     cout << "Nilai Genap"<< endl;
    
// } else {
//     cout << "Nilai Ganjil" << endl;
// }
( nilai % 2 == 0) ? cout<<"Nilai Genap"<<endl : cout<<"Nilai Ganjil"<<endl;
}

