#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class AAirplane {
public:
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);

        vector<vector<int>> a(3,vector<int>(3));
        vector<int> d(3);

        for(int i = 0; i < 3; i++){
            cin >> d[i];
        }

        a[0][1] = a[1][0] = d[0];
        a[1][2] = a[2][1] = d[1];
        a[2][0] = a[0][2] = d[2];


        vector<int> p = {0,1,2};

        int ans = 1e9;
        do {
            int sum = 0;
            for(int i = 0; i < 2; i++){
                sum += a[p[i]][p[i + 1]];
            }
            ans = min(ans,sum);
        }while (next_permutation(p.begin(),p.end()));

        cout << ans << endl;
    }
};
