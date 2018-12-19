#include <bits/stdc++.h>

using namespace std;

#define ll long long

class Posledovatelnost3 {
public:
    void solve(std::istream &cin, std::ostream &cout) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);

        priority_queue<ll, vector<ll>, greater<ll> > priority_queue1;
        priority_queue1.push(1);


        vector<ll> ans;

        while (ans.size() < 10000) {
            ll minNum = priority_queue1.top();
            ans.push_back(minNum);
            for (ll x : {2, 3, 5}) {
                priority_queue1.push(minNum * x);
            }
            while (!priority_queue1.empty() && minNum == priority_queue1.top())
                priority_queue1.pop();
        }

        ll x;
        cin >> x;
        cout << ans[x - 1] << endl;
    }
};
