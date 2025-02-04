// Menampilan Warna Lampu Lalu Lintas
#include <iostream>
using namespace std;
int main () {
    string warna;
    cout << "\n=== Lampu Lalu Lintas ===\n" << endl;
    cout << "Masukkan Warna Lampu: ";
    cin >> warna;

    if (warna == "Merah"){
        cout << "Berhenti!" << endl;
    } else {
        if (warna == "Kuning"){
        cout << "Bersiap!" << endl;
        } else {
            if (warna == "Hijau"){
                cout << ":Jalan!" << endl;
                } else {
                    cout << "Warna Tidak Valid!" << endl;
                    }
        }
    }
    return 0;
}