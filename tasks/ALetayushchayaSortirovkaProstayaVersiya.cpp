#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()

class ALetayushchayaSortirovkaProstayaVersiya {
public:
    void run(std::istream& cin, std::ostream& cout) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        vector<int> b = a;

        sort(all(b));

        unordered_map<int,int> unorderedMap;
        int order = 1;
        for (int & i : b) {
            unorderedMap[i] = order++;
        }
        vector<int> pos(n + 1);

        for (int & i : a) {
            i = unorderedMap[i];
        }

        for (int i = 0; i < a.size(); ++i) {
            pos[a[i]] = i;
        }


        vector<int> dis(n + 1,1);

        dis[0] = 0;
        int maxLen = -1;
        for (int i = 1; i <= n; ++i) {

            int prevPos = pos[i - 1];
            int curPos = pos[i];

            if (prevPos < curPos){
                dis[i] = max(dis[i - 1] + 1,dis[i]);
            }
            maxLen = max(maxLen,dis[i]);
        }
        cout << n - maxLen<< endl;
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
