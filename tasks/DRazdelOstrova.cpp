#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class DRazdelOstrova {
public:
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int a,b,c,d,n;
        cin >> a >> b >> c >> d >> n;

        vector<int> v(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }

        cout << "YES" << endl;

        vector<vector<char>> matrix(max(b,d),vector<char>(a + c,'.'));

        char order = 'a';
        for (int i = b - 1; i >= 0; --i) {
            for (int j = a - 1; j >=0 ; --j) {
                matrix[i][j] = order;
            }
        }

        int l1 = matrix.size();
        int l2 = matrix[0].size();

        for (int i = 0; i < l1; ++i) {
            for (int j = 0; j < l2; ++j) {
                cout << matrix[i][j];
            }
            cout << endl;
        }
	}
};
