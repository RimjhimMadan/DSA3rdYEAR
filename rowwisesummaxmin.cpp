#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++) {

        int sum = 0;
        int maximum = INT_MIN;
        int minimum = INT_MAX;

        for (int j = 0; j < m; j++) {
            int x;
            cin >> x;

            sum += x;
            maximum = max(maximum, x);
            minimum = min(minimum, x);
        }

        cout << sum << " "
             << maximum << " "
             << minimum << endl;
    }

    return 0;
}