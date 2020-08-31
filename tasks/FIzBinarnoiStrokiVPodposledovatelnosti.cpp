#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
class FIzBinarnoiStrokiVPodposledovatelnosti {
public:
    void run(std::istream& cin, std::ostream& cout) {
        int len;
        string s;
        cin >> len >> s;

        vector<vector<int>> ends(2);
        int k = 1;

        vector<int> ans(len);
        for (int i = 0; i < len; ++i) {
            if (s[i] == '0'){
                if (ends[1].empty()){
                    ans[i] = k;
                    k++;
                    ends[0].push_back(i);
                }else {
                    int top = ends[1].back(); ends[1].pop_back();
                    ans[i] = ans[top];
                    ends[0].push_back(top);
                }
            }else {
                if (ends[0].empty()){
                    ans[i] = k;
                    k++;
                    ends[1].push_back(i);
                }else {
                    int top = ends[0].back(); ends[0].pop_back();
                    ans[i] = ans[top];
                    ends[1].push_back(top);
                }
            }
        }

        cout << k - 1 << endl;

        for (int i = 0; i < len; ++i) {
            cout << ans[i] << " ";
        }

        cout << endl;
    }
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int t;
        cin >> t;
        while (t--){
            run(cin,cout);
        }
	}
};
