#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class BSborPosilok {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        int n;
        cin >> n;
        vector<pair<int,int>> a(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i].first >> a[i].second;
        }

        sort(all(a));

        for(int i = 0; i < (int)a.size() - 1; i++){
            if (a[i].second > a[i + 1].second){
                cout << "NO" << endl;
                return;
            }
        }

        int x = 0;
        int y = 0;

        string ans;
        for (int i = 0; i < a.size(); ++i) {

            while(x < a[i].first){
                x++;
                ans.push_back('R');
            }

            while(y < a[i].second){
                y++;
                ans.push_back('U');
            }
        }


        cout << "YES\n" << ans << '\n';
	}
};
