#include <iostream>
#include <string>

int main() {
  std::string nama_praktikan;
  long long npm, nilai_tugas, nilai_uts, nilai_uas;

  std::cout << "--- Kalkulator Nilai Praktikum ---\n";

  std::cout << "Nama Praktikan        : ";
  std::cin >> nama_praktikan;

  std::cout << "3 NPM Akhir           : ";
  std::cin >> npm;

  std::cout << "Nilai Tugas           : ";
  std::cin >> nilai_tugas;

  std::cout << "Nilai UTS             : ";
  std::cin >> nilai_uts;

  std::cout << "Nilai UAS             : ";
  std::cin >> nilai_uas;

  float nilai_akhir =
      (nilai_tugas * 0.3) + (nilai_uts * 0.3) + (nilai_uas * 0.4);
  int kkm_unik = 60 + ((npm * 2) % 15);

  bool lulus = false, cumlaude = false;

  if (nilai_akhir >= kkm_unik) {
    lulus = true;

    if (nilai_akhir > 85)
      cumlaude = true;
  }

  std::cout << "------------------------------------------------\n";

  std::cout << "Nilai Akhir           : " << nilai_akhir << '\n';
  std::cout << "KKM Unik              : " << kkm_unik << '\n';

  std::cout << "------------------------------------------------\n";

  std::cout << "Status Kelulusan      : " << (lulus ? "LULUS" : "TIDAK LULUS")
            << '\n';
  std::cout << "Status Cumlaude       : "
            << (cumlaude ? "Cumlaude" : "Tidak Cumlaude") << '\n';

  return 0;
}
