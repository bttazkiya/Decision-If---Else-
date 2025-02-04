// If - Else Bilangan Ganjil
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
// Sistem Keanggotaan Gym
#include <iostream>
using namespace std;
int main () {
    int latihan, kesempatan;
    string keanggotaan;

    cout << "Masukkan Jenis Keanggotaan: ";
    cin >> keanggotaan;
    cout << "Masukkan Jumlah Latihan: ";
    cin >> latihan;

    if(keanggotaan == "silver"){
        kesempatan = 10 - latihan;

        cout << "Anda masih bisa latihan " << kesempatan << " X lagi bulan ini";
    } else {
        if(keanggotaan == "gold"){
            kesempatan = 20 - latihan;
            cout << "Anda masih bisa latihan " << kesempatan << " X lagi bulan ini";
        } else {
            if(keanggotaan == "platinum"){
                cout << "Tidak terbatas, Anda masih bisa latihan" << endl;
            }
        }
    }
    
    return 0;
}
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