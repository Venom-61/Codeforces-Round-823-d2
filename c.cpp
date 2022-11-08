#include<bits/stdc++.h>
using namespace std;

#define ll long long

// C. Minimum Notation

void solve() {
    string s;
    cin >> s;
    int n = s.size();

    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        a[i] = int(s[i] - '0');
    }

    vector<int> mn(n+1, 9);
    for(int i = n - 1; i >= 0; i--) {
        mn[i] = min(mn[i + 1], a[i]);
    }

    priority_queue<int, vector<int>, greater<int>> pq;
    for(int i = 0; i < n; i++) {
        if(a[i] == mn[i]) {
            pq.push(a[i]);
        } else {
            pq.push(min(a[i] + 1, 9));
        }
    }

    while(!pq.empty()) {
        cout << pq.top();
        pq.pop();
    }
    cout << "\n";
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int tc = 1;
    cin >> tc;
    for(int i = 1; i <= tc; ++i) {
        // cout << "Case #" << i << ": ";
        solve();
    }

    return 0;
}
