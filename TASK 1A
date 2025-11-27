//Task 1:Transpose of a rectangular matrix
#include <iostream>
using namespace std;
int main() {
    cout << "Enter the row and col : ";
    int r,c;
    cin >> r >> c;
    int A[r][c] , T[c][r];
    cout << "Enter the Elements : " << endl;
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            cin >> A[i][j];
        }
    }
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            T[j][i] = A[i][j];
        }
    }
    for(int i=0; i<c; i++) {
        for(int j=0; j<r; j++) {
            cout << T[i][j] << " ";
        }
        cout << endl;
    }
}
