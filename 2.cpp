// Menentukan Diskon dan Total Pembayaran
#include <iostream>
using namespace std;
int main () {
    float total_pembelian, discount;
    cout << "\n=== Diskon dan Total Pembayaran ===\n" << endl;
    cout << "Masukkan Total Pembelian: ";
    cin >> total_pembelian;

    if(total_pembelian >= 100000){
        discount = 0.05 * total_pembelian;
    }
    
    cout << "Diskonnya Adalah: " << discount << endl;
    cout << "Total Pembayarannya Adalah: " << total_pembelian - discount << endl;

    return 0;
}