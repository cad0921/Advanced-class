#include<iostream>
 
using namespace std;
 
int main() {
    int n, time;
    cin >> n >> time;
    int x[n + 1];
    x[0] = 0;
    for (int i = 1; i <= n; i++) {
        cin >> x[i];
        x[i] += x[i - 1];
    }
    int sum = 0;
    for (int i = 0; i < n; i++) {
        int left  = i+1, right = n;
        int mid = (left + right) / 2;
        while (left <= right) {
            if (x[mid] - x[i] > time) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
            mid = (left + right) / 2;
        }
        sum = max(sum , mid-i);
    }
    cout << sum << '\n';
}