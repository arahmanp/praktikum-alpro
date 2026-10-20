#include <iostream>
#include <string>

const int MAX_N = 20;

struct Barang {
    std::string nama;
    int harga;
    int jumlah;
};

int inputBarang(Barang daftarBarang[MAX_N]) {
    int jml;

    std::cout << "Masukkan jumlah jenis barang: ";
    std::cin >> jml;

    if(jml > MAX_N) {
        std::cout << "Maksimal " << MAX_N << " barang!\n";
        return -1;
    }

    std::cout << '\n';

    for(int i = 0; i < jml; i++) {
        Barang b;
        std::cout << "Barang ke-" << i + 1 << '\n';
        std::cout << "Nama Barang   : ";
        std::cin >> b.nama;
        std::cout << "Harga         : ";
        std::cin >> b.harga;
        std::cout << "Jumlah Beli   : ";
        std::cin >> b.jumlah;

        daftarBarang[i] = b;

        std::cout << "\n\n";
    }

    return jml;
}

void tampilkanStruk(Barang daftarBarang[MAX_N], int jml) {
    std::cout << "=== STRUK BELANJA MINIMARKET TETO ===\n";

    int hargaTertinggi = -1;
    std::string barangHargaTertinggi;
    int total = 0;

    for(int i = 0; i < jml; i++) {
        std::cout << i + 1 << ". " << daftarBarang[i].nama << " (" << daftarBarang[i].jumlah << " x " << daftarBarang[i].harga
            << ") = Rp" << daftarBarang[i].jumlah * daftarBarang[i].harga << '\n';
        
        if(daftarBarang[i].harga > hargaTertinggi) {
            hargaTertinggi = daftarBarang[i].harga;
            barangHargaTertinggi = daftarBarang[i].nama;
        }

        total += daftarBarang[i].jumlah * daftarBarang[i].harga;
    }

    std::cout << "-------------------------------------\n";
    std::cout << "Harga barang tertinggi : Rp" << hargaTertinggi << " (" << barangHargaTertinggi << ")\n";
    std::cout << "Total bayar keseluruhan: Rp" << total << '\n';
}

int main() {
    Barang daftarBarang[MAX_N];

    int jmlBarang = inputBarang(daftarBarang);

    tampilkanStruk(daftarBarang, jmlBarang);

    return 0;
}