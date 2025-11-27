//Task 1B: Transpose of a square matrix
#include <iostream>
using namespace std;
int main() {
    cout << "Enter the row and col : ";
    int n;
    cin >> n;
    int A[n][n];
    cout << "Enter the Element : " ;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cin >> A[i][j];
        }
    }
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            swap(A[i][j],A[j][i]);
        }
    }
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}
