#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class AYaroslavIPerestanovki {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<pair<int,int>> d;
        map<int,int> map;

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            map[a[i]]++;
        }
        for (int i = 1; i <= 1000; ++i) {
            if (map[i] > 0){
                d.emplace_back(map[i],i);
            }
        }

        sort(d.rbegin(), d.rend());

        vector<int> t;

        for (auto & i : d) {
            for (int j = 0; j < i.first; ++j) {
                t.push_back(i.second);
            }
        }


        int pointer = 0;
        vector<int> used(n);

        for (int i = 0; i < n; i+=2) {
            used[i] = t[pointer++];
        }

        for (int i = 1; i < n; i+=2) {
            used[i] = t[pointer++];
        }

        for (int i = 0; i < n - 1; ++i) {
            if (used[i] == used[i + 1]){
                cout << "NO" << endl;
                return;
            }
        }
        cout << "YES" << endl;
	}
};
