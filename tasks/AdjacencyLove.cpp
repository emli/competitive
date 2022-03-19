#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class AdjacencyLove {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        int n;
        cin >> n;
        vector<int> a(n);

        int odd = 0;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            if (a[i] == 1){
                odd++;
            }
        }
        if (odd % 2 == 0){
            vector<bool> used(n);
            int c = 0;
            for (int i = 0; i < n; ++i) {
                if (a[i] % 2 == 1 && c < odd){
                    cout << a[i] << " ";
                    c++;
                    used[i] = true;
                }
            }
            for (int i = 0; i < n; ++i) {
                if (!used[i]){
                    cout << a[i] << " ";
                }
            }
        }else {
            if (odd == 1){
                cout << -1 << endl;
                return;
            }
            vector<bool> used(n);
            int c = 0;
            for (int i = 0; i < n; ++i) {
                if (a[i] % 2 == 1 && c < odd - 1){
                    cout << a[i] << " ";
                    c++;
                    used[i] = true;
                }
            }
            for (int i = 0; i < n; ++i) {
                if (!used[i] && a[i] % 2 == 0){
                    cout << a[i] << " ";
                    used[i] = true;
                }
            }
            for (int i = 0; i < n; ++i) {
                if (!used[i] && a[i] % 2 == 1){
                    cout << a[i] << " ";
                    used[i] = true;
                }
            }
        }
	}
};
