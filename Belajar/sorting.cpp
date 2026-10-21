#include <algorithm>
#include <iostream>

using namespace std;

int main() {
  int v[5] = {3, 2, 1, 5, 4};

  sort(v, v + 5, [](int a, int b) { return a > b; });

  for (int i = 0; i < 5; i++) {
    cout << v[i] << ' ';
  }

  cout << '\n';
}