// Menentukan Discount dan Total Harga setelah Diskon 
#include <iostream>
using namespace std;
int main () {
    float total_belanja, discount;
    cout << "\n=== Diskon dan Total Pembayaran ===\n" << endl;
    cout << "Masukkan Total Belanja: ";
    cin >> total_belanja;

    if(total_belanja >= 500000){
        discount = 0.3 * total_belanja;
    }else {
        if(total_belanja >= 200000){
            discount = 0.2 * total_belanja; 
        }else {
            if(total_belanja >= 100000){
                discount = 0.1 * total_belanja;
            }else {
                if(total_belanja <= 100000){
                    cout << "Tidak Ada Diskon";
                }       
            }
        }
    }
    cout << "Diskonnya Adalah: " << discount << endl;
    cout << "Harga Setelah Diskon : " << total_belanja - discount << endl;

    return 0;
}