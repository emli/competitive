#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define all(x) (x).begin(),(x).end()
const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};

class BSortirovkaSdvigami {
public:
    static void solve(std::istream &cin, std::ostream &cout) {
        int n;
        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        vector <pair<int, int>> ans;

        int pos = 0;
        for (int i = 0; i < n; ++i) {
            int minIndex = -1;
            for (int j = pos; j < n; ++j) {
                if (minIndex == -1 || a[minIndex] < a[j]) {
                    minIndex = j;
                }
            }

            if (abs(minIndex - pos) > 0) {
                ans.emplace_back(pos + 1, minIndex + 1);
                rotate(a.begin() + pos, a.begin() + minIndex + 1, a.begin() + minIndex);
                pos++;
            }


        }

        cout << ans.size() << endl;

        for (pair<int, int> x: ans) {
            cout << x.first << " " << x.second << " " << x.second - x.first << endl;
        }
    }
};
