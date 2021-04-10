#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};

class AShpionObnaruzhen {
public:
    static void run(std::istream &cin, std::ostream &cout) {
        int n;
        cin >> n;
        vector<int> a(n);
        unordered_map<int,int> c;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            c[a[i]]++;
        }


        for (int i = 0; i < n; ++i) {
            if (c[a[i]] == 1){
                cout << i + 1 << endl;
            }
        }
    }

    static void solve(std::istream &cin, std::ostream &cout) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);

        int t;
        cin >> t;

        while (t--) {
            run(cin, cout);
        }
    }
};
