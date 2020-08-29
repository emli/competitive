#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
class CPleilist {
public:
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);

        int n,k;
        cin >> n >> k;

        vector<pair<int,int>> a(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i].second >> a[i].first;
        }

        sort(a.begin(),a.end());

        priority_queue<int, std::vector<int>, greater<> > pq;


        ll ans = -1;
        ll sum = 0;
        for (int i = (int)a.size() - 1; i >= 0; --i) {
            pq.push(a[i].second);
            sum += a[i].second;

            ans = max(a[i].first * sum * 1LL, ans);

            if (pq.size() == k) {
                sum -= pq.top();
                pq.pop();
            }
        }

        cout << ans << endl;

	}
};
