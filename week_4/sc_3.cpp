#include <iostream>

int main() {
    int pilihan;

    do {
        std::cout << "=============================================\n";
        std::cout << "   E-LEARNING BANGUN DATAR YAZIDIZAY\n";
        std::cout << "   Designer: Kang Yazid\n";
        std::cout << "=============================================\n";
        std::cout << "1. Persegi\n";
        std::cout << "2. Segitiga\n";
        std::cout << "3. Hentikan Program\n";
        std::cout << "---------------------------------------------\n";
        std::cout << "Pilih menu (1-3): ";
        std::cin >> pilihan;

        switch (pilihan) {
            case 1:
            int baris, kolom;
            std::cout << "Masukkan jumlah baris: ";
            std::cin >> baris;
            std::cout << "Masukkan jumlah kolom: ";
            std::cin >> kolom;

            for(int i = 0; i < baris; i++) {
                for(int j = 0; j < kolom; j++) {
                    std::cout << '*';
                }
                std::cout << '\n';
            }
            break;

            case 2:
            std::cout << "[Membuka menu segitiga]\n";
            break;

            case 3:
            std::cout << "Sampai jumpa lagi, Yazidizay!\n";
            break;

            default:
            std::cout << "Milih yang bener dong >_<\n";
        }

        std::cout << '\n';
    }while (pilihan != 3);

    return 0;
}