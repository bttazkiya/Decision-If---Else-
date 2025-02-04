// Menentukan Usia Seseorang (if - Else)
#include <iostream>
using namespace std;
int main () {
    int usia;
    cout << "Masukkan Usia: ";
    cin >> usia;

    if(usia <= 5){
        cout << "Balita" << endl;
    } else {
        if(usia <= 12){
            cout << "Anak - anak" << endl;
        } else {
            if(usia <= 17){
                cout << "Remaja" << endl;
            } else {
                if(usia <= 59){
                    cout << "Dewasa" << endl;
                } else {
                    cout << "Lansia" << endl;
                }
            }
        }
    }
    return 0;
}