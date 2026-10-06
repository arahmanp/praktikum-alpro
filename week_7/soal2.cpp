#include <iostream>

// mendefinisikan jumlah lantai dan jumlah ruangan per lantai di awal program
#define N_LANTAI 3
#define N_RUANG 4

int main() {
    std::cout << "===========================================\n";
    std::cout << " MONITORING SUHU RUANGAN\n";
    std::cout << "===========================================\n";

    // mendeklarasikan variabel yg dibutuhkan
    int suhu[N_LANTAI][N_RUANG];
    double rataan[N_LANTAI];
    int maxSuhu = -1e9;
    int bestLantai = -1;
    int bestRuangan = -1;

    std::cout << '\n';

    // melakukan input suhu ruangan sekaligus menghitung rataan dan suhu tertinggi
    for(int i = 0; i < N_LANTAI; i++) {
        int total = 0;
        for(int j = 0; j < N_RUANG; j++) {
            std::cout << "Masukkan suhu lantai " << i + 1 << ", ruangan " << j + 1 << " : ";
            std::cin >> suhu[i][j];

            total += suhu[i][j];
            if(suhu[i][j] > maxSuhu) {
                maxSuhu = suhu[i][j];
                bestLantai = i;
                bestRuangan = j;
            }
        }
        rataan[i] = (double)total / N_RUANG;
        std::cout << '\n';
    }

    std::cout << '\n';

    std::cout << "===========================================\n";
    std::cout << " DATA SUHU RUANGAN\n";
    std::cout << "===========================================\n";

    std::cout << '\n';

    // mencetak tabel suhu ruangan dalam bentuk tabel
    std::cout << "        ";
    for(int i = 1; i <= N_RUANG; i++) {
        std::cout << "  R" << i;
    }

    std::cout << '\n';
    for(int i = 0; i < N_LANTAI; i++) {
        std::cout << "Lantai " << i + 1;
        for(int j = 0; j < N_RUANG; j++) {
            std::cout << "  " << suhu[i][j];
        }
        std::cout << '\n';
    }

    std::cout << '\n';

    std::cout << "===========================================\n";

    // mencetak rata2 per lantai yg sudah disimpan di array
    for(int i = 0; i < N_LANTAI; i++) {
        std::cout << "Nilai rata-rata lantai " << i + 1 << " : " << rataan[i] << '\n';
    }

    std::cout << '\n';

    // mencetak suhu tertinggi beserta lokasinya
    std::cout << "Suhu tertinggi : " << maxSuhu << '\n';
    std::cout << "Lokasi         : Lantai " << bestLantai + 1 << ", Ruangan " << bestRuangan + 1 << '\n';

    return 0;
}