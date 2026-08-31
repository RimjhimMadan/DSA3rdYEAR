#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int m;
        cin >> m;

        long long sum = 0;

        for (int j = 0; j < m; j++) {
            int salary;
            cin >> salary;
            sum += salary;
        }

        cout << sum << endl;
    }

    return 0;
}