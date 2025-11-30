//Task 2: Check Whether a Matrix is Symmetric
#include <iostream>
using namespace std;
int main() {
    cout << "Enter the row ans col" << endl;
    int r,c,n;
    cin >> r >> c;
    int A[r][c];
    if(r == c) {
        n=r;
        cout << "Enter matrix elements:" << endl;
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                cin >> A[i][j];
            }
        }
        bool symmetric = true;
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                if(A[i][j] != A[j][i]) {
                    symmetric = false;
                    break;
                }
            }
        }
        if(symmetric) {
            cout << "Matrix is symmetric." << endl;
        } else {
            cout << "Matrix is not symmetric." << endl;
        }
    } else {
        cout << "Matrix is not symmetric." << endl;
    }
}
