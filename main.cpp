#include <iostream>
#include <string>

// Andhika
// Budi
// Syawal
// Agus
// Asep
// 100 name

// "Halo" + nama orang + "!" -> generalisasi (bentuk umum)
//              |
//              | translate
//              v
// std::cout << "Halo " << nama_orang << "!";

// tipe_return nama_fungsi(parameter) -> header function
// { -> body
// }

// parameter -> daftar barang
// argumen -> barang aslinya

// return -> tugasnya mengembalikan nilai

// daftar != barang aslinya

void halo(std::string nama_orang) {
    std::cout << "Halo " << nama_orang << "!\n";
}

// blueprint:
// nama fungsinya: luas_segitiga
// tugasnya: menghitung luas segitiga
// parameter: alas(float), tinggi(float)
// tipe return: float

float luas_segitiga(float alas, float tinggi) {
    float luas = (alas * tinggi) * 0.5;
    return luas;
}

// programmer pemula: langsung ngoding -> banyak error -> banyak waktu buat benerin errornya -> frustasi
// programmer sejati: tentuin masalah -> pecahkan masalah -> ngoding -> error sedikit / error banyak tapi tau cara selesainnya

// setelah belajar -> banyak latihan

// 1. tentuin masalahnya
// 2. bikin penyelesaiannya
// 3. liat polanya
// 4. generalisasi -> definisi polanya (inti)
// 5. bikin blueprintnya
// 6. terjemahkan generalisasi & blueprint ke kode c++
// 7. bikin fungsinya
// 8. panggil/pake fungsinya

int main() {
    halo("Andhika");
    halo("budi");
    halo("asep");

    float luas = luas_segitiga(3, 5);
}