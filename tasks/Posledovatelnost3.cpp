#include <bits/stdc++.h>

using namespace std;

#define ll long long

class Posledovatelnost3 {
public:
    void solve(std::istream &cin, std::ostream &cout) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);

        priority_queue<ll, vector<ll>, greater<ll> > pq;
        pq.push(1);


        vector<ll> ans;

        ll x, minNum = 0, len = 0;
        cin >> x;

        while (len < x) {
            minNum = pq.top();
            ans.push_back(minNum);
            for (ll x : {2, 3, 5}) {
                pq.push(minNum * x);
            }
            while (minNum == pq.top())
                pq.pop();
            len++;
        }

        cout << minNum << endl;
    }
};
