#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
class AMexPodmnozhestv {
public:
    int dfs(int n,unordered_map<int,int> &unorderedMap){
        if (unorderedMap.count(n) && unorderedMap[n] > 0){
            unorderedMap[n]--;
            return dfs(n + 1,unorderedMap);
        }
        return n;
    }
    void run(std::istream& cin, std::ostream& cout) {
        int n;
        cin >> n;

        unordered_map<int,int> unorderedMap;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            unorderedMap[x]++;
        }


        int x =  (unorderedMap.count(0) ? dfs(0, unorderedMap) : 0);
        int y = (unorderedMap.count(0) ? dfs(0, unorderedMap) : 0) ;

        cout <<x + y << endl;

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
