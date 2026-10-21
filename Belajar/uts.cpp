#include <algorithm>
#include <iostream>

using namespace std;
// int: 4 byte =
int main() {
  int v[6] = {3, 2, 5, 4, 5, 1};

  for (int i = 0; i < 5; i++) {
    if (v[i] != v[i + 1])
      cout << v[i] << ' ';
  }
  cout << v[5];

  sort(v, v + 6, [](int a, int b) { return a > b; });  // jadi gini pak ini tuh saya belajar pak bukan ai, jadi saya kerumah andhika pak nah


  cout << endl;

  for (int i = 0; i < 5; i++) {
    if (v[i] != v[i + 1])
      cout << v[i] << ' ';
  }
  cout << v[5];

  cout << endl;

  return 0;
}