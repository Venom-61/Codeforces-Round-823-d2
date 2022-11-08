#include<bits/stdc++.h>
using namespace std;

#define ll long long

// A. Planets

void solve() {
    int n, c;
    cin >> n >> c;
    map<int, int> mp;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        mp[x]++;
    }

    // 1 2 2 2 3
    
    long long ans = 0;
    for(auto p : mp) {
        ans += min(c, p.second);
    }

    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int test = 1;
    cin >> test;
    while(test--) {
        solve();
    }

    return 0;
}
