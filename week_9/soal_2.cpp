// NPM : 140810260053

#include <iostream>
#include <string>

struct Badan {
    float massaLemak, massaOtot;
};

struct Waktu {
    int tgl, bulan, tahun;
};

struct Profil {
    std::string nama;
    Badan pengukuranBadan;
    Waktu waktuPengukuran;
};

void perbaruiNama(Profil &profil) {
    profil.nama = "Brother " + profil.nama;
}

Profil inputProfil() {
    std::cout << "=== INPUT PROFIL GYM DEWA3D ===\n";

    Profil profilBaru;

    std::cout << "Nama          : ";
    std::cin >> profilBaru.nama;
    std::cout << "Massa Lemak   : ";
    std::cin >> profilBaru.pengukuranBadan.massaLemak;
    std::cout << "Massa Otot    : ";
    std::cin >> profilBaru.pengukuranBadan.massaOtot;
    std::cout << "Tanggal       : ";
    std::cin >> profilBaru.waktuPengukuran.tgl;
    std::cout << "Bulan         : ";
    std::cin >> profilBaru.waktuPengukuran.bulan;
    std::cout << "Tahun         : ";
    std::cin >> profilBaru.waktuPengukuran.tahun;

    perbaruiNama(profilBaru);

    return profilBaru;
}

Profil simulasiAfter(Profil profilAsli) {
    Profil profilAfter = profilAsli;

    if(profilAsli.waktuPengukuran.tgl >= 1 && profilAsli.waktuPengukuran.tgl <= 14) {
        profilAfter.pengukuranBadan.massaLemak -= profilAfter.pengukuranBadan.massaLemak * 0.2;
        profilAfter.pengukuranBadan.massaOtot += profilAfter.pengukuranBadan.massaOtot * 0.5;
        profilAfter.waktuPengukuran.tgl += 7;
    }

    return profilAfter;
}

void cetakProfil(const Profil &profilAsli, const Profil &profilAfter) {
    std::cout << "=== PROFIL SAAT INI ===\n";
    std::cout << "Nama               : " << profilAsli.nama << '\n';
    std::cout << "Massa Lemak        : " << profilAsli.pengukuranBadan.massaLemak << '\n';
    std::cout << "Massa Otot         : " << profilAsli.pengukuranBadan.massaOtot << '\n';
    std::cout << "Tanggal Pengukuran : " << profilAsli.waktuPengukuran.tgl << "-" << profilAsli.waktuPengukuran.bulan << "-"
                << profilAsli.waktuPengukuran.tahun << '\n';

    std::cout << "=== HASIL SIMULASI (1 MINGGU KEMUDIAN) ===\n";
    std::cout << "Nama               : " << profilAfter.nama << '\n';
    std::cout << "Massa Lemak        : " << profilAfter.pengukuranBadan.massaLemak << '\n';
    std::cout << "Massa Otot         : " << profilAfter.pengukuranBadan.massaOtot << '\n';
    std::cout << "Tanggal Pengukuran : " << profilAfter.waktuPengukuran.tgl << "-" << profilAfter.waktuPengukuran.bulan << "-"
                << profilAfter.waktuPengukuran.tahun << '\n';
}

int main() {
    Profil profilAwal = inputProfil();
    Profil profilAfter = simulasiAfter(profilAwal);
    cetakProfil(profilAwal, profilAfter);
}