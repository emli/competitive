#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class ValleysAndHills {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        int n,m;
        cin >> n >> m;


        string ans;

        char first = '0';
        char second = '1';
        if (m > n) {
            swap(n,m);
            swap(first,second);
        }

        ans.push_back(first);
        ans.push_back(second);

        int i = 0;
        while (n > 0 && m > 0){
            if (n > 0 && i % 2 == 0){
                ans.push_back(first);
                n--;
            }else if (m > 0 && i % 2 == 1){
                ans.push_back(second);
                m--;
            }
            i++;
        }

        if (n > 0) {
            ans.push_back(first);
            n--;
        }
        if (m > 0) {
            ans.push_back(second);
            m--;
        }
        for (int j = 0; j < n; ++j) {
            ans.push_back(first);
            ans.push_back(second);
            ans.push_back(first);
        }


        cout << ans.size() << endl;
        cout << ans << endl;
    }
};
