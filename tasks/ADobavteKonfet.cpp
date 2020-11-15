#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
class ADobavteKonfet {
public:
    int findMaxIndex(vector<int> &a) {
        int maxIndex = 0;
        for (int i = 0; i < a.size(); ++i) {
            if (a[i] > a[maxIndex]){
                maxIndex = i;
            }
        }
        return maxIndex;
    }

    bool check(vector<int> &a) {
        set<int> t(a.begin(),a.end());
        return t.size() == 1;
    }

    void run(std::istream& cin, std::ostream& cout) {
        int n;
        cin >> n;
        vector<int> a;
        for(int i = 1; i <= n; i++){
            a.push_back(i);
        }

        vector<int> ans;
        int add = 1;
        while(!check(a)) {
            int maxIndex = findMaxIndex(a);
            ans.push_back(maxIndex + 1);

            for (int i = 0; i < n; ++i) {
                if (maxIndex == i){
                    continue;
                }
                a[i] += add;
            }
            add++;
        }

        cout << ans.size() << endl;

        for (int an : ans) {
            cout  << an << " ";
        }
        cout << endl;

    }
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);

        int t;

        cin >> t;

        while(t--){
            run(cin,cout);
        }
	}
};
