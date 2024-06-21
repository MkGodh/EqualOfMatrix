#include <iostream>
#include <vector>

using namespace std;

bool matrix_equality(int matA[4][4], int matB[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (matA[i][j] != matB[i][j]) {
                return false;
            }
        }
    }
    return true;
}

void diagonal_view(int matA[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (i != j) {
                matA[i][j] = 0;
            }
        }
    }
}

int main() {
    int matA[4][4];
    int matB[4][4];

    int valueA;
    int valueB;

    cout << "Please input values for matrix A: "
        << "\n";

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> matA[i][j];
        }
    }
    cout << "Please input values for matrix B: "
        << "\n";

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> matB[i][j];
        }
    }
    if (matrix_equality(matA, matB)) {
        diagonal_view(matA);
        cout << "Matrices are equal!" << endl;
    }
    else {
        cout << "Matrices are not equal!" << endl;
        return 0;
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << matA[i][j] << " ";
        }
        cout << endl;
    }
}
