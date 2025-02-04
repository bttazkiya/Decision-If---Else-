/ If - Else Bilangan Ganjil
#include <iostream>
using namespace std;
int main () {
    int angka;
    cout << "\n=== Bilangan Ganjil ===\n" << endl;
    cout << "Masukkan Angka; ";
    cin >> angka;

    if(angka %2 == 0){
        cout << "Bilangan Genap";
    }
    else{
        cout << "Bilangan Ganjil";
    }

    return 0;
}