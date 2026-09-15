#include <iostream>

int main() {
    bool ketemu = false;

    for(int i = 1; i <= 5 && !ketemu; i++) {
        int nilai_a, nilai_b;
        
        std::cout << "Murid ke-" << i << '\n';
        std::cout << "Masukkan nilai Ujian A: ";
        std::cin >> nilai_a;

        if(nilai_a == 100) {
            ketemu = true;
            std::cout << "Perwakilan ditemukan!\n";
        } else {
            if(nilai_a >= 80) {
                std::cout << "Masukkan nilai Ujian B: ";
                std::cin >> nilai_b;

                if(nilai_b > 90) {
                    ketemu = true;
                    std::cout << "Perwakilan ditemukan!\n";
                }
            }
        }

        std::cout << '\n';
    }

    std::cout << "Program berhenti.\n";

    return 0;
}