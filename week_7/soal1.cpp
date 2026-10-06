#include <algorithm>
#include <iostream>

#define MAX_N 100

void welcome() {
    std::cout << "=========================================\n";
    std::cout << "          REKAP NILAI PRAKTIKUM          \n";
    std::cout << "=========================================\n";
}

double rataan(int nilai[MAX_N], int n) {
    int total = 0;
    for(int i = 0; i < n; i++) total += nilai[i];
    return (double)total / n;
}

void cetakNilaiMahasiswa(int nilai[MAX_N], int n) {
    std::cout << '\n';
    std::cout << "=========================================\n";
    std::cout << " DATA NILAI MAHASISWA\n";
    std::cout << "=========================================\n";

    int total = 0;
    int max =  -1;
    int min = 1e9;

    for(int i = 0; i < n; i++) {
        std::cout << "Nilai mahasiswa ke-" << i + 1 << " : " << nilai[i] << '\n';
        total += nilai[i];
        max = std::max(max, nilai[i]);
        min = std::min(min, nilai[i]);
    }

    std::cout << '\n';

    std::cout << "=========================================\n";

    std::cout << "Total nilai        : " << total << '\n';
    std::cout << "Rata-rata          : " << (double)total / n << '\n';
    std::cout << "Nilai tertinggi    : " << max << '\n';
    std::cout << "Nilai terendah     : " << min << '\n';
}

int main() {
    int jumlahMahasiswa;
    int nilaiMahasiswa[MAX_N];

    welcome();

    std::cout << "Masukkan jumlah mahasiswa : ";
    std::cin >> jumlahMahasiswa;

    for(int i = 0; i < jumlahMahasiswa; i++) {
        std::cout << "Masukkan nilai mahasiswa ke-" << i + 1 << " : ";
        std::cin >> nilaiMahasiswa[i];
    }

    cetakNilaiMahasiswa(nilaiMahasiswa, jumlahMahasiswa);

    return 0;
}