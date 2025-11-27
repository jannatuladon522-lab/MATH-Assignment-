//Matrix Addition, Subtraction & Multiplication
#include <iostream>
using namespace std;
void addMatrix(int x[][100], int y[][100], int result[][100], int r, int c) {
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            result[i][j] = x[i][j] + y[i][j];
        }
    }
}
void subMatrix(int x[][100], int y[][100], int result[][100], int r, int c) {
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            result[i][j] = x[i][j] - y[i][j];
        }
    }
}

void mulMatrix(int x[][100], int y[][100], int result[][100], int r, int mid, int c2) {
    for(int i=0; i<r; i++) {
        for(int j=0; j<c2; j++) {
            result[i][j] = 0;
            for(int k=0; k<mid; k++) {
                result[i][j] += x[i][k] * y[k][j];
            }
        }
    }
}
int main() {
    int rA, cA, rB, cB;
    int A[100][100], B[100][100];
    int addR[100][100], subR[100][100], mulR[100][100];
    cout << "Enter rows & columns for Matrix A: ";
    cin >> rA >> cA;
    cout << "Enter rows & columns for Matrix B: ";
    cin >> rB >> cB;
    cout << "Enter Matrix A elements:" << endl;
    for(int i=0; i<rA; i++) {
        for(int j=0; j<cA; j++) {
            cin >> A[i][j];
        }
    }
    cout << "Enter Matrix B elements:" << endl;
    for(int i=0; i<rB; i++) {
        for(int j=0; j<cB; j++) {
            cin >> B[i][j];
        }
    }
    if(rA == rB && cA == cB) {
        addMatrix(A, B, addR, rA, cA);
        cout << "---- ADDITION ----" << endl;
        for(int i=0; i<rA; i++) {
            for(int j=0; j<cA; j++) {
                cout << addR[i][j] << " ";
            }
            cout << endl;
        }
        subMatrix(A, B, subR, rA, cA);
        cout << "---- SUBTRACTION ----" << endl;
        for(int i=0; i<rA; i++) {
            for(int j=0; j<cA; j++) {
                cout << subR[i][j] << " ";
            }
            cout << endl;
        }
    } else {
        cout << "Addition & Subtraction NOT possible." << endl;
    }
    if(cA == rB) {
        mulMatrix(A, B, mulR, rA, cA, cB);
        cout << "---- MULTIPLICATION ----" << endl;
        for(int i=0; i<rA; i++) {
            for(int j=0; j<cB; j++) {
                cout << mulR[i][j] << " ";
            }
            cout << endl;
        }
    } else {
        cout << "Multiplication NOT possible." << endl;
    }

    return 0;
}
