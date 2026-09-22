#include <cctype>
#include <iostream>
#include <string>

void separator() {
  std::cout << "-----------------------------------------------\n";
}

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

void welcome() {
  separator();
  std::cout << "Hai developer! Silahkan masukkan data karakter.\n";
  separator();
}

void input_tipe_kelas(char &tipe_kelas) {
  char tmp;

  std::cout << "Masukkan tipe kelas       : ";
  std::cin >> tmp;

  tmp = toupper(tmp);

  if (tmp != 'W' && tmp != 'M' && tmp != 'A') {
    std::cout << "Tipe kelas tidak valid!\n";
    input_tipe_kelas(tmp);
  }

  tipe_kelas = tmp;
}

void output_data(std::string nama_karakter, int attack_point, double crit_rate,
                 double crit_damage, char tipe_kelas) {
  std::cout << "Data karakter:\n";
  std::cout << "Nama karakter         : " << nama_karakter << '\n';
  std::cout << "ATK                   : " << attack_point << '\n';
  std::cout << "Crit rate             : " << crit_rate << '\n';
  std::cout << "Crit damage           : " << crit_damage << '\n';
  std::cout << "Tipe kelas            : " << tipe_kelas << '\n';
}

int main() {
  std::string nama_karakter;
  int attack_point;
  double crit_rate;
  double crit_damage;
  char tipe_kelas;

  welcome();

  input_data(nama_karakter, attack_point, crit_rate, crit_damage);
  input_tipe_kelas(tipe_kelas);

  separator();

  output_data(nama_karakter, attack_point, crit_rate, crit_damage, tipe_kelas);

  separator();

  return 0;
}