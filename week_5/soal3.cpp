/*

Nama Program        : Game dev
Nama                : Andhika Rahman Putra
NPM                 : 140810260053
Tanggal             : 22 September 2026
Deskripsi           : Program ini melakukan input data karakter, membuat output
status card, dan menghitung crit damage

*/

// menyertakan header file yg diperlukan program
#include <cctype>
#include <iostream>
#include <string>

// fungsi untuk mencetak pemisah antar komponen output
void separator() {
  std::cout << "-----------------------------------------------\n";
}

// fungsi untuk menghitung crit damage berdasarkan atk, crit rate, dan tipe
// kelas
double hitung_crit_damage(int attack_point, double crit_rate,
                          double crit_damage, char tipe_kelas) {
  double hasil; // variable sementara untuk menampung hasil perhitungan

  // proses perhitungan menggunakan kondisional
  if (crit_rate >= 80) {
    hasil = crit_damage * attack_point;
  } else {
    hasil = attack_point;

    switch (tipe_kelas) {
    case 'W':
      hasil *= 2.0;
      break;

    case 'M':
    case 'A':
      hasil *= 1.5;
      break;
    }
  }

  // mengembalikan crit damage yg sudah dihitung
  return hasil;
}

// fungsi untuk mencetak crit damage, nilai crit damage dihitung juga di fungsi
// ini
void output_crit_damage(int attack_point, double crit_rate, double crit_damage,
                        char tipe_kelas) {
  std::cout << "Hasil perhitungan crit damage : "
            << hitung_crit_damage(attack_point, crit_rate, crit_damage,
                                  tipe_kelas)
            << '\n';
}

// fungsi untuk memproses input data karakter seperti: nama karakter, atk, crit
// rate, dan crit damage
void input_data(std::string &nama_karakter, int &attack_point,
                double &crit_rate, double &crit_damage) {
  std::cout << "Masukkan nama karakter    : ";
  std::cin >> nama_karakter;
  std::cout << "Masukkan ATK              : ";
  std::cin >> attack_point;
  std::cout << "Masukkan crit Rate        : ";
  std::cin >> crit_rate;
  std::cout << "Masukkan crit DMG         : ";
  std::cin >> crit_damage;
}

// fungsi untuk mencetak sapaan kepada developer
void welcome() {
  separator();
  std::cout << "Hai developer! Silahkan masukkan data karakter.\n";
  separator();
}

// fungsi untuk memproses input tipe kelas, karena ada penanganan khusus untuk
// data ini
void input_tipe_kelas(char &tipe_kelas) {
  // membuat variabel sementara untuk menampung input
  char tmp;

  // proses input user
  std::cout << "Masukkan tipe kelas       : ";
  std::cin >> tmp;

  // mengubah input ke kapital
  tmp = toupper(tmp);

  // pengecekan kondisi masukan user
  // jika masukan bukan a, w, atau m, maka panggil fungsi ini lagi secara
  // rekursif sampai didapat input yg sesuai
  if (tmp != 'W' && tmp != 'M' && tmp != 'A') {
    std::cout << "Tipe kelas tidak valid!\n";
    input_tipe_kelas(tmp);
  }

  // masukkan nilai yg benar ke tipe kelas
  tipe_kelas = tmp;
}

// fungsi untk mencetak data karakter
void output_data(std::string nama_karakter, int attack_point, double crit_rate,
                 double crit_damage, char tipe_kelas) {
  std::cout << "|                Data karakter                |\n";
  std::cout << "Nama karakter         : " << nama_karakter << '\n';
  std::cout << "ATK                   : " << attack_point << '\n';

  // proses konversi tipe kelas menjadi kelas yg berjenis string
  std::string kelas;
  switch (tipe_kelas) {
  case 'W':
    kelas = "Warrior";
    break;

  case 'M':
    kelas = "Mage";
    break;

  case 'A':
    kelas = "Archer";
    break;
  }

  std::cout << "Tipe kelas            : " << kelas << '\n';
}

// fungsi utama
int main() {
  // deklarasi semua variabel yg dbutuhkan
  std::string nama_karakter;
  int attack_point;
  double crit_rate;
  double crit_damage;
  char tipe_kelas;

  // cetak sapaan
  welcome();

  // lakukan input data
  input_data(nama_karakter, attack_point, crit_rate, crit_damage);
  input_tipe_kelas(tipe_kelas);

  separator();

  // cetak data karakter
  output_data(nama_karakter, attack_point, crit_rate, crit_damage, tipe_kelas);

  separator();

  // hitung sekaligus mencetak crit damage
  output_crit_damage(attack_point, crit_rate, crit_damage, tipe_kelas);

  separator();

  return 0;

  // selesai
}