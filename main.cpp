#include <iostream>

using namespace std;

class Matrica {
public:
  int matrix[4][4];

  void shfaqMatricen() {
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        cout << matrix[i][j] << " ";
      }
      cout << endl;
    }
  }

  int shumaDiagonales() {
    int shuma = 0;
    for (int i = 0; i < 4; i++) {
      shuma += matrix[i][i];
    }
    return shuma;
  }
};

int main() {
  Matrica m;

  cout << "Shkruani 16 elementet e matrices (4x4):" << endl;
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      cin >> m.matrix[i][j];
    }
  }

  cout << "Matrica juaj eshte:" << endl;
  m.shfaqMatricen();

  cout << "Shuma e diagonales kryesore eshte: " << m.shumaDiagonales() << endl;

  return 0;
}
