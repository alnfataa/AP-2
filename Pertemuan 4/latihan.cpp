#include <iostream>
using namespace std;
int main(){
string kalimat;
int i;

system("CLS");

cout <<"masukan kalimat : ";
getline(cin, kalimat);

for(i = 0; i<kalimat.length(); i++){
    kalimat[i] = toupper(kalimat[i]);
}
cout <<" Kalimat Dalam Huruf Kapital : "<< kalimat <<endl;
return 0;
}