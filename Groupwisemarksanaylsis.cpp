#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int m;
        cin >> m;
        int maximum = INT_MIN;
        int minimum = INT_MAX;
        int total = 0;
        for (int j = 0; j < m; j++) {
            int marks;
            cin >> marks;

            maximum = max(maximum, marks);
            minimum = min(minimum, marks);
            total += marks;
        }
    double average = (double)total / m;

cout << maximum << " "<< minimum << " "<< total << " "
<< fixed << setprecision(1) << average << endl;
    }

    return 0;
}