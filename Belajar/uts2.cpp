#include <iostream>

int main() {
  int mat[4][4] = {
      {1, 2, 3, 4},
      {2, 3, 4, 5},
      {3, 4, 5, 6},
      {4, 5, 6, 7},
  };

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      if (mat[i][j] != mat[j][i]) {
        std::cout << "gk simetris rik\n";
        return 0;
      }
    }
  }

  std::cout << "ini simetris\n";
}