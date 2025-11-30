//Task 3: Check Whether a Matrix is Skew-Symmetric
#include <iostream>
using namespace std;
int main() {
    cout << "Enter the row ans col" << endl;
    int r,c,n;
    cin >> r >> c;
    int A[r][c];
    if(r == c) {
        n=r;
        cout << "Enter matrix elements: " << endl;
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                cin >> A[i][j];
            }
        }
        bool skewSymmetric = true;
        for(int i=0; i<n; i++) {
            if(A[i][i] !=0) {
                skewSymmetric = false;
                break;
            }
            for(int j=0; j<n; j++) {
                if(A[i][j] != -A[j][i]) {
                    skewSymmetric = false;
                    break;
                }
            }
        }
        if(skewSymmetric) {
            cout << "Matrix is Skew-symmetric." << endl;
        } else {
            cout << "Matrix is not Skew-symmetric." << endl;
        }
    } else {
        cout << "Matrix is not Skew-symmetric." << endl;
    }
}
