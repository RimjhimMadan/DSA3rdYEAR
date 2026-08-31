#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int minPos = min_element(v.begin(), v.end()) - v.begin();
    int maxPos = max_element(v.begin(), v.end()) - v.begin();
    vector<int> arr;
    arr.insert(arr.end(), v.begin() + minPos, v.begin() + maxPos);
    v.erase( v.begin()+minPos, v.begin() + maxPos);
    arr.insert(arr.end(), v.begin() , v.end());

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

}