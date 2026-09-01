#include <iostream>
#include <string>

int main() {
  std::string nama_toko = "Toko Buah Segar";
  std::string nama_kasir = "Andi";
  char kode_kasir = 'A';
  unsigned int harga_apel = 15500;
  unsigned int harga_jeruk = 12750;
  float berat_minimum = 0.5;
  float pajak = 11.5;
  bool sedang_buka = true;

  std::string nama_pembeli;
  float berat_apel, berat_jeruk;

  std::cout << "Nama Toko   : " << nama_toko << '\n';
  std::cout << "Kasir       : " << nama_kasir << " (" << kode_kasir << ")"
            << '\n';

  std::cout << '\n';

  std::cout << "Input Transaksi\n";
  std::cout << "Nama Pembeli     : ";
  std::cin >> nama_pembeli;
  std::cout << "Berat Apel (kg)  : ";
  std::cin >> berat_apel;
  std::cout << "Berat Jeruk (kg) : ";
  std::cin >> berat_jeruk;

  std::cout << '\n';

  std::cout << "Struk Belanja\n";
  std::cout << "Pembeli     : " << nama_pembeli << '\n';
  std::cout << "Apel        : " << berat_apel << " kg" << '\n';
  std::cout << "Jeruk       : " << berat_jeruk << " kg" << '\n';

  return 0;
}
