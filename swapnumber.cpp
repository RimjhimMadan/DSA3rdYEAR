#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;

    vector<vector<int>> mat(n, vector<int>(m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> mat[i][j];
        }
    }

    for (int i = 0; i < n; i += 2) {

        for (int j = 0; j < k; j++) {
            swap(mat[i][m - k + j], mat[i + 1][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << mat[i][j];

            if (j != m - 1)
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}