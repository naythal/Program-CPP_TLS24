#include <iostream>
#include <iomanip> // Include the iomanip library

using namespace std;

int main() {
    // Harga per liter untuk masing-masing jenis beras
    const double hargaberasratulele = 11500.00; // Harga per liter beras jenis 1
    const double hargaberasmentikwangi = 15000.00; // Harga per liter beras jenis 2
    const double hargaberasC4 = 10000.00; // Harga per liter beras jenis 3

    // Variabel untuk nominal uang yang diinputkan
    double nominal;
    
    // Menampilkan pilihan jenis beras
    cout << "Pilih jenis beras:" << endl;
    cout << "1. Beras Ratu Lele (Harga per liter: Rp" << fixed << setprecision(2) << hargaberasratulele << ")" << endl;
    cout << "2. Beras Mentik Wangi (Harga per liter: Rp" << fixed << setprecision(2) << hargaberasmentikwangi << ")" << endl;
    cout << "3. Beras C4 (Harga per liter: Rp" << fixed << setprecision(2) << hargaberasC4 << ")" << endl;
    
    // Menginput jenis beras
    int jenis_beras;
    cout << "Masukkan nomor jenis beras (1, 2, atau 3): ";
    cin >> jenis_beras;

    // Validasi input jenis beras
    if (jenis_beras < 1 || jenis_beras > 3) {
        cout << "Jenis beras tidak valid!" << endl;
        return 1; // Keluar dengan kode kesalahan
    }
    
    // Menginput nominal uang
    cout << "Masukkan nominal uang (Rp): ";
    cin >> nominal;

    // Validasi input nominal uang
    if (nominal < 0) {
        cout << "Nominal uang tidak valid!" << endl;
        return 1; // Keluar dengan kode kesalahan
    }

    // Menentukan harga per liter sesuai dengan jenis beras yang dipilih
    double harga_per_liter;
    switch (jenis_beras) {
        case 1:
            harga_per_liter = hargaberasratulele;
            break;
        case 2:
            harga_per_liter = hargaberasmentikwangi;
            break;
        case 3:
            harga_per_liter = hargaberasC4;
            break;
    }

    // Menghitung jumlah liter beras yang bisa didapat
    double liter_beras = nominal / harga_per_liter;

    // Menampilkan hasil
    cout << fixed << setprecision(2); // Set format untuk output
    cout << "Dengan nominal Rp" << nominal << ", Anda bisa mendapatkan " 
         << liter_beras << " liter beras jenis " << jenis_beras << "." << endl;

    return 0;
}
