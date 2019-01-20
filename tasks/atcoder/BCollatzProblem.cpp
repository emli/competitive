#include <bits/stdc++.h>
#include <spcppl/define.h>
using namespace std;

class BCollatzProblem {
public:
    int f(int n){
        if (n % 2 == 0){
            return n / 2;
        }
        return 3 * n + 1;
    }
	void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int s;
        cin >> s;
        vector<int> a = {s};

        for(int i = 1; i <= N; i++){
            a.emplace_back(f(a[i-1]));
        }


        unordered_map<int,bool > m;
        for (int i = 0; i < a.size(); ++i) {
            if (m.count(a[i])){
                cout << i + 1 << endl;
                return;
            }
            m[a[i]] = true;
        }

	}
};
