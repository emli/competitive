#include <bits/stdc++.h>
using namespace std;

class CManyRequirements {
public:

    void run(vector<vector<int>> &x,vector<int> a,int n,int m,int q,int &best){
        if (a.size() == n){
            int sum = 0;

            for (int i = 0; i < q; ++i) {
                if (a[x[i][1] - 1] - a[x[i][0] - 1] == x[i][2] )
                    sum += x[i][3];
            }
            best = max(best,sum);
            return;
        }

        int last = !a.empty() ? a.back() : 0;
        for (int i = last; i < m; ++i) {
            a.push_back(i);
            run(x,a,n,m,q,best);
            a.pop_back();
        }
    }
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);

        int n,m,q;
        
        cin >> n >> m >> q;

        vector<vector<int>> x(q,vector<int>(4));

        for (int i = 0; i < q; ++i) {
            for (int j = 0; j < 4; ++j) {
                cin >> x[i][j];
            }
        }

        int best = INT_MIN;
        run(x,{},n,m,q,best);

        cout << best << endl;


	}
};
