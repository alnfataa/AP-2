#include <iostream>
using namespace std;

int main() {
    float kg, m;

    cout << "masukan berat badan anda : (kg) ";
    cin >> kg;
    cout << "masukan tinggi anda : (m) ";
    cin >> m;

    float bmi = kg / (m * m);

    if (bmi <= 18.5) {
        cout << "bb anda kurang" << endl;
    } else if (bmi <= 25) {
        cout << "bb anda normal" << endl;
    } else if (bmi <= 30) {
        cout << "bb anda berlebih" << endl;
    } else {
        cout << "anda obesitas" << endl;
    }

    

}