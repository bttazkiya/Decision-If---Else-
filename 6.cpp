// Sistem Keanggotaan Gym (cara Lain)
#include <iostream>
using namespace std;
int main() {
    
    string jenisKeanggotaan;
    int jumlahLatihan, batasLatihan;
    
    cout << "Masukkan Jenis Keanggotaan ( silver/gold/platinum ) : ";
    cin >> jenisKeanggotaan;
    
    if ( jenisKeanggotaan == "silver" ) {
        batasLatihan = 10;
    } else { 
         if ( jenisKeanggotaan == "gold" ) {
            batasLatihan = 20;
    } else {
         if ( jenisKeanggotaan == "platinum" ) {
            cout << "Anda Tidak memiliki batas\n";
            return 0;
            } else {
                cout << "Tidak valid!\n";
            } return 0;
        }
    }
     
   cout << "Masukkan jumlah latihan yang dilakukan : ";
   cin >> jumlahLatihan;
   
   if ( jumlahLatihan < batasLatihan) {
       cout << "Anda masih bisa latihan sebanyak " << (batasLatihan - jumlahLatihan) << " kali lagi bulan ini\n";
   } else {
       cout << "Anda sudah mencapai batas latihan bulan ini\n";
   }
    return 0;
}
