#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> A(n);
    vector<int> B(m);
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < m; i++) {
        cin >> B[i];
    }

    for (int i = 0; i < m; i++) {
        int count = 0;

        for (int j = 0; j < n; j++) {
            if (A[j] > B[i]) {
                count++;
            }
        }

        cout << count << " ";
    }

    return 0;
}